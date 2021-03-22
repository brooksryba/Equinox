// Copyright Epic Games, Inc. All Rights Reserved.

#include "EquinoxGameMode.h"
#include "EquinoxHUD.h"
#include "EquinoxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEquinoxGameMode::AEquinoxGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEquinoxHUD::StaticClass();
}
