// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenerarLaberinto.generated.h"

class AFabricaMeteoritosMovil;
class AFabricaMeteoritosFantasma;
class AFabricaMeteoritosDestructible;
UCLASS()
class NAVEJUEGO_API AGenerarLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerarLaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GenerarCampoMeteoritos();
	void ConfigurarLaberinto(int32 Filas, int32 Columnas);
	void Generar();

private:
	TArray<TArray<int32>> Mapa;
};
