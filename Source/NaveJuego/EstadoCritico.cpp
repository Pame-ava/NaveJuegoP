// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoCritico.h"
#include "EnemigoExplosivo.h"

void EstadoCritico::Atacar(AEnemigoExplosivo* Enemigo)
{
    UE_LOG(LogTemp, Error, TEXT("EstadoCritico: a punto de explotar!"));
}

void EstadoCritico::Mover(AEnemigoExplosivo* Enemigo, float DeltaTime)
{
    // Se mueve muy rapido directo al jugador
    FVector NuevaPosicion = Enemigo->GetActorLocation() + FVector(600.0f * DeltaTime, 0, 0);
    Enemigo->SetActorLocation(NuevaPosicion);
}

void EstadoCritico::VerificarEstado(AEnemigoExplosivo* Enemigo)
{
    // Si no tiene vida explota
    if (Enemigo->NivelVida <= 0.0f)
    {
        Enemigo->Explotar();
    }
}
