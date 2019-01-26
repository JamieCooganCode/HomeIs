// Fill out your copyright notice in the Description page of Project Settings.

#include "Barricade.h"


// Sets default values
ABarricade::ABarricade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_myRaycastCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("raycastCollider"));
	_myRaycastCollider->SetupAttachment(this->GetRootComponent());
}

// Called when the game starts or when spawned
void ABarricade::BeginPlay()
{
	Super::BeginPlay();
	_type = Type::BARRICADE;
}

// Called every frame
void ABarricade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABarricade::DealDamage(float damageDealt)
{
	_health--;
	if (_health <= 0)
	{
		_myRaycastCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
		UE_LOG(LogTemp, Warning, TEXT("BROKE"));
	}
}

void ABarricade::Repair(int repairAmmount)
{
	_health += repairAmmount;
	if (_health <= 0)
	{
		_health = 1;
	}
	else if (_health > _maxHealth)
	{
		_health = _maxHealth;
	}

	if (_health == 1)
	{
		_myRaycastCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	}
}

