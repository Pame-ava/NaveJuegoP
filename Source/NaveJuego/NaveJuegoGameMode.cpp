// Copyright Epic Games, Inc. All Rights Reserved.

#include "NaveJuegoGameMode.h"
#include "NaveJuegoPawn.h"
#include "GenerarLaberinto.h"
#include "FabricaEnemigosAgresor.h"
#include "FabricaEnemigosDefensor.h"
#include "BonusPotenciadorArma.h"
#include "BonusReparacionNave.h"
#include "BonusComodin.h"
#include "RadarObservador.h"
#include "EnemigoAtacante.h"
#include "EnemigoBloqueador.h"
#include "Kismet/GameplayStatics.h"

ANaveJuegoGameMode::ANaveJuegoGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANaveJuegoPawn::StaticClass();
}

void ANaveJuegoGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    // Crear el Builder y el Director
    Builder = NewObject<UNivelbasico1>();
    Director = NewObject<UDirectorNivel1>();

    Director->ChangeBuilder(Builder);

    // Construir el nivel completo
    Director->ConstruirNivel(World);

    // 1. Buscar el Radar en el mundo
    ARadarObservador* Radar = Cast<ARadarObservador>(
        UGameplayStatics::GetActorOfClass(GetWorld(), ARadarObservador::StaticClass())
    );

    // 2. Buscar todos los enemigos en el mundo
    TArray<AActor*> Atacantes;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemigoAtacante::StaticClass(), Atacantes);
    for (AActor* Actor : Atacantes)
    {
        AEnemigoAtacante* Bloqueador = Cast<AEnemigoAtacante>(Actor);
        if (IsValid(Bloqueador))
            Radar->Suscribir(Bloqueador);
    }
    
    TArray<AActor*> Bloqueadores;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemigoBloqueador::StaticClass(), Bloqueadores);
    for (AActor* Actor : Bloqueadores)
    {
        AEnemigoBloqueador* Bloqueador = Cast<AEnemigoBloqueador>(Actor);
        if (IsValid(Bloqueador))
            Radar->Suscribir(Bloqueador);
    }

    




    //// Crear el Builder y el Director
    //Builder = NewObject<UNivelBasico2>();
    //Director = NewObject<UDirectorNivel2>();

    //Director->ChangeBuilder(Builder);

    //// Construir el nivel completo
    //Director->ConstruirNivel(World);


	/*AFabricaMeteoritos* FabricaMovil = GetWorld()->
		SpawnActor<AFabricaMeteoritosMovil>(AFabricaMeteoritosMovil::StaticClass());
	FabricaMovil->CrearMeteorito(World, FVector(0, 0, 200), FRotator::ZeroRotator);

	AFabricaMeteoritos* FabricaFantasma = GetWorld()->
		SpawnActor<AFabricaMeteoritosFantasma>(AFabricaMeteoritosFantasma::StaticClass());
	FabricaFantasma->CrearMeteorito(World, FVector(300, 0, 200), FRotator::ZeroRotator);

	AFabricaMeteoritos* FabricaDestructible = GetWorld()->
		SpawnActor<AFabricaMeteoritosDestructible>(AFabricaMeteoritosDestructible::StaticClass());
	FabricaDestructible->CrearMeteorito(World, FVector(-300, 0, 200), FRotator::ZeroRotator);*/


    //// Crear fábrica de enemigos agresores
    //AFabricaEnemigosAgresor* FabricaAgresor = World->SpawnActor<AFabricaEnemigosAgresor>(AFabricaEnemigosAgresor::StaticClass());
    //if (FabricaAgresor)
    //{
    //    // Crear un enemigo atacante en la posición 
    //    AEnemigo* EnemigoAtacante = FabricaAgresor->CrearEnemigo("Atacante");
    //    if (EnemigoAtacante)
    //    {
    //        EnemigoAtacante->SetActorLocation(FVector(0, 0, 300));
    //    }

    //    AEnemigo* EnemigoLaser = FabricaAgresor->CrearEnemigo("Laser");
    //    if (EnemigoLaser)
    //    {
    //        EnemigoLaser->SetActorLocation(FVector(0, 0, 300));
    //    }

    //    // Crear un enemigo jefe en la posición 
    //    AEnemigo* EnemigoJefe = FabricaAgresor->CrearEnemigo("Jefe");
    //    if (EnemigoJefe)
    //    {
    //        EnemigoJefe->SetActorLocation(FVector(200, 0, 200));
    //    }
    //}

    //// Crear fábrica de enemigos defensores
    //AFabricaEnemigosDefensor* FabricaDefensor = World->SpawnActor<AFabricaEnemigosDefensor>(AFabricaEnemigosDefensor::StaticClass());
    //if (FabricaDefensor)
    //{
    //    // Crear un enemigo escudo en la posición 
    //    AEnemigo* EnemigoEscudo = FabricaDefensor->CrearEnemigo("Escudo"); // tu código actual devuelve Escudo
    //    if (EnemigoEscudo)
    //    {
    //        EnemigoEscudo->SetActorLocation(FVector(-300, 0, 200));
    //    }
    //}

    //FVector PosicionInicial(500, 0, 0); // colocar laberinto en posicion en el mapa modificar para que este en el mapa 
    //FRotator RotacionInicial = FRotator::ZeroRotator;

    //AGenerarLaberinto* Laberinto = World->SpawnActor<AGenerarLaberinto>(AGenerarLaberinto::StaticClass(), PosicionInicial, RotacionInicial);

}
