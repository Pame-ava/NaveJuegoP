// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EstadoExplosivo.h"
#include "EnemigoExplosivo.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AEnemigoExplosivo : public AEnemigo
{
	GENERATED_BODY()
public:
	IEstadoExplosivo* EstadoActual;

public:
	float NivelVida = 10.0f;

	AEnemigoExplosivo();

	void CambiarEstado(IEstadoExplosivo* NuevoEstado);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float NivelDanio = 10.0f;
	float Velocidad = 200.0f;

public:

	virtual void Disparar() override;
	virtual void Mover(float DeltaTime) override;
	virtual void RecibirDanio(float CantidadDanio) override;
	virtual void Explotar();
	



};
