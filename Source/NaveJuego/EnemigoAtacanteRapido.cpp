// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAtacanteRapido.h"

void AEnemigoAtacanteRapido::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoAtacanteRapido::Disparar()
{
}

void AEnemigoAtacanteRapido::Mover(float DeltaTime)
{
    float Tiempo = GetWorld()->GetTimeSeconds();
    int Fase = ((int)Tiempo) % 3;

    FVector Direccion;
    if (Fase == 0) Direccion = FVector(1, 0, 0);
    else if (Fase == 1) Direccion = FVector(0, 1, 0);
    else Direccion = FVector(-1, -1, 0);

    SetActorLocation(GetActorLocation() + Direccion * Velocidad * DeltaTime);
}

void AEnemigoAtacanteRapido::RecibirDanio(float CantidadDanio)
{
}
