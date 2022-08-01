// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_PA2GameMode.h"
#include "FPS_PA2HUD.h"
#include "FPS_PA2Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS_PA2GameMode::AFPS_PA2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	//HUDClass = AFPS_PA2HUD::StaticClass();
}
