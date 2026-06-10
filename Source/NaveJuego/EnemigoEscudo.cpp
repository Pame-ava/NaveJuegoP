// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoEscudo.h"
#include "Math/UnrealMathUtility.h"

AEnemigoEscudo::AEnemigoEscudo()
{
    // Más vida para el escudo
    NivelVida *= 2.0f;

    // Configurar límites del mapa
    LimiteMin = FVector(-1000, -1000, 0);
    LimiteMax = FVector(1000, 1000, 500);
}

void AEnemigoEscudo::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemigoEscudo::Disparar()
{
}

void AEnemigoEscudo::Mover(float DeltaTime)
{
    float Tiempo = GetWorld()->GetTimeSeconds();

    // Zigzag más largo: aumentar amplitud y reducir frecuencia
    float Oscilacion = FMath::Sin(Tiempo * 1.0f) * 400.0f; // amplitud 400, frecuencia más baja

    FVector NuevaPos = GetActorLocation() + FVector(Velocidad * DeltaTime, Oscilacion * DeltaTime, 0);

    // Verificar límites del mapa
    if (NuevaPos.X < LimiteMin.X || NuevaPos.X > LimiteMax.X ||
        NuevaPos.Y < LimiteMin.Y || NuevaPos.Y > LimiteMax.Y ||
        NuevaPos.Z < LimiteMin.Z || NuevaPos.Z > LimiteMax.Z)
    {
        Velocidad *= -1; // invertir dirección si se sale del área
    }

    SetActorLocation(NuevaPos);
}

void AEnemigoEscudo::RecibirDanio(float CantidadDanio)
{
}

void AEnemigoEscudo::ActualizarEstado(AActor* PawnDetectado)
{
}
