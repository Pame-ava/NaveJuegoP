// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bonus.h"
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



