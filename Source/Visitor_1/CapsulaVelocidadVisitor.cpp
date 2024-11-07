// Fill out your copyright notice in the Description page of Project Settings.
#include "CapsulaVelocidadVisitor.h"
#include "Jugador.h"
#include "Npc.h"

// Sets default values
ACapsulaVelocidadVisitor::ACapsulaVelocidadVisitor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsulaVelocidadVisitor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulaVelocidadVisitor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsulaVelocidadVisitor::Visit(AJugador* _jugador)
{
	_jugador->ApplyPowerUp();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Capsula de velocidad")));
}

void ACapsulaVelocidadVisitor::Visit(ANpc* _npc)
{
	_npc->ApplyPowerUp();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Capsula de velocidad")));
}

