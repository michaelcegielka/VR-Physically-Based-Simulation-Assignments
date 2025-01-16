#include "GhostPreview.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

GhostPreview::GhostPreview()
{
    PrimaryActorTick.bCanEverTick = false;

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
