// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Meteorito.generated.h"

class UStaticMeshComponent;
UCLASS()
class NAVEJUEGO_API AMeteorito : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMeteorito();

	UStaticMeshComponent* MallaMeteorito;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void construirMeteorito(FVector PosicionInicial, FVector VelocidadInicial);
	virtual void Mdanio(AActor* OtherActor);

};
