// Fill out your copyright notice in the Description page of Project Settings.

#include "Furniture.h"
#include "HomeIsCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "EngineMinimal.h"

// Sets default values
AFurniture::AFurniture()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_myRaycastCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("raycastCollider"));
	RootComponent = _myRaycastCollider;
	_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel3, ECollisionResponse::ECR_Ignore);
	_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);
	_myRaycastCollider->SetHiddenInGame(true);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FurnitureType"));
	MeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AFurniture::BeginPlay()
{
	Super::BeginPlay();
	character = Cast<AHomeIsCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	
}

// Called every frame
void AFurniture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFurniture::CheckForTypeValue()
{
	if (_furnitureType == 1)
	{
		MeshComponent->SetStaticMesh(bed);
	}
	else if (_furnitureType == 2)
	{
		MeshComponent->SetStaticMesh(sofa);
	}
	else if (_furnitureType == 3)
	{
		MeshComponent->SetStaticMesh(bookcase);
	}
}

void AFurniture::Interact()
{
	CheckForTypeValue();
}
