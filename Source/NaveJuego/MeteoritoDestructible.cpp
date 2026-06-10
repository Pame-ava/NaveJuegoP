// Fill out your copyright notice in the Description page of Project Settings.


#include "MeteoritoDestructible.h"
//agregar nave 

AMeteoritoDestructible::AMeteoritoDestructible()
{
    Vida = 100.0f; // Vida inicial
}

void AMeteoritoDestructible::RecibirDanio(float Cantidad)
{
    Vida -= Cantidad;
    if (Vida <= 0.0f)
    {
        Destroy(); // Se destruye el actor
    }
}
// Inicializa el meteorito destructible
void AMeteoritoDestructible::construirMeteorito(FVector Inicio, FVector Destino, float Vel)
{
}

// Aplica daño a la nave
void AMeteoritoDestructible::Mdanio(AActor* OtherActor)
{
    //ANave* Nave = Cast<ANave>(OtherActor);
    //if (Nave)
    //{
    //    Nave->ReducirVida(30); // este meteorito destructible causa más daño
    //}
}