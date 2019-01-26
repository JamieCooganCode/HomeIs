// Fill out your copyright notice in the Description page of Project Settings.

#include "ZombieBase.h"


// Sets default values
AZombieBase::AZombieBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_health = 10.0f;
	_damage = 1.0f;
}

// Called when the game starts or when spawned
void AZombieBase::BeginPlay()
{
	Super::BeginPlay();
	_type = Type::ZOMBIE;

}

void AZombieBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void AZombieBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (_health <= 0.0f)
		Destroy();
}

void AZombieBase::Attack(UObject* _actorAttacking)
{
	IIAttackable* _IAtt = Cast<IIAttackable>(_actorAttacking);

	if (_IAtt != nullptr)
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

