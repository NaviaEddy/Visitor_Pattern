// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IPowerUpVisitable.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Npc.generated.h"

UCLASS()
class VISITOR_1_API ANpc : public AActor, public IIPowerUpVisitable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANpc();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Accept(IIPowerUpVisitor* _visitor) override;
	void ApplyPowerUp();

};
