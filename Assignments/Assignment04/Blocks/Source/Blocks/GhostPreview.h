#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GhostPreview.generated.h"

UCLASS()
class BLOCKS_API AGhostPreview : public AActor
{
    GENERATED_BODY()

public:
    AGhostPreview();

    // Eine oder mehrere Mesh-Komponenten, je nachdem ob dein Ghost nur ein Mesh 
    // oder mehrere Komponenten hat. Hier als Beispiel ein einzelnes Mesh:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ghost")
    UStaticMeshComponent* GhostMesh;

    // Du könntest hier Referenzen auf den "echten" Block oder andere Dinge speichern, falls nötig.
};
