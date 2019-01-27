// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HomeIs/Public/ZombieBase.h"
#include "ZombieSpawner.generated.h"

UCLASS()
class HOMEIS_API AZombieSpawner : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombieSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<TSubclassOf<AZombieBase>> thingsToSpawn;

	UPROPERTY(EditAnywhere, Category = "Stats")
		float timeSinceLastSpawn;
	UPROPERTY(EditAnywhere, Category = "Stats")
		float cooldownBetweenSpawns;
	UPROPERTY(EditAnywhere, Category = "Stats")
		TSubclassOf<AZombieBase> mySpawn;
};
