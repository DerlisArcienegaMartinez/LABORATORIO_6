// Fill out your copyright notice in the Description page of Project Settings.


#include "NavesAereas.h"
#include "Kismet/GameplayStatics.h"
//BEGINPLAY: Se llama cuando comienza el juego o cuando se genera.
void ANavesAereas::BeginPlay()
{
	Super::BeginPlay();

	//MOVIMIENTOS DE NAVE CAZA
	velocidadMovimiento = 300.0f; //Velocidad predeterminada
	direccionMovimiento = FVector(0.0f, 1.0f, 0.0f);

	nombreNave = "Nave JEFE AEREO";

	//LIMITES DEL ESCENARIO
	LimiteDerecho = 1870.0f;         //Y
	LimiteInferior = -1950.0f;      //-X
	LimiteIzquierdo = -1870.0f;     //-Y
	LimiteSuperior = 1950.0f;        //X

}

ANavesAereas::ANavesAereas()
{
	//MALLA DE LA NAVE
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}


//TICK: Llama a cada fotograma
void ANavesAereas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//FUNCIONES

void ANavesAereas::Mover(float DeltaTime)
{
}

void ANavesAereas::Destruirse()
{
}

void ANavesAereas::Escapar(float DeltaTIme)
{
}

void ANavesAereas::Disparar()
{
}