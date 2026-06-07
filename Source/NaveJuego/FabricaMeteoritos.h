// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Meteorito.h"
#include "FabricaMeteoritos.generated.h"

UCLASS()
class NAVEJUEGO_API AFabricaMeteoritos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaMeteoritos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AMeteorito* CrearMeteorito(UWorld* World, FVector Posicion, FRotator Rotacion) PURE_VIRTUAL(AFabricaMeteorito::CrearMeteorito, return nullptr;);
};
