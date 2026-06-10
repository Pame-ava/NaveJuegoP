// Fill out your copyright notice in the Description page of Project Settings.


#include "GenerarLaberinto.h"
#include "Engine/World.h"
#include "FabricaMeteoritosMovil.h"
#include "FabricaMeteoritosFantasma.h"
#include "FabricaMeteoritosDestructible.h"

// Sets default values
AGenerarLaberinto::AGenerarLaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    ConfigurarLaberinto(8,10);
    Generar();
    
}

// Called when the game starts or when spawned
void AGenerarLaberinto::BeginPlay()
{
	Super::BeginPlay();
	GenerarCampoMeteoritos();
}

// Called every frame
void AGenerarLaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGenerarLaberinto::GenerarCampoMeteoritos()
{
    if (!GetWorld()) return;

    // Instanciar fábricas
    AFabricaMeteoritosMovil* FabricaMovil = GetWorld()->SpawnActor<AFabricaMeteoritosMovil>();
    AFabricaMeteoritosFantasma* FabricaFantasma = GetWorld()->SpawnActor<AFabricaMeteoritosFantasma>();
    AFabricaMeteoritosDestructible* FabricaDestructible = GetWorld()->SpawnActor<AFabricaMeteoritosDestructible>();

    const float Espaciado = 500.0f;

    for (int32 i = 0; i < Mapa.Num(); i++)
    {
        for (int32 j = 0; j < Mapa[i].Num(); j++)
        {
            FVector Posicion(
                FMath::RandRange(0, Mapa.Num() - 1) * Espaciado,
                FMath::RandRange(0, Mapa[0].Num() - 1) * Espaciado,
                200.0f
            );


            switch (Mapa[i][j])
            {
            case 1:
                FabricaMovil->CrearMeteorito(GetWorld(), Posicion, FRotator::ZeroRotator);
                break;
            case 2:
                FabricaFantasma->CrearMeteorito(GetWorld(), Posicion, FRotator::ZeroRotator);
                break;
            case 3:
                FabricaDestructible->CrearMeteorito(GetWorld(), Posicion, FRotator::ZeroRotator);
                break;
            default:
                break;
            }
        }
    }
}

void AGenerarLaberinto::ConfigurarLaberinto(int32 Filas, int32 Columnas)
{
    Mapa.Empty();

    for (int32 i = 0; i < Filas; i++)
    {
        TArray<int32> Fila;
        for (int32 j = 0; j < Columnas; j++)
        {
            // Valores aleatorios: 0 vacío, 1 móvil, 2 fantasma, 3 destructible
            int32 Tipo = FMath::RandRange(0, 3);
            Fila.Add(Tipo);
        }
        Mapa.Add(Fila);
    }
}

void AGenerarLaberinto::Generar()
{
}

