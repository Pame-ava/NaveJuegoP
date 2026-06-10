// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigosDefensor.h"
#include "EnemigoBloqueador.h"
#include "EnemigoEscudo.h"

AEnemigo* AFabricaEnemigosDefensor::CrearEnemigo(FString _Enemigo)
{
    // Selecciona qué enemigo generar en función de la cadena introducida
    if (_Enemigo.Equals("Bloqueador")) {
        return GetWorld()->SpawnActor<AEnemigoBloqueador>(AEnemigoBloqueador::StaticClass());
    }
    else if (_Enemigo.Equals("Escudo")) {
        return GetWorld()->SpawnActor<AEnemigoEscudo>(AEnemigoEscudo::StaticClass());
    }
    else return nullptr; // Devuelve null si la cadena no es válida

}
