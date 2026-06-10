// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Meteorito.h"
#include "MeteoritoMovil.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AMeteoritoMovil : public AMeteorito
{
	GENERATED_BODY()
public:
    AMeteoritoMovil();

protected:
    virtual void Tick(float DeltaTime) override;
   
    virtual void construirMeteorito(FVector Inicio, FVector Destino, float Vel) override;

    virtual void Mdanio(AActor* OtherActor) override;

private:
    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector PuntoInicio;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector PuntoDestino;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float Velocidad = 200.0f;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector LimiteMin = FVector(-1000, -1000, 0);

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    FVector LimiteMax = FVector(1000, 1000, 500);

    FVector Direccion;
    bool bHaciaDestino;
};
