// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IKAnimInstance.generated.h"

class AFPS_PA2Character;

/**
 * 
 */
UCLASS()
class FPS_PA2_API UIKAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UIKAnimInstance();

	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadOnly, Category = "Kyle")
	AFPS_PA2Character* Character;

	UPROPERTY(BlueprintReadOnly, Category = "Kyle")
	FTransform RelativeHandTransform;

	UPROPERTY(BlueprintReadOnly, Category = "Kyle")
	FTransform SightTransform;

	UPROPERTY(BlueprintReadOnly, Category = "Kyle")
	FTransform LeftHandTransform;

	FTransform FinalHandTransform;

	UPROPERTY(BlueprintReadOnly, Category = "Kyle")
	float AimAlpha;

	UPROPERTY(BlueprintReadOnly, Category = "Kyle")
	float ReloadAlpha;

	bool bInterpAiming;
	bool bIsAiming;
	bool bInterpRelativeHand;

protected:
	void SetSightTransform();
	void SetRelativeHandTransform();
	void SetFinalHandTransform();
	void SetLeftHandIK();
	void InterpAiming();
	void InterpRelativeHand();

public:
	void SetAiming(bool IsAiming);
	void CycledOptic();
	void Reload();

	UFUNCTION(BlueprintCallable, Category = "Kyle")
	void StopReload();
};
