// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "LOD_Actor.generated.h"

UCLASS(Blueprintable)
class CGVRASSIGNMENT03_API ALOD_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALOD_Actor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // Mesh Component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* StaticMeshComponent;

    // LOD Meshes
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD")
    UStaticMesh* LODMeshHigh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD")
    UStaticMesh* LODMeshMedium;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD")
    UStaticMesh* LODMeshLow;

    // LOD Thresholds
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD")
    float HighToMediumThreshold;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LOD")
    float MediumToLowThreshold;
};
