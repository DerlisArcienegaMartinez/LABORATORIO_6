// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAcuatica.h"
#include "AcuaticaExploracion.generated.h"

/**
 * 
 */
UCLASS()
class LABORATORIO_6_API AAcuaticaExploracion : public ANaveAcuatica
{
	GENERATED_BODY()
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AAcuaticaExploracion();
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(float DeltaTIme);
	virtual void Disparar();
};
