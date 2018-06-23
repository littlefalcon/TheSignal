// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SpaceHorrorGameMode.h"
#include "SpaceHorrorHUD.h"
#include "SpaceHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceHorrorGameMode::ASpaceHorrorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/DynamicContent/Additional/FirstPersonCharacter")); 
	DefaultPawnClass = PlayerPawnClassFinder.Class;					//D:\Unreal_Learn\TheSignal\Content\DynamicContent\Additional

	// use our custom HUD class
	HUDClass = ASpaceHorrorHUD::StaticClass();
}
