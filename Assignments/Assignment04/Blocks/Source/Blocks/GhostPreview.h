#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GhostPreview.generated.h"

UCLASS()
class BLOCKS_API GhostPreview : public AActor
{
    GENERATED_BODY()

public:
    GhostPreview();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ghost")
    UStaticMeshComponent* GhostMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ghost")
    UMaterialInterface* GhostMaterial;
};