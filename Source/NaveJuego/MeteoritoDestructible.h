// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Meteorito.h"
#include "MeteoritoDestructible.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AMeteoritoDestructible : public AMeteorito
{
	GENERATED_BODY()
public:
    AMeteoritoDestructible();

    virtual void construirMeteorito(FVector PosicionInicial, FVector VelocidadInicial) override;
    virtual void Mdanio(AActor* OtherActor) override;

    void RecibirDanio(float Cantidad);

private:
    float Vida;
};
