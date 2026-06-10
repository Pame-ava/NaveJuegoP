// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoLaser.h"
#include "ProyectilEnemigo.h"

void AEnemigoLaser::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoLaser::Disparar()
{
    // Ráfaga de 6 proyectiles en abanico
    FVector SpawnLocation = GetActorLocation();
    for (int i = -3; i <= 3; i++)
    {
        FRotator Rotacion = GetActorRotation() + FRotator(0, i * 5, 0);
        GetWorld()->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation, Rotacion);
    }
}

void AEnemigoLaser::Mover(float DeltaTime)
{
}

void AEnemigoLaser::RecibirDanio(float CantidadDanio)
{
}

void AEnemigoLaser::ActualizarEstado(AActor* PawnDetectado)
{
}
