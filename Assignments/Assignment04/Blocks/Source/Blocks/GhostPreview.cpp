#include "GhostPreview.h"
#include "Components/StaticMeshComponent.h"

AGhostPreview::AGhostPreview()
{
    PrimaryActorTick.bCanEverTick = false;

    GhostMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GhostMesh"));
    RootComponent = GhostMesh;

    // Collision ausschalten (wir wollen ja nur eine Vorschau):
    GhostMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Du könntest hier ggf. ein halbtransparentes Material setzen,
    // entweder direkt oder später in Blueprint:
    // GhostMesh->SetMaterial(0, GhostMaterialRef);
}
