// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observador.h"
#include "RadarObservador.generated.h"// radar publicador 


UCLASS()
class NAVEJUEGO_API ARadarObservador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARadarObservador();

	

private:
	TArray<IObservador*> EnemigosSuscritos;
	APawn* PawnJugador;
	bool bYaDetecto; // evita spam de notificaciones

public:
	
	void Suscribir(IObservador* Enemigo) { EnemigosSuscritos.Add(Enemigo); }
	void Desuscribir(IObservador* Enemigo) { EnemigosSuscritos.Remove(Enemigo); }
	void Detectar(AActor* PawnDetectado);

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Debug")
	void LogSuscritos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Radar")
	float RangoDeteccion = 500.0f;  // <-- ajustable desde el editor

private:
	void NotificarSuscritos(AActor* PawnDetectado);
};
