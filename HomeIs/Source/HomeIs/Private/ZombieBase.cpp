// Fill out your copyright notice in the Description page of Project Settings.

#include "ZombieBase.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SphereComponent.h"

// Sets default values
AZombieBase::AZombieBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_health = 10.0f;
	_damage = 1.0f;
	_damageReach = 100.0f;
	_movementSpeed = 50.0f;
	_radius = 1000.0f;

	_viewSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	_viewSphere->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AZombieBase::BeginPlay()
{	
	Super::BeginPlay();
	_type = Type::ZOMBIE;
	_targetActor = nullptr;
}

void AZombieBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	_viewSphere->SetSphereRadius(_radius);
	this->SetActorHiddenInGame(false);
}

// Called every frame
void AZombieBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("%f"), _health);

	//GoToTarget(DeltaTime);

	if (_health <= 0.0f)
	{
		_amDead = true;
		this->Destroy();
	}
}

void AZombieBase::Attack(AActor* _actorAttacking)
{
	IIAttackable* _IAtt = Cast<IIAttackable>(_actorAttacking);

	if (_IAtt)
	{
		_IAtt->DealDamage(_damage);
	}
}

void AZombieBase::DealDamage(float damageDealt)
{
	if (damageDealt > 0)
		_health -= damageDealt;
}

// Called to bind functionality to input
void AZombieBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector AZombieBase::GetTargetPosition()
{
	if (_targetActor)
		return _targetActor->GetActorLocation();
	else
		return FVector();
}

void AZombieBase::GoToTarget(float deltaTime)
{
	dT = deltaTime;

	if (_targetActor != nullptr)
	{
		_vectorBetween = _targetActor->GetActorLocation() - this->GetActorLocation();

		if (_vectorBetween.Size() < _radius)
		{
			_vectorBetween.Normalize();

			rotation = FRotationMatrix::MakeFromX(_vectorBetween).Rotator();
			rotation.Roll = 0.0f;
			rotation.Pitch = 0.0f;

			if (CheckIfNearTarget())
			{
				Attack(_targetActor);
			}
		}		
	}
	else
	{
		FindTarget();
	}
}

void AZombieBase::FindTarget()
{
	TArray<FHitResult> HitObjects;

	FVector StartTrace = GetActorLocation();
	FVector EndTrace = StartTrace;
	EndTrace.Z += 300.0f;

	FCollisionShape collisionShape;
	collisionShape.ShapeType = ECollisionShape::Sphere;
	collisionShape.SetSphere(_radius);

	if (GetWorld()->SweepMultiByChannel(HitObjects, StartTrace, EndTrace, FQuat::FQuat(), ECC_WorldStatic, collisionShape))
	{
		for (auto Object = HitObjects.CreateIterator(); Object; Object++)
		{
			IIAttackable* target = Cast<IIAttackable>((*Object).GetActor());
			if (target)
			{
				if (target != this)
				{
					AZombieBase* zombieTest = Cast<AZombieBase>((*Object).GetActor());
					if (zombieTest)
						break;

					_targetActor = Cast<AActor>(target);
				}

				
			}
		}
	}
}

bool AZombieBase::CheckIfNearTarget()
{
	if (_targetActor)
	{
		_vectorBetween = _targetActor->GetActorLocation() - this->GetActorLocation();
		if (_vectorBetween.Size() <= _damageReach)
			return true;
	}
	return false;
}

