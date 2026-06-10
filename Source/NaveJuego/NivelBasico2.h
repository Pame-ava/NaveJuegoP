// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nivel2.h"
#include "NivelBasico2.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API UNivelBasico2 : public UObject, public INivel2

{
	GENERATED_BODY()
	
	public:
	
	virtual void BuilderLaberinto(UWorld* World) override;
	virtual void BuilderEnemigos(UWorld* World) override;
	virtual void BuilderBonus(UWorld* World) override;
	virtual void GetResultado() override {}
};
