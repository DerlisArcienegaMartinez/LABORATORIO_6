// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LABORATORIO_6GameMode.generated.h"
class ANaveEnemiga;

UCLASS(MinimalAPI)
class ALABORATORIO_6GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALABORATORIO_6GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};



