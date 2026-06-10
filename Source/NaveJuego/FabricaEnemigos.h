 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "FabricaEnemigos.generated.h"

UCLASS()
class NAVEJUEGO_API AFabricaEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AEnemigo* CrearEnemigo(FString _Enemigo) PURE_VIRTUAL(AFabricaEnemigos::CrearEnemigo, return nullptr;);

};
