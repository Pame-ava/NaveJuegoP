// Fill out your copyright notice in the Description page of Project Settings.


#include "MeteoritoMovil.h"
//agregar la nave para el daño

AMeteoritoMovil::AMeteoritoMovil()
{
    PrimaryActorTick.bCanEverTick = true;

    // Configura los puntos de movimiento
    PuntoInicio = FVector(0, 0, 200);
    PuntoDestino = FVector(0, 1000, 200);

    Velocidad = 200.0f;
    bHaciaDestino = true;

    // Dirección inicial hacia el destino
    Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();
}

void AMeteoritoMovil::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    FVector NuevoPos = GetActorLocation() + Direccion * Velocidad * DeltaTime;
    SetActorLocation(NuevoPos);

    // Verificar si llegó al destino
    if (bHaciaDestino && FVector::Dist(GetActorLocation(), PuntoDestino) < 10.0f)
    {
        bHaciaDestino = false;
        Direccion = (PuntoInicio - PuntoDestino).GetSafeNormal(); // invertir dirección
    }
    else if (!bHaciaDestino && FVector::Dist(GetActorLocation(), PuntoInicio) < 10.0f)
    {
        bHaciaDestino = true;
        Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal(); // invertir dirección
    }
}

// Inicializa el meteorito con posición y velocidad
void AMeteoritoMovil::construirMeteorito(FVector PosicionInicial, FVector VelocidadInicial)
{
    SetActorLocation(PosicionInicial);
    Direccion = VelocidadInicial.GetSafeNormal();
    Velocidad = VelocidadInicial.Size();
}

// Aplica daño a la nave
void AMeteoritoMovil::Mdanio(AActor* OtherActor)
{
    //ANave* Nave = Cast<ANave>(OtherActor);
    //if (Nave)
    //{
    //    Nave->ReducirVida(20); // ejemplo: reduce 20 puntos de vida
    //}
}