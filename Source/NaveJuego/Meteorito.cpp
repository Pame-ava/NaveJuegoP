// Fill out your copyright notice in the Description page of Project Settings.


#include "Meteorito.h"

// Sets default values
AMeteorito::AMeteorito()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MallaMeteorito = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
    RootComponent = MallaMeteorito;

    // Aquí puedes usar un cubo como base del muro
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (MallaAsset.Succeeded())
    {
        MallaMeteorito->SetStaticMesh(MallaAsset.Object);
    }

    // Escala para que parezca un muro largo y delgado
    MallaMeteorito->SetRelativeScale3D(FVector(2.0f, 2.0f, 2.0f));

    // Asignar material de ladrillos
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));

    if (MaterialAsset.Succeeded())
    {
        MallaMeteorito->SetMaterial(0, MaterialAsset.Object);
    }
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

void AMeteorito::construirMeteorito(FVector PosicionInicial, FVector VelocidadInicial)
{
    SetActorLocation(PosicionInicial);
}

void AMeteorito::Mdanio(AActor* OtherActor)
{
    //// Verificar si el actor es la nave cambiar para colocar la nava dell juego 
    //ANave* Nave = Cast<ANave>(OtherActor);
    //if (Nave)
    //{
    //    Nave->ReducirVida(10); // ejemplo: reduce 10 puntos de vida
    //}
}

