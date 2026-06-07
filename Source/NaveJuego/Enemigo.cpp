// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigoExtraterrestre"));
	RootComponent = MallaEnemigo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshDona(TEXT("/Engine/BasicShapes/Sphere.Sphere"));

	if (MeshDona.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshDona.Object);
	}


	// Escala para que se vea mejor
	MallaEnemigo->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover(DeltaTime);
}

void AEnemigo::Disparar()
{
    // Aquí puedes instanciar un proyectil o simplemente mostrar un log
//    UE_LOG(LogTemp, Warning, TEXT("El enemigo dispara causando %f de daño"), NivelDanio);
}

void AEnemigo::Mover(float DeltaTime)
{
    // Movimiento simple hacia adelante
    FVector NuevaPosicion = GetActorLocation() + FVector(Velocidad * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}

void AEnemigo::RecibirDanio(float CantidadDanio)
{
    NivelVida -= CantidadDanio;
    //UE_LOG(LogTemp, Warning, TEXT("El enemigo recibió %f de daño. Vida restante: %f"), CantidadDanio, NivelVida);

    if (NivelVida <= 0)
    {
       // UE_LOG(LogTemp, Warning, TEXT("El enemigo ha sido destruido"));
        Destroy();
    }
}