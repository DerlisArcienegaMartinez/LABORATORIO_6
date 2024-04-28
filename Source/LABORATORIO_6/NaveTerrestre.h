// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class LABORATORIO_6_API ANaveTerrestre : public ANaveEnemiga
{
	GENERATED_BODY()
	
public:
	ANaveTerrestre();

	//LLamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

protected:

	virtual void Mover(float DeltaTime);
	virtual void Destruirse(float DeltaTime);
	virtual void Escapar(float DeltaTIme);
	virtual void Atacar(float DeltaTime);
	
};
