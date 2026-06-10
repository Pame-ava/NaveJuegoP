// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.h"

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
	Disparar();
}

void AEnemigo::Disparar()
{
    UWorld* World = GetWorld();
    if (World)
    {
        // Posición de spawn: delante del enemigo
        FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100.0f;
        FRotator SpawnRotation = GetActorRotation();

        // Instanciar proyectil
        World->SpawnActor<AProyectilEnemigo>(AProyectilEnemigo::StaticClass(), SpawnLocation, SpawnRotation);

        UE_LOG(LogTemp, Warning, TEXT("%s disparó un proyectil"), *GetName());
    }
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

    if (NivelVida <= 0)
    {
       
        Destroy();
    }
}

void AEnemigo::ActualizarEstado(AActor* PawnDetectado)
{
}
