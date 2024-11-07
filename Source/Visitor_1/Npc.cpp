// Fill out your copyright notice in the Description page of Project Settings.
#include "Npc.h"
#include "IPowerUpVisitor.h"

// Sets default values
ANpc::ANpc()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANpc::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANpc::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANpc::Accept(IIPowerUpVisitor* _visitor)
{
	_visitor->Visit(this);
}

void ANpc::ApplyPowerUp()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Power-up aplicado al npc")));
}

