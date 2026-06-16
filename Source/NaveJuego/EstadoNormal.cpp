// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNormal.h"
#include "EnemigoExplosivo.h"
#include "EstadoDaniado.h"

void EstadoNormal::Atacar(AEnemigoExplosivo* Enemigo)
{
    UE_LOG(LogTemp, Log, TEXT("EstadoNormal: disparando normalmente"));
    // disparo lento normal
}

void EstadoNormal::Mover(AEnemigoExplosivo* Enemigo, float DeltaTime)
{
    FVector NuevaPosicion = Enemigo->GetActorLocation() + FVector(200.0f * DeltaTime, 0, 0);
    Enemigo->SetActorLocation(NuevaPosicion);
}

void EstadoNormal::VerificarEstado(AEnemigoExplosivo* Enemigo)
{
    // Si la vida baja de 50 cambia a estado daniado
    if (Enemigo->NivelVida <= 5.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Transicion: Normal -> Daniado"));
        Enemigo->CambiarEstado(new EstadoDaniado());
    }
}