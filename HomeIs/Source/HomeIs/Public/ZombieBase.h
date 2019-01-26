// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IAttackable.h"
#include "ZombieBase.generated.h"

UCLASS()
class HOMEIS_API AZombieBase : public ACharacter, public IIAttackable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AZombieBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void PostInitializeComponents() override;

public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _health;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _damage;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Attack Function
	UFUNCTION(BlueprintCallable, Category = "Attack")
	virtual void Attack(APawn* _pawnAttacking);
	//Deal Damage
	virtual void DealDamage(float damageDealt);
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	
};
