// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

class AEnemigoExplosivo;

class IEstadoExplosivo
{
public:
    virtual ~IEstadoExplosivo() {}

    virtual void Atacar(AEnemigoExplosivo* Enemigo) = 0;
    virtual void Mover(AEnemigoExplosivo* Enemigo, float DeltaTime) = 0;
    virtual void VerificarEstado(AEnemigoExplosivo* Enemigo) = 0;

};
