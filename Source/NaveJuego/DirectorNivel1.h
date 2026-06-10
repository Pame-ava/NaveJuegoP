// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nivel1.h"
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

    void ChangeBuilder(INivel1* NewBuilder);

    void ConstruirNivel(UWorld* World)
    {
        Builder->BuilderLaberinto(World);
        Builder->BuilderEnemigos(World);
        Builder->BuilderBonus(World);
        Builder->GetResultado();
    }
};
