// Fill out your copyright notice in the Description page of Project Settings.


#include "Bonus.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABonus::ABonus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    MallaBonus = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBonus"));
    RootComponent = MallaBonus;

    // Aquí puedes usar un cubo como base del muro
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (MallaAsset.Succeeded())
    {
        MallaBonus->SetStaticMesh(MallaAsset.Object);
    }

    // Escala para que parezca  largo y delgado
    MallaBonus->SetRelativeScale3D(FVector(1.0f, 2.0f, 1.0f));

    // Activar colisiones para recoger
    MallaBonus->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    MallaBonus->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ABonus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABonus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

