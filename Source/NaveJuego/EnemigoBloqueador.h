// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Observador.h"
#include "EnemigoBloqueador.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AEnemigoBloqueador : public AEnemigo,  public IObservador
{
	GENERATED_BODY()
public:
	AEnemigoBloqueador();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float NivelVida = 100.0f;
	float NivelDanio = 10.0f;
	float Velocidad = 200.0f;

private:
    TArray<FVector> PuntosTriangulo;
    int32 IndiceTriangulo = 0;
    bool bModoTriangular = false;

private:
    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector PuntoInicio;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector PuntoDestino;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector LimiteMin = FVector(-1000, -1000, 0);

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector LimiteMax = FVector(1000, 1000, 500);

    FVector Direccion;
    bool bHaciaDestino;

public:

	virtual void Disparar() override;
	virtual void Mover(float DeltaTime) override;
	virtual void RecibirDanio(float CantidadDanio) override;
	virtual void ActualizarEstado(AActor* PawnDetectado) override;

};
