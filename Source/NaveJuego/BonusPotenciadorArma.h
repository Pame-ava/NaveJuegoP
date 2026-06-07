// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bonus.h"
#include "BonusPotenciadorArma.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API ABonusPotenciadorArma : public ABonus
{
	GENERATED_BODY()
	
public:
	virtual void AplicarBonus(AActor* Objetivo) override;
};
