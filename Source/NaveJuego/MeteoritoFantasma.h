// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Meteorito.h"
#include "MeteoritoFantasma.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AMeteoritoFantasma : public AMeteorito
{
	GENERATED_BODY()
	
public:
    AMeteoritoFantasma();


protected:
    virtual void BeginPlay() override;

    virtual void construirMeteorito(FVector PosicionInicial, FVector VelocidadInicial) override;
    virtual void Mdanio(AActor* OtherActor) override;

private:
    FTimerHandle TimerHandle;
    void Desaparecer();
    void Reaparecer();
    
};
