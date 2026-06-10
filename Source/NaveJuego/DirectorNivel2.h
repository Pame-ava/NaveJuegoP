// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nivel2.h"
#include "DirectorNivel2.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API UDirectorNivel2 : public UObject
{
	GENERATED_BODY()
private:
    INivel2* Builder;

public:
    UDirectorNivel2();

public:

    void ChangeBuilder(INivel2* NewBuilder);

    void ConstruirNivel(UWorld* World)
    {
        Builder->BuilderLaberinto(World);
        Builder->BuilderEnemigos(World);
        Builder->BuilderBonus(World);
        Builder->GetResultado();
    }
};
