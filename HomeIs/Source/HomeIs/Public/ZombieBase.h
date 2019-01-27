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
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _damageReach;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _movementSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _radius;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* _targetActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USphereComponent * _viewSphere;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Attack Function
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void Attack(AActor * _actorAttacking);
	//Deal Damage
	UFUNCTION(BlueprintCallable, Category = "Attack")
	virtual void DealDamage(float damageDealt);
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Target")
	void GoToTarget(float deltaTime);
	UFUNCTION(BlueprintCallable, Category = "Target")
	bool CheckHasTarget();
	void FindTarget();
	UFUNCTION(BlueprintCallable, Category = "Target")
	bool CheckIfNearTarget();
	UFUNCTION(BlueprintCallable, Category = "Target")
	FVector GetTargetPosition();

private:
	float dT;
	FVector _vectorBetween;
	FVector newLocation;
	FRotator rotation;
	bool hasTarget;
	
};
