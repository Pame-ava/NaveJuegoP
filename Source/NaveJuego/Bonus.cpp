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

    // Asignar malla dorada (ejemplo: esfera)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("/Game/Meshes/EsferaDorada.EsferaDorada"));
    if (MeshObj.Succeeded()) {
        MallaBonus->SetStaticMesh(MeshObj.Object);
    }

    // Asignar material dorado
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialObj(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
    if (MaterialObj.Succeeded()) {
        MallaBonus->SetMaterial(0, MaterialObj.Object);
    }

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

