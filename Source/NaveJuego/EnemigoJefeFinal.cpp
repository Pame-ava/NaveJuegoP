// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoJefeFinal.h"
#include "ProyectilEnemigo.h"

AEnemigoJefeFinal::AEnemigoJefeFinal()
{
    PrimaryActorTick.bCanEverTick = true;

    // Configura puntos de movimiento
    PuntoInicio = FVector(0, 0, 200);
    PuntoDestino = FVector(500, 0, 200);

    bHaciaDestino = true;
    Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();
}
void AEnemigoJefeFinal::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(PuntoInicio);
}

void AEnemigoJefeFinal::Disparar()
{
    UWorld* World = GetWorld();
    if (World)
    {
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 150.0f;
        FRotator SpawnRotation = GetActorRotation();

        AProyectilEnemigo* Proyectil = World->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation, SpawnRotation);
        if (Proyectil)
        {
            Proyectil->Danio = NivelDanio; // proyectil más fuerte
        }

        UE_LOG(LogTemp, Warning, TEXT("El Jefe disparó un proyectil devastador"));
    }
}

void AEnemigoJefeFinal::Mover(float DeltaTime)
{
    FVector NuevaPos = GetActorLocation() + Direccion * Velocidad * DeltaTime;
    SetActorLocation(NuevaPos);

    // Verificar si llegó al destino
    if (bHaciaDestino && FVector::Dist(GetActorLocation(), PuntoDestino) < 10.0f)
    {
        bHaciaDestino = false;
        Direccion = (PuntoInicio - PuntoDestino).GetSafeNormal();
    }
    else if (!bHaciaDestino && FVector::Dist(GetActorLocation(), PuntoInicio) < 10.0f)
    {
        bHaciaDestino = true;
        Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();
    }
}

void AEnemigoJefeFinal::RecibirDanio(float CantidadDanio)
{
}

void AEnemigoJefeFinal::ActualizarEstado(AActor* PawnDetectado)
{
}
