// Copyright Epic Games, Inc. All Rights Reserved.

#include "LABORATORIO_6GameMode.h"
#include "LABORATORIO_6Pawn.h"
#include "NaveEnemiga.h"
#include "NavesAereas.h"
#include "NaveTerrestre.h"
#include "NaveAcuatica.h"
#include "NaveEnemigaFactory.h"

#include "AereaCaza.h"
#include "AereaTransporte.h"
#include "TerrestreTransporte.h"
#include "TerrestreArtilleria.h"
#include "AcuaticaExploracion.h"
#include "AcuaticaRescate.h"

#include "EngineUtils.h"


ALABORATORIO_6GameMode::ALABORATORIO_6GameMode()
{

	 //set default pawn class to our character class
	DefaultPawnClass = ALABORATORIO_6Pawn::StaticClass();
}

void ALABORATORIO_6GameMode::BeginPlay()
{

	Super::BeginPlay();

	int ClavesNaves = 0; 

	//Define la ubicacion inicial de las naves enemigas en general
	FVector ubicacionInicialNavesEnemigas = FVector(600.0f, -500.0f, 214.72f); //Ubicacion general de las naves
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;

	//Define la rotacion de las naves enemigas en general
	FRotator rotacionNave = FRotator(0.0f, 90.0f, 0.0f); //Rotacion general de las naves

	// Genera naves enemigas usando la clase fábrica
	for (int a = 0; a < 3; a++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Aereas, ubicacionInicialNavesEnemigas, rotacionNave, this);
		
		NaveEnemiga->ClaveIdNave = ClavesNaves++; // Asignar la clave y luego incrementar
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves); // Agregamos la nave al TMap y la Clave de la naves aerea caza
		NavesEnemyTA.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas

		ubicacionInicialNavesEnemigas.Y += 300;

	
	}
	ubicacionActualNaveEnemiga.X += 150;

	for (int b = 0; b < 3; b++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Terrestre, ubicacionActualNaveEnemiga, rotacionNave, this);
		
		NaveEnemiga->ClaveIdNave = ClavesNaves++; // Asignar la clave y luego incrementar
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves); // Agregamos la nave al TMap y la Clave de la naves aerea transporte
		NavesEnemyTA.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas
		
		ubicacionActualNaveEnemiga.Y += 300;

	}

	ubicacionActualNaveEnemiga.X += 300;
	for (int c = 0; c < 3; c++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Acuatica, ubicacionActualNaveEnemiga, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++;
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves);
		NavesEnemyTA.Add(NaveEnemiga);

		ubicacionActualNaveEnemiga.Y -= 300;
	}

	////////////////////////////

	FVector ubicacionInicialSubTipos = FVector(600.0f, -1500.0f, 214.72f);
	FVector ubicacionActualSubTipos = ubicacionInicialSubTipos;

	for (int d = 0; d < 3; d++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Aereas, ubicacionInicialSubTipos, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++; // Asignar la clave y luego incrementar
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves); // Agregamos la nave al TMap y la Clave de la naves aerea caza
		NavesEnemyTA.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas

		ubicacionInicialSubTipos.Y += 300;


	}
	ubicacionActualSubTipos.X += 150;

	for (int e = 0; e < 3; e++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Terrestre, ubicacionActualSubTipos, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++; // Asignar la clave y luego incrementar
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves); // Agregamos la nave al TMap y la Clave de la naves aerea transporte
		NavesEnemyTA.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas

		ubicacionActualSubTipos.Y += 300;

	}

	ubicacionActualSubTipos.X += 300;
	for (int f = 0; f < 3; f++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Acuatica, ubicacionActualSubTipos, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++;
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves);
		NavesEnemyTA.Add(NaveEnemiga);

		ubicacionActualSubTipos.Y -= 300;
	}

	for (int g = 0; g < 3; g++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Aereas, ubicacionInicialSubTipos, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++; // Asignar la clave y luego incrementar
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves); // Agregamos la nave al TMap y la Clave de la naves aerea caza
		NavesEnemyTA.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas

		ubicacionInicialSubTipos.Y += 300;


	}
	ubicacionActualSubTipos.X += 150;

	for (int h = 0; h < 3; h++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Terrestre, ubicacionActualSubTipos, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++; // Asignar la clave y luego incrementar
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves); // Agregamos la nave al TMap y la Clave de la naves aerea transporte
		NavesEnemyTA.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas

		ubicacionActualSubTipos.Y += 300;

	}

	ubicacionActualSubTipos.X += 300;
	for (int i = 0; i < 3; i++)
	{
		ANaveEnemiga* NaveEnemiga = UNaveEnemigaFactory::CrearNaveEnemiga(ETipoNavesEnemigas::Acuatica, ubicacionActualSubTipos, rotacionNave, this);

		NaveEnemiga->ClaveIdNave = ClavesNaves++;
		NavesEnemigasMap.Add(NaveEnemiga, ClavesNaves);
		NavesEnemyTA.Add(NaveEnemiga);

		ubicacionActualSubTipos.Y -= 300;
	}


	//FTIMERHANDLE
	GetWorldTimerManager().SetTimer(FTHMostrarClaveNave, this, &ALABORATORIO_6GameMode::MostrarClaves, 2.0f, false);

}

void ALABORATORIO_6GameMode::MostrarClaves()
{
	for (auto& ElementoActual : NavesEnemigasMap) {
		ANaveEnemiga* naveEnemigaActual = ElementoActual.Key;
		int claveNave = ElementoActual.Value;

		// Convertir el entero a FString para concatenarlo
		FString claveNaveStr = FString::FromInt(claveNave);

		// Crear el mensaje concatenando las partes necesarias
		FString mensaje = "La nave " + naveEnemigaActual->GetNombreNave() + " tiene la clave: " + claveNaveStr;

		if (GEngine)
		{
			// Usar un valor entero en lugar de flotante para el alfa
			GEngine->AddOnScreenDebugMessage(-1, 50.0f, FColor::Orange, mensaje);
		}
	}
}

void ALABORATORIO_6GameMode::OcultarClaves()
{
	// Limpia los mensajes en pantalla
	GEngine->ClearOnScreenDebugMessages();
}

