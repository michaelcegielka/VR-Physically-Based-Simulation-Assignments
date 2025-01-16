// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GhostPreview.generated.h"

UCLASS()
class BLOCKS_API GhostPreview : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGhostPreview();

public:
    GhostPreview();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ghost")
    UStaticMeshComponent* GhostMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ghost")
    UMaterialInterface* GhostMaterial;
};
