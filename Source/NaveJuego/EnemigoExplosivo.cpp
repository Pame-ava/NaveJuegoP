// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoExplosivo.h"

void AEnemigoExplosivo::BeginPlay()
{
	Super::BeginPlay();
}
void AEnemigoExplosivo::Disparar()
{
}
void AEnemigoExplosivo::Mover(float DeltaTime)
{
}

void AEnemigoExplosivo::RecibirDanio(float CantidadDanio)
{
}

void AEnemigoExplosivo::Explotar()
{
    //UE_LOG(LogTemp, Warning, TEXT("¡El enemigo explosivo explota causando %f de daño!"), NivelDanio * 3);
    Destroy();
}