// Fill out your copyright notice in the Description page of Project Settings.

#include "Barricade.h"


// Sets default values
ABarricade::ABarricade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HealthStage"));
	MeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	_myRaycastCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("raycastCollider"));
	_myRaycastCollider->SetupAttachment(this->GetRootComponent());
	_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel3, ECollisionResponse::ECR_Ignore);
	_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);
	_myRaycastCollider->SetHiddenInGame(true);

}

// Called when the game starts or when spawned
void ABarricade::BeginPlay()
{
	Super::BeginPlay();
	_type = Type::BARRICADE;
	MeshComponent->SetStaticMesh(sixHP);
	FVector myLocation = this->GetActorLocation();
	MeshComponent->SetRelativeLocation(myLocation);
}

// Called every frame
void ABarricade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	_timeSinceRepair += DeltaTime;
}

void ABarricade::DealDamage(float damageDealt)
{
	_health--;
	SetModel(_health);
	if (_health <= 0)
	{
		_myRaycastCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);
		UE_LOG(LogTemp, Warning, TEXT("BROKE"));
	}
}

void ABarricade::Repair(int repairAmmount)
{
	if (_timeSinceRepair > _repairCooldown)
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
			_myRaycastCollider->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel3, ECollisionResponse::ECR_Ignore);
		}
		_timeSinceRepair = 0.0f;
		SetModel(_health);
	}
}

void ABarricade::Interact()
{
	Repair(1);
}

void ABarricade::SetModel(int hp)
{

	if (hp == 0)
	{
		MeshComponent->SetStaticMesh(zeroHP);
	}
	else if (hp == 1)
	{
		MeshComponent->SetStaticMesh(oneHP);
	}
	else if (hp == 2)
	{
		MeshComponent->SetStaticMesh(twoHP);
	}
	else if (hp == 3)
	{
		MeshComponent->SetStaticMesh(threeHP);
	}
	else if (hp == 4)
	{
		MeshComponent->SetStaticMesh(fourHP);
	}
	else if (hp == 5)
	{
		MeshComponent->SetStaticMesh(fiveHP);
	}
	else if (hp == 6)
	{
		MeshComponent->SetStaticMesh(sixHP);
	}
}