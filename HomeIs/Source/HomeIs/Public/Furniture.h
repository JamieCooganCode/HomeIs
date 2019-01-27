// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HomeIs/IInteractable.h"
#include "Components/StaticMeshComponent.h"
#include "Furniture.generated.h"

class AHomeIsCharacter;

UCLASS()
class HOMEIS_API AFurniture : public AActor, public IIInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFurniture();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "stats")
		UStaticMeshComponent* _myRaycastCollider;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CheckForTypeValue();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Type")
	int _furnitureType;
	
	AHomeIsCharacter* character;

	UStaticMeshComponent * MeshComponent;

	//--------------------------------------------------------------------------------------------------
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FurnitureTypes")
		UStaticMesh* bed;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FurnitureTypes")
		UStaticMesh* sofa;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FurnitureTypes")
		UStaticMesh* bookcase;
	//--------------------------------------------------------------------------------------------------

	void Interact();
};
