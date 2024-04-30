// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrestreArtilleria.h"

ATerrestreArtilleria::ATerrestreArtilleria()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ATerrestreArtilleria::BeginPlay()
{
	Super::BeginPlay();

	direccionMovimiento = FVector(-1.0f, 0.0, 0.0f);
	velocidadMovimiento = 150.0f;

	nombreNave = "Nave TERRESTRE ARTILLERO";
}

void ATerrestreArtilleria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ATerrestreArtilleria::Mover(float DeltaTime)
{
}
void ATerrestreArtilleria::Destruirse(float DeltaTime)
{
}

void ATerrestreArtilleria::Escapar(float DeltaTIme)
{
}

void ATerrestreArtilleria::Atacar(float DeltaTime)
{
}