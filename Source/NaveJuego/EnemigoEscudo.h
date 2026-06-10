// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoEscudo.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AEnemigoEscudo : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoEscudo();

	FVector LimiteMin;
	FVector LimiteMax;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float NivelVida = 100.0f; //aumentar nivel vida
	float NivelDanio = 10.0f;
	float Velocidad = 200.0f;

public:

	virtual void Disparar() override;
	virtual void Mover(float DeltaTime) override;
	virtual void RecibirDanio(float CantidadDanio) override;
	virtual void ActualizarEstado(AActor* PawnDetectado) override;
};
