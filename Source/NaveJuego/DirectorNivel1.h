// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nivel1.h"
#include "nivel1c.h"
#include "DirectorNivel1.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API UDirectorNivel1 : public UObject
{
	GENERATED_BODY()
	
private:
     INivel1* Builder;

public:
    UDirectorNivel1();

public:
    void ChangeBuilder(INivel1* NewBuilder) { Builder = NewBuilder; }

    // Retorna el nivel construido o un FNivel1 vacío si algo falla
    Nivel1c ConstruirNivel(UWorld* World)
    {
        if (!Builder || !World)
        {
            UE_LOG(LogTemp, Error, TEXT("DirectorNivel1: Builder o World es null"));
            return Nivel1c();
        }

        Builder->Reset();
        Builder->BuilderLaberinto(World);
        Builder->BuilderEnemigos(World);
        Builder->BuilderBonus(World);

        return Builder->GetResultado();
    }
};
