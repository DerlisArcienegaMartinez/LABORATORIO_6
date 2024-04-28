// Copyright Epic Games, Inc. All Rights Reserved.

#include "LABORATORIO_6GameMode.h"
#include "LABORATORIO_6Pawn.h"
#include "NaveEnemiga.h"
#include "NavesAereas.h"
#include "NaveTerrestre.h"
#include "NaveEnemigaFactory.h"

ALABORATORIO_6GameMode::ALABORATORIO_6GameMode()
{

	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	//DefaultPawnClass = ALABORATORIO_6Pawn::StaticClass();
}

void ALABORATORIO_6GameMode::BeginPlay()
{

	Super::BeginPlay();


	//Define la ubicacion inicial de las naves enemigas en general
	FVector ubicacionInicialNavesEnemigas = FVector(600.0f, -500.0f, 214.72f); //Ubicacion general de las naves
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;

	//Define la rotacion de las naves enemigas en general
	FRotator rotacionNave = FRotator(0.0f, 90.0f, 0.0f); //Rotacion general de las naves

	// Genera naves enemigas usando la clase fábrica
	for (int a = 0; a < 5; a++)
	{
		UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Aereas, ubicacionInicialNavesEnemigas, rotacionNave, this);
		ubicacionInicialNavesEnemigas.Y += 300;
	}
	ubicacionActualNaveEnemiga.X += 150;

	for (int b = 0; b < 6; b++)
	{
		UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Terrestre, ubicacionActualNaveEnemiga, rotacionNave, this);
		ubicacionActualNaveEnemiga.Y += 300;
	}
}