// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosAgresor.h"
#include "EnemigoAtacante.h"
#include "EnemigoExplosivo.h"
#include "EnemigoLaser.h"
#include "EnemigoAtacanteRapido.h"
#include "EnemigoJefeFinal.h"

AEnemigo* AFabricaEnemigosAgresor::CrearEnemigo(FString _Enemigo)
{
    // Selecciona qué enemigo generar en función de la cadena introducida
    if (_Enemigo.Equals("Atacante")) {
        return GetWorld()->SpawnActor<AEnemigoAtacante>(AEnemigoAtacante::StaticClass());
    }
    else if (_Enemigo.Equals("Explosivo")) {
        return GetWorld()->SpawnActor<AEnemigoExplosivo>(AEnemigoExplosivo::StaticClass());
    }
    else if (_Enemigo.Equals("Laser")) {
        return GetWorld()->SpawnActor<AEnemigoLaser>(AEnemigoLaser::StaticClass());
    }
    else if (_Enemigo.Equals("Rapido")) {
        return GetWorld()->SpawnActor<AEnemigoAtacanteRapido>(AEnemigoAtacanteRapido::StaticClass());
    }
    else if (_Enemigo.Equals("Jefe")) {
        return GetWorld()->SpawnActor<AEnemigoJefeFinal>(AEnemigoJefeFinal::StaticClass());
    }
    else return nullptr; // Devuelve null si la cadena no es válida

}
