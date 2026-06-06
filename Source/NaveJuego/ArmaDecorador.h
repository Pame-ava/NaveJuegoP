// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arma.h"
#include "ArmaDecorador.generated.h"

UCLASS()
class NAVEJUEGO_API AArmaDecorador : public AActor, public IArma
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmaDecorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	IArma* WrappedProjectile;

public:
	AArmaDecorador(IArma* InProjectile) : WrappedProjectile(InProjectile) {}
	virtual void danio(AActor* OtherActor) override
	{
		if (WrappedProjectile)
			WrappedProjectile->danio(OtherActor);
	}
};
