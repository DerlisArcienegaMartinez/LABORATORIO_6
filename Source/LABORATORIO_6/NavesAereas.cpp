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
	Mover(DeltaTime);


}


//FUNCIONES

void ANavesAereas::Mover(float DeltaTime)
{

	FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

	/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
	FVector Desplazamiento = direccionMovimiento * velocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;

	/* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
	if (PosicionActual.X < LimiteInferior || PosicionActual.X > LimiteSuperior)
	{
		direccionMovimiento.X *= -1.0f;   // Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
	}
	if (PosicionActual.Y < LimiteIzquierdo || PosicionActual.Y > LimiteDerecho)
	{
		direccionMovimiento.Y *= -1.0f;   // Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
	}

	SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor

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