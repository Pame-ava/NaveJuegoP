 // Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAtacante.h"
#include "ProyectilEnemigo.h"
#include "Engine/World.h"
#include "TimerManager.h"


AEnemigoAtacante::AEnemigoAtacante()
{
	PrimaryActorTick.bCanEverTick = false;

    PuntosRuta.Add(FVector(0, 0, 100));
    PuntosRuta.Add(FVector(500, 0, 100));
    PuntosRuta.Add(FVector(500, 500, 100));
    PuntosRuta.Add(FVector(0, 500, 100));

    IndiceActual = 0;
}

void AEnemigoAtacante::BeginPlay()
{
    Super::BeginPlay();

	// Configurar el timer para disparar cada 5 segundos
		GetWorldTimerManager().SetTimer(
			TimerDisparo,
			this,
			&AEnemigoAtacante::Disparar,
			IntervaloDisparo,
			true // repetitivo
		);
}

void AEnemigoAtacante::Disparar()
{
    if (!GetWorld()) return;

    FVector SpawnLocation = GetActorLocation();

    for (int i = 0; i < CantidadProyectiles; i++)
    {
        float Angulo = i * (360.0f / CantidadProyectiles); // distribuye en círculo
        FRotator Rotacion = FRotator(0, Angulo, 0);

        GetWorld()->SpawnActor<AProyectilEnemigo>(
            AProyectilEnemigo::StaticClass(),
            SpawnLocation,
            Rotacion
        );
    }

    UE_LOG(LogTemp, Warning, TEXT("%s disparó %d proyectiles"), *GetName(), CantidadProyectiles);
}

void AEnemigoAtacante::Mover(float DeltaTime)
{
    if (PuntosRuta.Num() == 0) return;

    FVector PosActual = GetActorLocation();
    FVector Destino = PuntosRuta[IndiceActual];

    FVector Direccion = (Destino - PosActual).GetSafeNormal();
    FVector NuevaPos = PosActual + Direccion * Velocidad * DeltaTime;
    SetActorLocation(NuevaPos);

    // Si está cerca del destino, pasar al siguiente punto
    if (FVector::Dist(PosActual, Destino) < 50.0f)
    {
        IndiceActual = (IndiceActual + 1) % PuntosRuta.Num(); // ciclo
    }
}

void AEnemigoAtacante::RecibirDanio(float CantidadDanio)
{
}

void AEnemigoAtacante::ActualizarEstado(AActor* PawnDetectado)
{
    if (!PawnDetectado) return;

    // Activar modo circular centrado en el pawn detectado
    bModoCircular = true;
    CentroCirculo = PawnDetectado->GetActorLocation();

    // Reducir intervalo de disparo a la mitad
    IntervaloDisparo = FMath::Max(0.5f, IntervaloDisparo * 0.5f);

    // Reiniciar el timer con el nuevo intervalo
    GetWorldTimerManager().SetTimer(
        TimerDisparo,
        this,
        &AEnemigoAtacante::Disparar,
        IntervaloDisparo,
        true
    );

    UE_LOG(LogTemp, Warning, TEXT("%s: modo circular activado, intervalo=%.1f"),
        *GetName(), IntervaloDisparo);
}
