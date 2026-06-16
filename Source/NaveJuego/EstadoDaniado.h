// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EstadoExplosivo.h"

/**
 * 
 */
class AEnemigoExplosivo;
class NAVEJUEGO_API EstadoDaniado : public IEstadoExplosivo
{
public:
    virtual void Atacar(AEnemigoExplosivo* Enemigo) override;
    virtual void Mover(AEnemigoExplosivo* Enemigo, float DeltaTime) override;
    virtual void VerificarEstado(AEnemigoExplosivo* Enemigo) override;
};
