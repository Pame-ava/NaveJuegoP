// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DirectorNivel1.h"
#include "Nivelbasico1.h"
#include "DirectorNivel2.h"
#include "NivelBasico2.h"
#include "NaveJuegoGameMode.generated.h"


UCLASS(MinimalAPI)
class ANaveJuegoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANaveJuegoGameMode();

protected:
	virtual void BeginPlay() override;

};



