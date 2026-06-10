// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Observador.h"
#include "RadarObservador.h"
#include "GameFramework/Character.h"
#include "EnemigoAtacante.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AEnemigoAtacante : public AEnemigo, public IObservador
{
	GENERATED_BODY()

public:
	AEnemigoAtacante();

private:
	AActor* ObjetivoActual;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float NivelVida = 100.0f;
	float NivelDanio = 10.0f;
	float Velocidad = 200.0f;
	bool bModoCircular = false;
	float AnguloCircular = 0.0f;
	float RadioCircular = 400.0f;
	FVector CentroCirculo;

public:
	FTimerHandle TimerDisparo;

	UPROPERTY(EditAnywhere, Category = "Ataque")
	float IntervaloDisparo = 5.0f; // cada  segundos

	UPROPERTY(EditAnywhere, Category = "Ataque")
	int32 CantidadProyectiles = 4; // configurable en el editor

	virtual void Disparar() override;
	virtual void Mover(float DeltaTime) override;
	virtual void RecibirDanio(float CantidadDanio) override;
	virtual void ActualizarEstado(AActor* PawnDetectado) override;

	TArray<FVector> PuntosRuta;   // lista de puntos de patrulla

	int32 IndiceActual;
};
