// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IPowerUpVisitor.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsulaVidaVisitor.generated.h"

UCLASS()
class VISITOR_1_API ACapsulaVidaVisitor : public AActor, public IIPowerUpVisitor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsulaVidaVisitor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Visit(class AJugador* _jugador) override;
	void Visit(class ANpc* _npc) override;

};
