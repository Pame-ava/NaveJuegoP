  // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArmaDecorador.h"
#include "Enemigo.h"
#include "ArmaCongelador.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AArmaCongelador : public AArmaDecorador
{
	GENERATED_BODY()
        
	
//public:
//    AArmaCongelador(IArma* InProjectile) : AArmaDecorador(InProjectile) {}
//
//    virtual void danio(AActor* OtherActor) override
//    {
//       AArmaDecorador::danio(OtherActor);
//        UE_LOG(LogTemp, Warning, TEXT("Decorador: ¡El proyectil congela al enemigo!"));
//
//         if (AEnemigo* enemigo = Cast<AEnemigo>(OtherActor))
//         {
//             enemigo->ReducirVelocidad(0.5f); // reduce velocidad a la mitad
//         }
//    }
};



