// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrestreTransporte.h"

ATerrestreTransporte::ATerrestreTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ATerrestreTransporte::BeginPlay()
{
	Super::BeginPlay();

	direccionMovimiento = FVector(-1.0f, 0.0, 0.0f);
	velocidadMovimiento = 150.0f;

	nombreNave = "Nave TERRESTRE TRANSPORTE";
}

void ATerrestreTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ATerrestreTransporte::Mover(float DeltaTime)
{
}
void ATerrestreTransporte::Destruirse(float DeltaTime)
{
}

void ATerrestreTransporte::Escapar(float DeltaTIme)
{
}

void ATerrestreTransporte::Atacar(float DeltaTime)
{
}