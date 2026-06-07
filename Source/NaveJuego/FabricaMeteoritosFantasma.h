// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaMeteoritos.h"
#include "MeteoritoFantasma.h"
#include "FabricaMeteoritosFantasma.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AFabricaMeteoritosFantasma : public AFabricaMeteoritos
{
	GENERATED_BODY()

public:
    virtual AMeteorito* CrearMeteorito(UWorld* World, FVector Posicion, FRotator Rotacion) override
    {
        return World->SpawnActor<AMeteoritoFantasma>(AMeteoritoFantasma::StaticClass(), Posicion, Rotacion);
    }
};
