// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HomeIsGameMode.h"
#include "HomeIsHUD.h"
#include "HomeIsCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
AHomeIsGameMode::AHomeIsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHomeIsHUD::StaticClass();
	/*TArray<AActor*> spawners;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), );*/
}
