// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HomeIs/IAttackable.h"
#include "HomeIs/IInteractable.h"
#include "Components/StaticMeshComponent.h"
#include "Barricade.generated.h"

UCLASS()
class HOMEIS_API ABarricade : public AActor, public IIAttackable, public IIInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarricade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "stats")
	float _timeSinceRepair;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "stats")
	float _repairCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "stats")
	int _health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "stats")
	int _maxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "stats")
	UStaticMeshComponent* _myRaycastCollider;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DealDamage(float damageDealt);
	void Repair(int repairAmmount);
	void Interact();

	void SetModel(int hp);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMeshComponent * MeshComponent;

	//--------------------------------------------------------------------------------------------------
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* sixHP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* fiveHP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* fourHP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* threeHP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* twoHP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* oneHP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health Stages")
	UStaticMesh* zeroHP;
	//--------------------------------------------------------------------------------------------------


};
