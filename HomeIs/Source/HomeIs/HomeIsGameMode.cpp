// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HomeIsGameMode.h"
#include "HomeIsHUD.h"
#include "HomeIsCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "HomeIs/ZombieSpawner.h"


AHomeIsGameMode::AHomeIsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	wave = 0;

	// use our custom HUD class
	HUDClass = AHomeIsHUD::StaticClass();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AZombieSpawner::StaticClass(), spawners);
	PrimaryActorTick.bCanEverTick = true;
	waveCooldown = 0.0f;
}

void AHomeIsGameMode::Tick(float DeltaTime)
{
	if (spawners.Num() > 0)
	{
		bool startNewWave = true;
		if (waveCooldown == 0.0f)
		{
			TArray<AActor*> zombiesInWorld;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AZombieBase::StaticClass(), zombiesInWorld);

			if (zombiesInWorld.Num() > 0)
			{
				startNewWave = false;
			}
			else
			{
				for (int i = 0; i < spawners.Num(); i++)
				{
					for (int j = 0; j < ((AZombieSpawner*)spawners[i])->thingsToSpawn.Num(); j++)
					{
						startNewWave = false;
					}
				}
			}
		}

		if (startNewWave)
		{
			waveCooldown += DeltaTime;
			if (waveCooldown > 1.0f)
			{
				int zombiesToSpawn = 5 * wave;
				int numberOfSpawners = spawners.Num();
				int j = 0;
				for (size_t i = 0; i < zombiesToSpawn; i++)
				{
					if (i - (j * numberOfSpawners) >= numberOfSpawners)
					{
						j++;
					}
					((AZombieSpawner*)spawners[i - (j * numberOfSpawners)])->thingsToSpawn.Push(((AZombieSpawner*)spawners[i - (j * numberOfSpawners)])->mySpawn);
				}
				wave++;
				waveCooldown = 0.0f;
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Zombie Spawners In Map, Wave Cannot Start."));
	}
}
