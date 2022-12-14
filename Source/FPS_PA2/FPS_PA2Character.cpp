// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_PA2Character.h"
#include "FPS_PA2Projectile.h"
#include "IKAnimInstance.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AFPS_PA2Character

AFPS_PA2Character::AFPS_PA2Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	bIsAiming = false;
	OpticIndex = 0;
}

void AFPS_PA2Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("S_HandR"));

	// use this to switch between 1st and 3rd person animations
	TutAnimInstance = Cast<UIKAnimInstance>(GetMesh1P()->GetAnimInstance());
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFPS_PA2Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPS_PA2Character::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPS_PA2Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPS_PA2Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFPS_PA2Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFPS_PA2Character::LookUpAtRate);
}

void AFPS_PA2Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// clients have their own bIsAiming so don't want server to pass bIsAiming to all clients, we just want them to see our aim animation
	DOREPLIFETIME_CONDITION(AFPS_PA2Character, bIsAiming, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(AFPS_PA2Character, OpticIndex, COND_SkipOwner);
}

void AFPS_PA2Character::SetAiming(bool IsAiming)
{
	bIsAiming = IsAiming;
	if (TutAnimInstance)
	{
		TutAnimInstance->SetAiming(bIsAiming);
	}
	if (!HasAuthority())
	{
		// should this be validate or implement?
		//Server_SetAiming_Validate(IsAiming);
		//Server_SetAiming_Implementation(IsAiming);
		//Server_SetAiming(IsAiming);
	}
}

void AFPS_PA2Character::OnRep_IsAiming()
{
	if (TutAnimInstance)
	{
		TutAnimInstance->SetAiming(bIsAiming);
	}
}

//bool AFPS_PA2Character::Server_SetAiming_Validate(bool IsAiming)
//{
//	return true;
//}

//void AFPS_PA2Character::Server_SetAiming_Implementation(bool IsAiming)
//{
//	SetAiming(IsAiming);
//}

//void AFPS_PA2Character::Server_SetAiming(bool IsAiming)
//{
//	SetAiming(IsAiming);
//}


void AFPS_PA2Character::OnRep_OpticIndex()
{
	CurrentOptic = Optics[OpticIndex];
	if (TutAnimInstance)
	{
		TutAnimInstance->CycledOptic();
	}
}

//bool AFPS_PA2Character::OnRep_OpticIndex_Validate(uint8 NewIndex)
//{
//	return true;
//}

//void AFPS_PA2Character::OnRep_OpticIndex_Implementation(uint8 NewIndex)
//{
//	OpticIndex = NewIndex;
//	OnRep_OpticIndex();
//}


void AFPS_PA2Character::CycleOptic()
{
	OpticIndex += 1;
	// bounds checking
	if (OpticIndex >= Optics.Num())
	{
		OpticIndex = 0;
	}
	CurrentOptic = Optics[OpticIndex];
	if (TutAnimInstance)
	{
		TutAnimInstance->CycledOptic();
	}
	if (!HasAuthority())
	{
		//Server_OpticIndex(OpticIndex);
	}
}

void AFPS_PA2Character::Reload()
{
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
			AnimInstance->Montage_JumpToSection(FName("Reload"));
		}
	}
	if (TutAnimInstance)
	{
		TutAnimInstance->Reload();
	}
}

void AFPS_PA2Character::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			const FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			//const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			//World->SpawnActor<AFPS_PA2Projectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AFPS_PA2Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFPS_PA2Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFPS_PA2Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFPS_PA2Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
