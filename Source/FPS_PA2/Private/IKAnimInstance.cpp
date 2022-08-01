// Fill out your copyright notice in the Description page of Project Settings.


#include "IKAnimInstance.h"
#include "FPS_PA2/FPS_PA2Character.h"

UIKAnimInstance::UIKAnimInstance()
{

}

void UIKAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	Character = Cast<AFPS_PA2Character>(TryGetPawnOwner());
}

void UIKAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}
