// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSuscrito.h"
#include "AIController.h"

// Sets default values
AEnemigoSuscrito::AEnemigoSuscrito()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AEnemigoSuscrito::ActualizarEstado(AActor* PawnDetectado)
{
	ObjetivoActual = PawnDetectado;
}



// Called when the game starts or when spawned
void AEnemigoSuscrito::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoSuscrito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



