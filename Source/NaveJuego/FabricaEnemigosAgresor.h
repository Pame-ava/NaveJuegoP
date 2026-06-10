// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaEnemigos.h"
#include "FabricaEnemigosAgresor.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AFabricaEnemigosAgresor : public AFabricaEnemigos
{
	GENERATED_BODY()


public:
	virtual AEnemigo* CrearEnemigo(FString _Enemigo) override;

};
