// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Visitor_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class VISITOR_1_API AVisitor_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AVisitor_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	void AplicarCapsulasVisitantes(TSubclassOf<AActor> ActorClass, class IIPowerUpVisitor* Visitor1, class IIPowerUpVisitor* Visitor2);

private:

	class IIPowerUpVisitable* PersonajeVisitable;

	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class ACapsulaVidaVisitor* CapsulaVidaVisitor;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACapsulaVelocidadVisitor* CapsulaVelocidadVisitor;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AJugador* Jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANpc* Npc;
	
};
