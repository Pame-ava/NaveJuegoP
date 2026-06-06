// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteorito.h"

// Sets default values
AMeteorito::AMeteorito()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMeteorito::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeteorito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

