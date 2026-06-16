// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Nivel1c.h"
#include "Nivel1.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNivel1 : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class NAVEJUEGO_API INivel1
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Reset() = 0;
	virtual void BuilderLaberinto(UWorld* World) = 0;
	virtual void BuilderEnemigos(UWorld* World) = 0;
	virtual void BuilderBonus(UWorld* World) = 0;
	virtual Nivel1c GetResultado() = 0;
	
};
