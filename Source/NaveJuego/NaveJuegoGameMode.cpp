// Copyright Epic Games, Inc. All Rights Reserved.

#include "NaveJuegoGameMode.h"
#include "NaveJuegoPawn.h"
#include "FabricaMeteoritosMovil.h"
#include "FabricaMeteoritosFantasma.h"
#include "FabricaMeteoritosDestructible.h"

ANaveJuegoGameMode::ANaveJuegoGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANaveJuegoPawn::StaticClass();
}

void ANaveJuegoGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();

	AFabricaMeteoritos* FabricaMovil = GetWorld()->
		SpawnActor<AFabricaMeteoritosMovil>(AFabricaMeteoritosMovil::StaticClass());
	FabricaMovil->CrearMeteorito(World, FVector(0, 0, 200), FRotator::ZeroRotator);

	AFabricaMeteoritos* FabricaFantasma = GetWorld()->
		SpawnActor<AFabricaMeteoritosFantasma>(AFabricaMeteoritosFantasma::StaticClass());
	FabricaFantasma->CrearMeteorito(World, FVector(300, 0, 200), FRotator::ZeroRotator);

	AFabricaMeteoritos* FabricaDestructible = GetWorld()->
		SpawnActor<AFabricaMeteoritosDestructible>(AFabricaMeteoritosDestructible::StaticClass());
	FabricaDestructible->CrearMeteorito(World, FVector(-300, 0, 200), FRotator::ZeroRotator);

}
