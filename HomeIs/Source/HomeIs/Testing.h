// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HomeIs/IAttackable.h"
#include "Testing.generated.h"

UCLASS()
class HOMEIS_API ATesting : public AActor, public IIAttackable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATesting();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	void DealDamage(float damageDealt);
};
