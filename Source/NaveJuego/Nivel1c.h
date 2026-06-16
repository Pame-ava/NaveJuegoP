// Fill out your copyright notice in the Description page of Project Settings.

// FNivel1.h
#pragma once
#include "CoreMinimal.h"

// Estructura que representa el nivel completamente construido
struct NAVEJUEGO_API Nivel1c
{
    class AGenerarLaberinto* Laberinto = nullptr;
    TArray<class AEnemigo*>  Enemigos;
    TArray<class AActor*>    Bonuses;

    bool EstaCompleto() const
    {
        return Laberinto != nullptr
            && Enemigos.Num() > 0
            && Bonuses.Num() > 0;
    }
};
