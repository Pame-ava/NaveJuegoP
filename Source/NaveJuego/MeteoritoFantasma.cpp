// Fill out your copyright notice in the Description page of Project Settings.


#include "MeteoritoFantasma.h"
#include "TimerManager.h"
//agregar la nave para el daño

AMeteoritoFantasma::AMeteoritoFantasma() {}

void AMeteoritoFantasma::BeginPlay()
{
    Super::BeginPlay();
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AMeteoritoFantasma::Desaparecer, 5.0f, false);
}

void AMeteoritoFantasma::Desaparecer()
{
    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);

    GetWorldTimerManager().SetTimer(TimerHandle, this, &AMeteoritoFantasma::Reaparecer, 5.0f, false);
}

void AMeteoritoFantasma::Reaparecer()
{
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);

    GetWorldTimerManager().SetTimer(TimerHandle, this, &AMeteoritoFantasma::Desaparecer, 5.0f, false);
}
// Inicializa el meteorito fantasma
void AMeteoritoFantasma::construirMeteorito(FVector Inicio, FVector Destino, float Vel)
{
   
}

// Aplica daño a la nave
void AMeteoritoFantasma::Mdanio(AActor* OtherActor)
{
    //ANave* Nave = Cast<ANave>(OtherActor);
    //if (Nave)
    //{
    //    Nave->ReducirVida(15); // ejemplo: este meteorito fantasma causa menos daño
    //}
}
