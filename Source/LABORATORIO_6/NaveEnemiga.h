// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UstaticMeshComponent;

UCLASS(ABSTRACT)
class LABORATORIO_6_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* mallaNaveEnemiga;

protected:

	FString nombre;
	FString tipoNave;
	FVector posicion;
	FVector direccionMovimiento;

	float energia;
	float velocidad;
	float velocidadMovimiento;




public:
	// Metodos accesores
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE FString GetTipoNave() const { return tipoNave; }
	FORCEINLINE float GetVelocidadMovimiento() const { return velocidadMovimiento; }
	FORCEINLINE FVector GetDireccionMovimiento() const { return direccionMovimiento; }


	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTipoNave(FString _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void SetVelocidadMovimiento(float VelocidadMovimiento) { velocidadMovimiento = VelocidadMovimiento; }
	FORCEINLINE void SetDireccionMovimiento(FVector DireccionMovimiento) { direccionMovimiento = DireccionMovimiento; }



public:
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover);
	void Destruirse(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Destruirse);
	void Escapar(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Escapar);
	void Disparar(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Disparar);
	void RecibirDanio(float Cantidad) PURE_VIRTUAL(ANaveEnemiga::RecibirDanio);
};
