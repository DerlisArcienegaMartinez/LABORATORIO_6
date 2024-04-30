// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "TerrestreArtilleria.generated.h"

/**
 * 
 */
UCLASS()
class LABORATORIO_6_API ATerrestreArtilleria : public ANaveTerrestre
{
	GENERATED_BODY()

		ATerrestreArtilleria();

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
