// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilEnemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"

// Sets default values
AProyectilEnemigo::AProyectilEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Crear la malla
    ProyectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectilMesh"));
    RootComponent = ProyectilMesh;

    // Asignar una malla básica (puedes cambiarla en el editor)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    if (Mesh.Succeeded())
    {
        ProyectilMesh->SetStaticMesh(Mesh.Object);
    }

    // Escala más pequeña
    ProyectilMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));


}

// Called when the game starts or when spawned
void AProyectilEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Movimiento hacia adelante
    FVector NuevaUbicacion = GetActorLocation() + GetActorForwardVector() * Velocidad * DeltaTime;
    SetActorLocation(NuevaUbicacion);


    // Evento de impacto
    ProyectilMesh->OnComponentHit.AddDynamic(this, &AProyectilEnemigo::OnImpact);
}

void AProyectilEnemigo::OnImpact(UPrimitiveComponent* HitComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, FVector NormalImpulse,
    const FHitResult& Hit)
{
    if (OtherActor && OtherActor != this)
    {
//        UE_LOG(LogTemp, Warning, TEXT("Proyectil impactó a %s causando %f de daño"),
           // *OtherActor->GetName(), Danio);
        Destroy();
    }
}