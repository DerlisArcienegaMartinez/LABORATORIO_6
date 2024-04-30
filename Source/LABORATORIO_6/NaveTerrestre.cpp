// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestre.h"

ANaveTerrestre::ANaveTerrestre()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

}

void ANaveTerrestre::BeginPlay()
{
	Super::BeginPlay();

	direccionMovimiento = FVector(-1.0f, 0.0, 0.0f);
	velocidadMovimiento = 150.0f;

	nombreNave = "Nave JEFE TERRESTRE";
}

void ANaveTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANaveTerrestre::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

		/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
	FVector Desplazamiento = direccionMovimiento * velocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;


	SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor
}
void ANaveTerrestre::Destruirse(float DeltaTime)
{
}

void ANaveTerrestre::Escapar(float DeltaTIme)
{
}

void ANaveTerrestre::Atacar(float DeltaTime)
{
}