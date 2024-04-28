// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Particles/ParticleSystem.h"
#include "NavesAereas.generated.h"

/**
 * 
 */
UCLASS()
class LABORATORIO_6_API ANavesAereas : public ANaveEnemiga
{
	GENERATED_BODY()


public:
	UPROPERTY()
		float LimiteIzquierdo;
	float LimiteDerecho;
	float LimiteInferior;
	float LimiteSuperior;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANavesAereas();
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(float DeltaTIme);
	virtual void Disparar();
	
};
