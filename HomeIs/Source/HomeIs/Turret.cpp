// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "HomeIsProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "HomeIsCharacter.h"
#include <vector>
#include "Kismet/KismetMathLibrary.h"
#include "IAttackable.h"
#include "ZombieBase.h"

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
	dt = DeltaTime;
	Super::Tick(dt);
	_timeSinceLastShot += dt;
	Update();

}

void ATurret::Update()
{
	if (!hasTarget)
	{
		FindTarget();
	}
	else
	{
		FVector myLocation = this->GetActorLocation();
		if (targetActor != nullptr)
		{
			if (targetActor->GetName() != "Invalid")
			{
				if (Cast<IIAttackable>(targetActor))
				{
					if (Cast<IIAttackable>(targetActor)->AmAlive())
					{
						FVector playerLocation = targetActor->GetActorLocation();
						float x = myLocation.X - playerLocation.X;
						float y = myLocation.Y - playerLocation.Y;
						float z = myLocation.Z - playerLocation.Z;

						float distance = sqrt((x*x) + (y*y) + (z*z));


						if (distance > _radius)
						{
							hasTarget = false;
 							FindTarget();
						}
						else
						{
							FollowTarget();
							Fire();
						}
					}
					else
					{
						hasTarget = false;
					}
				}
				else
				{
					hasTarget = false;
				}
			}
			else
			{
				hasTarget = false;
			}
		}
		else
		{
			hasTarget = false;
		}
	}
}

void ATurret::FindTarget()
{
	TArray<FHitResult> HitObjects;
	targetActor = nullptr;

	FVector StartTrace = GetActorLocation();
	FVector EndTrace = StartTrace;
	EndTrace.Z += 300.0f;

	FCollisionShape CollisionShape;
	CollisionShape.ShapeType = ECollisionShape::Sphere;
	CollisionShape.SetSphere(_radius);

	if (GetWorld()->SweepMultiByChannel(HitObjects, StartTrace, EndTrace, FQuat::FQuat(), ECC_WorldStatic, CollisionShape))
	{
		for (auto Object = HitObjects.CreateIterator(); Object; Object++)
		{
			//player = Cast<AHomeIsCharacter>((*Object).GetActor());
			IIAttackable* target = Cast<IIAttackable>((*Object).GetActor());
			if (target)
			{
				targetActor = Cast<AActor>(target);
				targetActor->GetActorLocation();
			}

			if (targetActor)
			{
				hasTarget = true;
				break;
			}
			else
			{
				targetActor = nullptr;
			}
		}
	}
}

void ATurret::FollowTarget()
{
	FVector myLocation = this->GetActorLocation();
	FVector playerLocation = targetActor->GetActorLocation();

	FRotator rotation = FRotationMatrix::MakeFromX(playerLocation - myLocation).Rotator();
	SetActorRotation(rotation);
	_barrelEnd = this->GetActorLocation();

	FVector temp = this->GetActorForwardVector();
	temp.Normalize();

	_barrelEnd += temp * 100;
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
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// spawn the projectile at the muzzle
			World->SpawnActor<AHomeIsProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			_timeSinceLastShot = 0.0f;
		}
	}
}
