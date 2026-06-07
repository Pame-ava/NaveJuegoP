// Fill out your copyright notice in the Description page of Project Settings.


#include "BonusComodin.h"
#include "Enemigo.h"

void ABonusComodin::AplicarBonus(AActor* Objetivo) {
    if (AEnemigo* Enemigo = Cast<AEnemigo>(Objetivo)) { 
       //Enemigo->Velocidad *= 0.5f; // reduce velocidad a la mitad
        Destroy();
     }
}
