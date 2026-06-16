// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDaniado.h"
#include "EnemigoExplosivo.h"
#include "EstadoCritico.h"

void EstadoDaniado::Atacar(AEnemigoExplosivo* Enemigo)
{
    UE_LOG(LogTemp, Warning, TEXT("EstadoDaniado: disparando rapido y errático!"));
    // disparo mas rapido
}

void EstadoDaniado::Mover(AEnemigoExplosivo* Enemigo, float DeltaTime)
{
    // Se mueve mas rapido cuando esta daniado
    FVector NuevaPosicion = Enemigo->GetActorLocation() + FVector(350.0f * DeltaTime, 0, 0);
    Enemigo->SetActorLocation(NuevaPosicion);
}

void EstadoDaniado::VerificarEstado(AEnemigoExplosivo* Enemigo)
{
    // Si la vida baja de 20 entra en estado critico
    if (Enemigo->NivelVida <= 2.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Transicion: Daniado -> Critico"));
        Enemigo->CambiarEstado(new EstadoCritico());
    }
}
