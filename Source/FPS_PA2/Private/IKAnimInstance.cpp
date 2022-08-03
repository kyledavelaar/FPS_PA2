// Fill out your copyright notice in the Description page of Project Settings.


#include "IKAnimInstance.h"
#include "FPS_PA2/FPS_PA2Character.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"

UIKAnimInstance::UIKAnimInstance()
{
	AimAlpha = 0.0f;
	bInterpAiming = false;
	bIsAiming = false;
	bInterpRelativeHand = false;
	ReloadAlpha = 1.0f;
}

void UIKAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	Character = Cast<AFPS_PA2Character>(TryGetPawnOwner());
	
	if (Character)
	{
		FTimerHandle TSetSightTransform;
		FTimerHandle TSetRelativeHandTransform;
		GetWorld()->GetTimerManager().SetTimer(TSetSightTransform, this, &UIKAnimInstance::SetSightTransform, 0.3f, false);
		GetWorld()->GetTimerManager().SetTimer(TSetRelativeHandTransform, this, &UIKAnimInstance::SetRelativeHandTransform, 0.3f, false);
	}
	else
	{

		UE_LOG(LogTemp, Warning, TEXT("Failed to get character"));
	}

}

void UIKAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!Character) { return; }

	if (bInterpAiming)
	{
		InterpAiming();
	}
	if (bInterpRelativeHand)
	{
		InterpRelativeHand();
	}

	SetLeftHandIK();
}

void UIKAnimInstance::SetSightTransform()
{
	// GetComponentTransform called GetWorldTransform in BP Editor
	FTransform CamTransform = Character->GetFirstPersonCameraComponent()->GetComponentTransform();
	FTransform MeshTransform = Character->GetMesh1P()->GetComponentTransform();
	FTransform Relative = UKismetMathLibrary::MakeRelativeTransform(CamTransform, MeshTransform);
	FVector NewSightVector = Relative.GetLocation();
	FVector ForwardVec = Relative.GetRotation().GetForwardVector();
	ForwardVec *= 30.0f;
	NewSightVector += ForwardVec;
	SightTransform.SetLocation(NewSightVector);
	SightTransform.SetRotation(Relative.Rotator().Quaternion());

}

void UIKAnimInstance::SetRelativeHandTransform()
{
	if (Character->GetCurrentOptic())
	{
		FTransform OpticSocketTransform = Character->GetCurrentOptic()->GetSocketTransform(FName("S_Aim"));
		FTransform MeshTransform = Character->GetMesh1P()->GetSocketTransform(FName("hand_r"));
		RelativeHandTransform = UKismetMathLibrary::MakeRelativeTransform(OpticSocketTransform, MeshTransform);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to get current optic"));
	}
}

void UIKAnimInstance::SetFinalHandTransform()
{
	if (Character->GetCurrentOptic())
	{
		FTransform OpticSocketTransform = Character->GetCurrentOptic()->GetSocketTransform(FName("S_Aim"));
		FTransform MeshTransform = Character->GetMesh1P()->GetSocketTransform(FName("hand_r"));
		FinalHandTransform = UKismetMathLibrary::MakeRelativeTransform(OpticSocketTransform, MeshTransform);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to get current optic"));
	}
}

void UIKAnimInstance::SetLeftHandIK()
{
	if (Character)
	{
		FTransform GunTransform = Character->GetFPGun()->GetSocketTransform(FName("S_LeftHand"));
		FTransform MeshTransform = Character->GetMesh1P()->GetSocketTransform(FName("hand_r"));
		LeftHandTransform = UKismetMathLibrary::MakeRelativeTransform(GunTransform, MeshTransform);

	}
}

void UIKAnimInstance::InterpAiming()
{
	AimAlpha = UKismetMathLibrary::FInterpTo(AimAlpha, static_cast<float>(bIsAiming), GetWorld()->GetDeltaSeconds(), 10.0f);

	if (AimAlpha >= 1.0f || AimAlpha <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Alpha: %f"), AimAlpha);
		bInterpAiming = false;
	}
}

void UIKAnimInstance::InterpRelativeHand()
{
	RelativeHandTransform = UKismetMathLibrary::TInterpTo(RelativeHandTransform, FinalHandTransform, GetWorld()->GetDeltaSeconds(), 10.0f);
	
	if (RelativeHandTransform.Equals(FinalHandTransform))
	{
		bInterpRelativeHand = false;
	}
}

void UIKAnimInstance::SetAiming(bool IsAiming)
{
	if (bIsAiming != IsAiming)
	{
		bIsAiming = IsAiming;
		bInterpAiming = true;
	}
}

// event that says optic just changed
void UIKAnimInstance::CycledOptic()
{
	SetFinalHandTransform();
	bInterpRelativeHand = true;
}

void UIKAnimInstance::Reload()
{
	if (ReloadAlpha == 1.0f)
	{
		ReloadAlpha = 0.0f;
	}
	else if (ReloadAlpha == 0.0f)
	{
		ReloadAlpha = 1.0f;
	}
}

void UIKAnimInstance::StopReload()
{
	ReloadAlpha = 1.0f;
}
