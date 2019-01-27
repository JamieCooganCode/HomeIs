// Fill out your copyright notice in the Description page of Project Settings.

#include "ZombieSpawner.h"
#include "Engine/World.h"


// Sets default values
AZombieSpawner::AZombieSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieSpawner::BeginPlay()
{
	Super::BeginPlay();
}

void AZombieSpawner::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}


// Called every frame
void AZombieSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (thingsToSpawn.Num() > 0)
	{
		timeSinceLastSpawn += DeltaTime;
		if(timeSinceLastSpawn >= cooldownBetweenSpawns)
		{
			timeSinceLastSpawn += DeltaTime;
			FActorSpawnParameters spawnInfo;
			spawnInfo.Owner = this;
			spawnInfo.Instigator = Instigator;
			spawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
			FVector pos = GetActorLocation() + FVector(0.0f, 0.0f, -210.0f);
			AZombieBase* zombie = GetWorld()->SpawnActor<AZombieBase>(thingsToSpawn[0], pos, GetActorRotation(), spawnInfo);
			thingsToSpawn.RemoveSingle(thingsToSpawn[0]);

			timeSinceLastSpawn = 0.0f;
		}
	}
}

