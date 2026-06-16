// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoExplosivo.h"
#include "EstadoNormal.h"

AEnemigoExplosivo::AEnemigoExplosivo()
{
    EstadoActual = new EstadoNormal();
}

void AEnemigoExplosivo::CambiarEstado(IEstadoExplosivo* NuevoEstado)
{
    delete EstadoActual;       // libera el estado anterior
    EstadoActual = NuevoEstado;
}

void AEnemigoExplosivo::BeginPlay()
{
	Super::BeginPlay();
}
void AEnemigoExplosivo::Disparar()
{
    if (EstadoActual)
        EstadoActual->Atacar(this);
}
void AEnemigoExplosivo::Mover(float DeltaTime)
{
}

void AEnemigoExplosivo::RecibirDanio(float CantidadDanio)
{
    NivelVida -= CantidadDanio;
    UE_LOG(LogTemp, Warning, TEXT("EnemigoExplosivo vida: %f"), NivelVida);

    if (EstadoActual)
        EstadoActual->VerificarEstado(this); // <-- aqui decide si cambia de estado

}

void AEnemigoExplosivo::Explotar()
{
    //UE_LOG(LogTemp, Warning, TEXT("¡El enemigo explosivo explota causando %f de daño!"), NivelDanio * 3);
    Destroy();
}




