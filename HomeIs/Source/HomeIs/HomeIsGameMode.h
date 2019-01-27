// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/Actor.h"
#include "HomeIs/Public/ZombieBase.h"
#include "HomeIsGameMode.generated.h"

UCLASS(minimalapi)
class AHomeIsGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AHomeIsGameMode();
	TArray<AActor*> spawners;

	int wave;

	virtual void Tick(float DeltaTime) override;
	float waveCooldown;
};



