// Fill out your copyright notice in the Description page of Project Settings.


#include "AcuaticaExploracion.h"

#include "Kismet/GameplayStatics.h"

//BEGINPLAY: Se llama cuando comienza el juego o cuando se genera.
void AAcuaticaExploracion::BeginPlay()
{
	Super::BeginPlay();

	//MOVIMIENTOS DE NAVE CAZA
	velocidadMovimiento = 300.0f; //Velocidad predeterminada
	direccionMovimiento = FVector(0.0f, -1.0f, 0.0f);

	nombreNave = "Nave ACUATICO EXPLORADOR";

}

AAcuaticaExploracion::AAcuaticaExploracion()
{
	//MALLA DE LA NAVE
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);



}


//TICK: Llama a cada fotograma
void AAcuaticaExploracion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}


//FUNCIONES

void AAcuaticaExploracion::Mover(float DeltaTime)
{



}

void AAcuaticaExploracion::Destruirse()
{
}




void AAcuaticaExploracion::Escapar(float DeltaTIme)
{
}

void AAcuaticaExploracion::Disparar()
{
}