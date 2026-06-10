// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observador.h"
#include "GameFramework/Actor.h"
#include "EnemigoSuscrito.generated.h"


UCLASS()
class NAVEJUEGO_API AEnemigoSuscrito : public AActor, public IObservador
{
	GENERATED_BODY()

private:
	AActor* ObjetivoActual;

public:
	// Sets default values for this character's properties
	AEnemigoSuscrito();

public:
	virtual void ActualizarEstado(AActor* PawnDetectado) override;
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
