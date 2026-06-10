// Fill out your copyright notice in the Description page of Project Settings.


#include "NivelBasico2.h"
#include "GenerarLaberinto.h"
#include "FabricaEnemigosAgresor.h"
#include "FabricaEnemigosDefensor.h"
#include "BonusPotenciadorArma.h"
#include "BonusReparacionNave.h"
#include "BonusComodin.h"

void UNivelBasico2::BuilderLaberinto(UWorld* World)
{
    int32 Filas = 10;   // tamaño del laberinto
    int32 Columnas = 15;

    FActorSpawnParameters Params;
    AGenerarLaberinto* Laberinto = World->SpawnActor<AGenerarLaberinto>(
        AGenerarLaberinto::StaticClass(),
        FVector(0, 0, 200),
        FRotator::ZeroRotator,
        Params
    );

    if (Laberinto)
    {
        Laberinto->ConfigurarLaberinto(Filas, Columnas); // método propio para ajustar tamaño
        Laberinto->Generar();
    }
}

void UNivelBasico2::BuilderEnemigos(UWorld* World)
{
    if (!World) return;

    // Definir el área del laberinto (ajusta según tu tamaño real)
    float MinX = -1000;
    float MaxX = 1000;
    float MinY = -1000;
    float MaxY = 1000;
    float Altura = 200; // Z fijo

    auto PosicionAleatoria = [&](float MinX, float MaxX, float MinY, float MaxY, float Z) -> FVector
        {
            return FVector(
                FMath::RandRange(MinX, MaxX),
                FMath::RandRange(MinY, MaxY),
                Z
            );
        };

    // Crear fábrica de enemigos agresores
    AFabricaEnemigosAgresor* FabricaAgresor = World->SpawnActor<AFabricaEnemigosAgresor>();
    if (FabricaAgresor)
    {
        for (int i = 0; i < 3; i++) // cantidad de atacantes
        {
            AEnemigo* EnemigoAtacante = FabricaAgresor->CrearEnemigo("Atacante");
            if (EnemigoAtacante)
            {
                FVector Pos = PosicionAleatoria(MinX, MaxX, MinY, MaxY, Altura);
                EnemigoAtacante->SetActorLocation(Pos);
            }
        }
        // Explosivos
        for (int i = 0; i < 2; i++)
        {
            AEnemigo* EnemigoExplosivo = FabricaAgresor->CrearEnemigo("Explosivo");
            if (EnemigoExplosivo)
                EnemigoExplosivo->SetActorLocation(PosicionAleatoria(MinX, MaxX, MinY, MaxY, Altura));
        }

        // Laser
        for (int i = 0; i < 2; i++)
        {
            AEnemigo* EnemigoLaser = FabricaAgresor->CrearEnemigo("Laser");
            if (EnemigoLaser)
                EnemigoLaser->SetActorLocation(PosicionAleatoria(MinX, MaxX, MinY, MaxY, Altura));
        }
    }

    // Crear fábrica de enemigos defensores
    AFabricaEnemigosDefensor* FabricaDefensor = World->SpawnActor<AFabricaEnemigosDefensor>();
    if (FabricaDefensor)
    {
        for (int j = 0; j < 2; j++) // cantidad de bloqueadores
        {
            AEnemigo* EnemigoBloqueador = FabricaDefensor->CrearEnemigo("Bloqueador");
            if (EnemigoBloqueador)
            {
                FVector Pos = PosicionAleatoria(MinX, MaxX, MinY, MaxY, Altura);
                EnemigoBloqueador->SetActorLocation(Pos);
            }
        }
    }
}

void UNivelBasico2::BuilderBonus(UWorld* World)
{
    if(!World) return;

    // Cantidad configurable de cada bonus
    int NumPotenciadores = 2;
    int NumReparaciones = 2;
    int NumComodines = 1;

    // Rango de posiciones dentro del laberinto
    FVector MinPos(-1000, -1000, 200);
    FVector MaxPos(1000, 1000, 200);

    auto PosicionAleatoria = [&](FVector Min, FVector Max) -> FVector
        {
            return FVector(
                FMath::RandRange(Min.X, Max.X),
                FMath::RandRange(Min.Y, Max.Y),
                Min.Z // altura fija
            );
        };

    // Generar Bonus Potenciadores
    for (int i = 0; i < NumPotenciadores; i++)
    {
        FVector Pos = PosicionAleatoria(MinPos, MaxPos);
        World->SpawnActor<ABonusPotenciadorArma>(
            ABonusPotenciadorArma::StaticClass(),
            Pos,
            FRotator::ZeroRotator
        );
    }

    // Generar Bonus Reparaciones
    for (int j = 0; j < NumReparaciones; j++)
    {
        FVector Pos = PosicionAleatoria(MinPos, MaxPos);
        World->SpawnActor<ABonusReparacionNave>(
            ABonusReparacionNave::StaticClass(),
            Pos,
            FRotator::ZeroRotator
        );
    }

    // Generar Bonus Comodines
    for (int k = 0; k < NumComodines; k++)
    {
        FVector Pos = PosicionAleatoria(MinPos, MaxPos);
        World->SpawnActor<ABonusComodin>(
            ABonusComodin::StaticClass(),
            Pos,
            FRotator::ZeroRotator
        );
    }
}
