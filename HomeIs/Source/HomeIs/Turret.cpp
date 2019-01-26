// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "HomeIsProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "HomeIsCharacter.h"
#include <vector>
#include "Kismet/KismetMathLibrary.h"
#include "IAttackable.h"

using namespace std;

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	_timeSinceLastShot += DeltaTime;
	Update();

}

void ATurret::Update()
{
	TArray<FHitResult> HitObjects;

	FVector StartTrace = GetActorLocation();
	FVector EndTrace = StartTrace;
	EndTrace.Z += 300.0f;

	FCollisionShape CollisionShape;
	CollisionShape.ShapeType = ECollisionShape::Sphere;
	CollisionShape.SetSphere(_radius);

	vector<float> distance;

	if (GetWorld()->SweepMultiByChannel(HitObjects, StartTrace, EndTrace, FQuat::FQuat(), ECC_WorldStatic, CollisionShape))
	{
		for (auto Object = HitObjects.CreateIterator(); Object; Object++)
		{
			AHomeIsCharacter* player = Cast<AHomeIsCharacter>((*Object).GetActor());

			if (player)
			{
				FVector myLocaiton = this->GetActorLocation();
				FVector playerLocation = player->GetActorLocation();

				FRotator rotation = FRotationMatrix::MakeFromX(playerLocation - myLocaiton).Rotator();
				SetActorRotation(rotation);
				_barrelEnd = this->GetActorLocation();

				FVector temp = this->GetActorForwardVector();
				temp.Normalize();

				_barrelEnd += temp * 100;

				Fire();
			}
		}
	}
}

void ATurret::Fire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		UWorld* const World = GetWorld();
		if (World != NULL && _timeSinceLastShot > 0.2f)
		{
			const FRotator SpawnRotation = this->GetActorRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = _barrelEnd;

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<AHomeIsProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			_timeSinceLastShot = 0.0f;
		}
	}
}
