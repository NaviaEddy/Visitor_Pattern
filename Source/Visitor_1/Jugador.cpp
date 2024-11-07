// Fill out your copyright notice in the Description page of Project Settings.
#include "Jugador.h"
#include "IPowerUpVisitor.h"

// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugador::Accept(IIPowerUpVisitor* _visitor)
{
	_visitor->Visit(this);

}

void AJugador::ApplyPowerUp()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Power-up aplicado al jugador")));
}

