// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nivel1.h"
#include "Nivelbasico1.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API UNivelbasico1 : public UObject, public INivel1
{
	GENERATED_BODY()
	

public:
    
    virtual void BuilderLaberinto(UWorld* World) override;
    virtual void BuilderEnemigos(UWorld* World) override;
    virtual void BuilderBonus(UWorld* World) override;
    virtual void GetResultado() override {}
};
