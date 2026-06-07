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

    virtual void construirMeteorito(FVector PosicionInicial, FVector VelocidadInicial) override;
    virtual void Mdanio(AActor* OtherActor) override;

private:
    FVector PuntoInicio;
    FVector PuntoDestino;
    FVector Direccion;
    float Velocidad;
    bool bHaciaDestino;
};
