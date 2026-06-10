// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoJefeFinal.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AEnemigoJefeFinal : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoJefeFinal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float NivelVida = 400.0f; //aumentar nivel vida
	float NivelDanio = 50.0f; //aumentar nivel danio
	float Velocidad = 100.0f; //bajar velocidad

	FVector PuntoInicio;
	FVector PuntoDestino;
	FVector Direccion;
	bool bHaciaDestino;

public:

	virtual void Disparar() override;
	virtual void Mover(float DeltaTime) override;
	virtual void RecibirDanio(float CantidadDanio) override;
	virtual void ActualizarEstado(AActor* PawnDetectado) override;
};
