// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoBloqueador.h"

AEnemigoBloqueador::AEnemigoBloqueador()
{
    PrimaryActorTick.bCanEverTick = true;

    PuntoInicio = FVector(0, 0, 200);
    PuntoDestino = FVector(0, 1000, 200);
    Velocidad = 200.0f;
    bHaciaDestino = true;
    Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();
}

void AEnemigoBloqueador::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoBloqueador::Disparar()
{
}

void AEnemigoBloqueador::Mover(float DeltaTime)
{
    if (bModoTriangular && PuntosTriangulo.Num() == 3)
    {
        FVector Destino = PuntosTriangulo[IndiceTriangulo];
        FVector NuevoPos = GetActorLocation() + Direccion * Velocidad * DeltaTime;
        SetActorLocation(NuevoPos);

        if (FVector::Dist(GetActorLocation(), Destino) < 30.0f)
        {
            IndiceTriangulo = (IndiceTriangulo + 1) % 3;
            Direccion = (PuntosTriangulo[IndiceTriangulo] -
                PuntosTriangulo[(IndiceTriangulo + 2) % 3]).GetSafeNormal();
        }
        return;
    }

    FVector NuevoPos = GetActorLocation() + Direccion * Velocidad * DeltaTime;

    //// Verificar límites del mapa
    if (NuevoPos.X < LimiteMin.X || NuevoPos.X > LimiteMax.X ||
        NuevoPos.Y < LimiteMin.Y || NuevoPos.Y > LimiteMax.Y ||
        NuevoPos.Z < LimiteMin.Z || NuevoPos.Z > LimiteMax.Z)
    {
        Direccion *= -1; // invertir dirección si se sale del área
    }

    SetActorLocation(NuevoPos);

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



void AEnemigoBloqueador::RecibirDanio(float CantidadDanio)
{
}

void AEnemigoBloqueador::ActualizarEstado(AActor* PawnDetectado)
{
    Velocidad = 400.0f;
}

