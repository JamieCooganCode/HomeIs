// Fill out your copyright notice in the Description page of Project Settings.

#include "Testing.h"


// Sets default values
ATesting::ATesting()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATesting::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATesting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	_type = Type::ZOMBIE;

}

void ATesting::DealDamage(float damageDealt)
{
	damageDealt = damageDealt + 1;
}

