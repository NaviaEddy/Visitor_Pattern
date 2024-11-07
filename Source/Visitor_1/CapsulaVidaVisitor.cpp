// Fill out your copyright notice in the Description page of Project Settings.
#include "CapsulaVidaVisitor.h"
#include "Jugador.h"
#include "Npc.h"

// Sets default values
ACapsulaVidaVisitor::ACapsulaVidaVisitor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsulaVidaVisitor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsulaVidaVisitor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsulaVidaVisitor::Visit(AJugador* _jugador)
{
	_jugador->ApplyPowerUp();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Capsula de vida")));
}

void ACapsulaVidaVisitor::Visit(ANpc* _npc)
{
	_npc->ApplyPowerUp();
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Capsula de vida")));
}

