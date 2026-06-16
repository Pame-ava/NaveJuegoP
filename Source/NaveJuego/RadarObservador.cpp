// Fill out your copyright notice in the Description page of Project Settings.


#include "RadarObservador.h"// Radar publicador 
#include "EnemigoSuscrito.h"
#include "EnemigoAtacante.h"
#include "EnemigoBloqueador.h"
#include "NaveJuegoPawn.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
ARadarObservador::ARadarObservador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    bYaDetecto = false;
    PawnJugador = nullptr;
}


// Called when the game starts or when spawned
void ARadarObservador::BeginPlay()
{
	Super::BeginPlay();
    

    PawnJugador = Cast<ANaveJuegoPawn>(
        UGameplayStatics::GetPlayerPawn(GetWorld(), 0)
    );

    if (!PawnJugador)
    {
        UE_LOG(LogTemp, Error, TEXT("Radar: no se encontró la NaveJuegoPawn"));
    }

    
   
    for (TActorIterator<AEnemigoAtacante> It(GetWorld()); It; ++It)
    {
        Suscribir(*It);
    }
    for (TActorIterator<AEnemigoBloqueador> It(GetWorld()); It; ++It)
    {
        Suscribir(*It);
    }

    LogSuscritos();
}

// Called every frame
void ARadarObservador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if (!PawnJugador) return;

    // Si la nave fue destruida, limpiar la referencia
    if (!IsValid(PawnJugador))
    {
        PawnJugador = nullptr;
        return;
    }

    float Distancia = FVector::Dist(
        GetActorLocation(),
        PawnJugador->GetActorLocation()
    );
    // Visualizar el rango en el viewport (debug)
    DrawDebugSphere(
        GetWorld(),
        GetActorLocation(),
        RangoDeteccion,
        24,
        Distancia <= RangoDeteccion ? FColor::Red : FColor::Green,
        false, // no persistente
        -1.0f,
        0,
        1.0f
    );
    if (Distancia <= RangoDeteccion)
    {
        if (!bYaDetecto)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("Radar: nave detectada a %.0f unidades — notificando %d suscritos"),
                Distancia, EnemigosSuscritos.Num());

            Detectar(PawnJugador);
            bYaDetecto = true; // no volver a notificar hasta que salga
        }
    }
    else
    {
        // La nave salió del rango — resetear para poder detectar de nuevo
        if (bYaDetecto)
        {
            UE_LOG(LogTemp, Warning, TEXT("Radar: nave salió del rango"));
            bYaDetecto = false;
        }
    }
}


void ARadarObservador::Detectar(AActor* PawnDetectado)
{
        NotificarSuscritos(PawnDetectado);
}

void ARadarObservador::NotificarSuscritos(AActor* PawnDetectado)
{
    for (int32 i = 0; i < EnemigosSuscritos.Num(); i++)
    {
        // Verificar que el enemigo sigue vivo antes de notificar
        AActor* ComoActor = Cast<AActor>(EnemigosSuscritos[i]);
        if (ComoActor && IsValid(ComoActor))
        {
            UE_LOG(LogTemp, Warning, TEXT("  Notificando a: %s"), *ComoActor->GetName());
            EnemigosSuscritos[i]->ActualizarEstado(PawnDetectado);
        }
    }
}

void ARadarObservador::LogSuscritos()
{
    UE_LOG(LogTemp, Warning, TEXT("=== Suscritos en %s: %d ==="),
        *GetName(), EnemigosSuscritos.Num());

    for (int32 i = 0; i < EnemigosSuscritos.Num(); i++)
    {
        AActor* ComoActor = Cast<AActor>(EnemigosSuscritos[i]);
        if (ComoActor)
        {
            UE_LOG(LogTemp, Warning, TEXT("  [%d] %s"), i, *ComoActor->GetName());
        }
    }

    if (EnemigosSuscritos.Num() == 0)
        UE_LOG(LogTemp, Warning, TEXT("  (lista vacía)"));
}