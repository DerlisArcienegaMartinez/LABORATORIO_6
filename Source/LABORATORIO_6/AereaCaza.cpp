// Fill out your copyright notice in the Description page of Project Settings.


#include "AereaCaza.h"

#include "Kismet/GameplayStatics.h"
//BEGINPLAY: Se llama cuando comienza el juego o cuando se genera.
void AAereaCaza::BeginPlay()
{
	Super::BeginPlay();

	//MOVIMIENTOS DE NAVE CAZA
	velocidadMovimiento = 300.0f; //Velocidad predeterminada
	direccionMovimiento = FVector(0.0f, 1.0f, 0.0f);

	nombreNave = "Nave AEREA CAZA";



}

AAereaCaza::AAereaCaza()
{
	//MALLA DE LA NAVE
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}


//TICK: Llama a cada fotograma
void AAereaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//FUNCIONES

void AAereaCaza::Mover(float DeltaTime)
{
}

void AAereaCaza::Destruirse()
{
}

void AAereaCaza::Escapar(float DeltaTIme)
{
}

void AAereaCaza::Disparar()
{
}