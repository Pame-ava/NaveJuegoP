// Copyright Epic Games, Inc. All Rights Reserved.

#include "NaveJuegoGameMode.h"
#include "NaveJuegoPawn.h"

ANaveJuegoGameMode::ANaveJuegoGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANaveJuegoPawn::StaticClass();
}

