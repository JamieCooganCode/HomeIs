// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IAttackable.h"
#include "TestBox.generated.h"

UCLASS()
class HOMEIS_API ATestBox : public AActor, public IIAttackable
{
	GENERATED_BODY()
private:


public:	
	// Sets default values for this actor's properties
	ATestBox();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _health;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void DealDamage(float damageDone) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
