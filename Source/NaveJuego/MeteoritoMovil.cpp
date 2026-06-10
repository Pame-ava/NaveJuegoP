// Fill out your copyright notice in the Description page of Project Settings.


#include "MeteoritoMovil.h"
#include "NaveJuegoPawn.h"

AMeteoritoMovil::AMeteoritoMovil()
{
    PrimaryActorTick.bCanEverTick = true;

    PuntoInicio = FVector(0, 0, 200);
    PuntoDestino = FVector(0, 1000, 200);
    Velocidad = 200.0f;
    bHaciaDestino = true;
    Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();
}


void AMeteoritoMovil::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector NuevoPos = GetActorLocation() + Direccion * Velocidad * DeltaTime;

    // Verificar límites del mapa
    if (NuevoPos.X < LimiteMin.X || NuevoPos.X > LimiteMax.X ||
        NuevoPos.Y < LimiteMin.Y || NuevoPos.Y > LimiteMax.Y ||
        NuevoPos.Z < LimiteMin.Z || NuevoPos.Z > LimiteMax.Z)
    {
        Direccion *= -1; // invertir dirección si se sale del área
    }

    SetActorLocation(NuevoPos);

    // Verificar si llegó al destino
    if (bHaciaDestino && FVector::Dist(GetActorLocation(), PuntoDestino) < 10.0f)
    {
        bHaciaDestino = false;
        Direccion = (PuntoInicio - PuntoDestino).GetSafeNormal();
    }
    else if (!bHaciaDestino && FVector::Dist(GetActorLocation(), PuntoInicio) < 10.0f)
    {
        bHaciaDestino = true;
        Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();
    }
}

// Inicializa el meteorito con posición y velocidad
void AMeteoritoMovil::construirMeteorito(FVector Inicio, FVector Destino, float Vel)
{
    PuntoInicio = Inicio;
    PuntoDestino = Destino;
    Velocidad = Vel;
    bHaciaDestino = true;
    Direccion = (PuntoDestino - PuntoInicio).GetSafeNormal();

    SetActorLocation(PuntoInicio);
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