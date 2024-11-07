// Copyright Epic Games, Inc. All Rights Reserved.
#include "Visitor_1GameModeBase.h"
#include "IPowerUpVisitable.h"
#include "CapsulaVidaVisitor.h"
#include "CapsulaVelocidadVisitor.h"
#include "Jugador.h"
#include "Npc.h"


AVisitor_1GameModeBase::AVisitor_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AVisitor_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	CapsulaVidaVisitor = GetWorld()->SpawnActor<ACapsulaVidaVisitor>(ACapsulaVidaVisitor::StaticClass());
	CapsulaVelocidadVisitor = GetWorld()->SpawnActor<ACapsulaVelocidadVisitor>(ACapsulaVelocidadVisitor::StaticClass());

	AplicarCapsulasVisitantes(AJugador::StaticClass(), CapsulaVidaVisitor, CapsulaVelocidadVisitor);
	AplicarCapsulasVisitantes(ANpc::StaticClass(), CapsulaVidaVisitor, CapsulaVelocidadVisitor);

}

void AVisitor_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVisitor_1GameModeBase::AplicarCapsulasVisitantes(TSubclassOf<AActor> ActorClass, class IIPowerUpVisitor* Visitor1, class IIPowerUpVisitor* Visitor2)
{
    for (int32 i = 0; i < 3; ++i)
    {
        AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(ActorClass);
        if (SpawnedActor)
        {
            PersonajeVisitable = Cast<IIPowerUpVisitable>(SpawnedActor);
            if (PersonajeVisitable)
            {
                PersonajeVisitable->Accept(Visitor1);
                PersonajeVisitable->Accept(Visitor2);
            }
        }
    }
}

