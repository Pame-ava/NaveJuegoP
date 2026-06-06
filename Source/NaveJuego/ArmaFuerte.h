// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArmaDecorador.h"
#include "ArmaFuerte.generated.h"

/**
 * 
 */
UCLASS()
class NAVEJUEGO_API AArmaFuerte : public AArmaDecorador
{
	GENERATED_BODY()
	
private :
	int danioextra;

public:
    AArmaFuerte(IArma* InProjectile, int InExtraDanio)
        : AArmaDecorador(InProjectile), danioextra(InExtraDanio) {
    }

    virtual void danio(AActor* OtherActor) override
    {
        AArmaDecorador::danio(OtherActor);
        //UE_LOG(LogTemp, Warning, TEXT("Decorador: daño adicional %d"), extraDanio);

        // if (AEnemigo* enemigo = Cast<AEnemigo>(OtherActor))
        // {
        //     enemigo->RecibirDanio(extraDanio);
        // }
    }
};
