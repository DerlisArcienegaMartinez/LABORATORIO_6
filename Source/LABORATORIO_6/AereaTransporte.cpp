// Fill out your copyright notice in the Description page of Project Settings.


#include "AereaTransporte.h"
#include "Kismet/GameplayStatics.h"

//BEGINPLAY: Se llama cuando comienza el juego o cuando se genera.
void AAereaTransporte::BeginPlay()
{
	Super::BeginPlay();

	//MOVIMIENTOS DE NAVE CAZA
	velocidadMovimiento = 300.0f; //Velocidad predeterminada
	direccionMovimiento = FVector(0.0f, 1.0f, 0.0f);

	nombreNave = "Nave AEREA TRANSPORTE";



}

AAereaTransporte::AAereaTransporte()
{
	//MALLA DE LA NAVE
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}


//TICK: Llama a cada fotograma
void AAereaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//FUNCIONES

void AAereaTransporte::Mover(float DeltaTime)
{
}

void AAereaTransporte::Destruirse()
{
}

void AAereaTransporte::Escapar(float DeltaTIme)
{
}

void AAereaTransporte::Disparar()
{
}