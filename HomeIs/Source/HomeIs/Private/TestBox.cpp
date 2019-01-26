// Fill out your copyright notice in the Description page of Project Settings.

#include "TestBox.h"


// Sets default values
ATestBox::ATestBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_health = 0.0f;
}

// Called when the game starts or when spawned
void ATestBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATestBox::DealDamage(float damageDone)
{
	if (damageDone > 0)
		_health -= damageDone;
}

// Called every frame
void ATestBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

