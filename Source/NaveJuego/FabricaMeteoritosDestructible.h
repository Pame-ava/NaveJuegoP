// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaMeteoritos.h"
#include "MeteoritoDestructible.h"
#include "FabricaMeteoritosDestructible.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AFabricaMeteoritosDestructible : public AFabricaMeteoritos
{
	GENERATED_BODY()

public:
    virtual AMeteorito* CrearMeteorito(UWorld* World, FVector Posicion, FRotator Rotacion) override
    {
        return World->SpawnActor<AMeteoritoDestructible>(AMeteoritoDestructible::StaticClass(), Posicion, Rotacion);
    }
	
};
