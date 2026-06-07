// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoEscudo.h"

void AEnemigoEscudo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoEscudo::Disparar()
{
}

void AEnemigoEscudo::Mover(float DeltaTime)
{
    float Tiempo = GetWorld()->GetTimeSeconds();
    float Oscilacion = FMath::Sin(Tiempo * 2.0f) * 200.0f;
    FVector NuevaPos = GetActorLocation() + FVector(Velocidad * DeltaTime, Oscilacion * DeltaTime, 0);
    SetActorLocation(NuevaPos);
}

void AEnemigoEscudo::RecibirDanio(float CantidadDanio)
{
}
