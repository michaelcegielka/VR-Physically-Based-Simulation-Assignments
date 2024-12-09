// Fill out your copyright notice in the Description page of Project Settings.


#include "LOD_Actor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

// Sets default values
ALOD_Actor::ALOD_Actor()
{
    // Create Static Mesh Component and set it as the root component
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    RootComponent = StaticMeshComponent;

    // Initialize thresholds
    HighToMediumThreshold = 10000.0f;
    MediumToLowThreshold = 5000.0f;

    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALOD_Actor::BeginPlay()
{
    Super::BeginPlay();

    // Set initial mesh
    if (LODMeshHigh)
    {
        StaticMeshComponent->SetStaticMesh(LODMeshHigh);
    }
}

// Called every frame
void ALOD_Actor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Get player controller and viewport size
    FVector2D ViewportSize;
    if (GEngine && GEngine->GameViewport)
    {
        GEngine->GameViewport->GetViewportSize(ViewportSize);
    }

    // Get screen size of the mesh
    FVector Origin, BoxExtent;
    StaticMeshComponent->GetLocalBounds(Origin, BoxExtent);
    FVector2D ScreenPosition;
    UGameplayStatics::ProjectWorldToScreen(
        GetWorld()->GetFirstPlayerController(),
        GetActorLocation(),
        ScreenPosition
    );

    float ScreenArea = FMath::Clamp(ScreenPosition.X * ScreenPosition.Y, 0.0f, ViewportSize.X * ViewportSize.Y);

    // Switch meshes based on thresholds
    if (ScreenArea > HighToMediumThreshold && LODMeshHigh)
    {
        StaticMeshComponent->SetStaticMesh(LODMeshHigh);
    }
    else if (ScreenArea > MediumToLowThreshold && LODMeshMedium)
    {
        StaticMeshComponent->SetStaticMesh(LODMeshMedium);
    }
    else if (LODMeshLow)
    {
        StaticMeshComponent->SetStaticMesh(LODMeshLow);
    }
}

