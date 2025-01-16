// Fill out your copyright notice in the Description page of Project Settings.


#include "GhostPreview.h"

// Sets default values
AGhostPreview::AGhostPreview()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    GhostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GhostMesh"));
    RootComponent = GhostMesh;

    GhostMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);


    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'xyz'"));
    if (MeshAsset.Succeeded())
    {
        GhostMesh->SetStaticMesh(MeshAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Ghost Mesh not found!"));
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/xyz'"));
    if (MaterialAsset.Succeeded())
    {
        GhostMaterial = MaterialAsset.Object;
        GhostMesh->SetMaterial(0, GhostMaterial);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Ghost Material not found."));
    }

    GhostMesh->SetVisibility(false);
}

// Called when the game starts or when spawned
void AGhostPreview::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGhostPreview::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
