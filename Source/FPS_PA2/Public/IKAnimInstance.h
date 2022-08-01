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
};
