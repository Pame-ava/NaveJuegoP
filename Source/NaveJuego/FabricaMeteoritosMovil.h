// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaMeteoritos.h"
#include "MeteoritoMovil.h"
#include "FabricaMeteoritosMovil.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AFabricaMeteoritosMovil : public AFabricaMeteoritos
{
    GENERATED_BODY()

public:
    virtual AMeteorito* CrearMeteorito(UWorld* World, FVector Posicion, FRotator Rotacion) override
    {
        return World->SpawnActor<AMeteoritoMovil>(AMeteoritoMovil::StaticClass(), Posicion, Rotacion);
    }
};
