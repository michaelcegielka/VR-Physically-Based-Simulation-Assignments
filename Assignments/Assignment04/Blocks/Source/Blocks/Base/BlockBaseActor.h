/* ©CGVR 2021. Author: Andre Muehlenbrock
 *
 * A BlockBaseActor is a movable and grabbable actor, which can have several BlockBaseComponets.
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

#include "BlockBaseComponent.h"
#include "../Interface/PickupActorInterface.h"

#include "AGhostPreview.h" // <-- Neu: für Ghost-Preview

#include "BlockBaseActor.generated.h"

UCLASS(Blueprintable)
class BLOCKS_API ABlockBaseActor : public AActor, public IPickupActorInterface
{
	GENERATED_BODY()

public:
	/* Initializes the scene root */
	ABlockBaseActor();

	/* The root component */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Blocks)
	USceneComponent* PrimitiveComponentRoot;

	/* The initial assigned clamping block */
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = Blocks)
	UBlockBaseComponent* BlockBaseComponent;

	/* All block components mapped to their current position relative to this actor */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Blocks)
	TMap<UBlockBaseComponent*, FBlockTransform> blocks;

	/* Stores the overlapping actors temporary, can be used for highlighting */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Blocks)
	TMap<ABlockBaseActor*, UBlockBaseComponent*> overlappingActors;

	/* Called when another component collides roughly with a component of this actor */
	UFUNCTION(BlueprintCallable)
	void OnOverlapBegin(UPrimitiveComponent* t, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/* Called when another component collides roughly with a component of this actor */
	UFUNCTION(BlueprintCallable)
	void OnOverlapEnd(UPrimitiveComponent* t, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/* Called from the BP_MotionController if the player grabs this actor */
	void Pickup_Implementation(USceneComponent* AttachTo) override;

	/* Called from the BP_MotionController if the player releases this actor after grabbing it */
	void Drop_Implementation() override;

	UFUNCTION(BlueprintCallable)
	bool setMergeRemoved(bool isMergeRemoved);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	/* Returns the current voxel volume containing all components (interal data structure to store where other bricks can be attached to) */
	VoxelVolume currentVolume();

	/* Checks whether this actor can be merged to the given actor based on the position and orientation of both */
	UFUNCTION(BlueprintCallable)
	bool isMergableTo(ABlockBaseActor* actor);

	/*
	* Returns the heuristically best fitting transform of this actor relative to the given actor,
	* already "quantized" so that the blocks fit exactly to each other.
	*/
	FTransform getBlockTransformRelativeTo(ABlockBaseActor* actor);

	/* Returns the dimension of the voxels (e.g. 2x2x2 for the Block2x2Actor; a voxel is 1x1x0.5) */
	UFUNCTION(BlueprintCallable)
	FIntVector GetVoxelDimension();

	/* Returns the volume of a voxel volume.
	 * This method divides the z-axis by 2, so that the result is the real volume in cm^3
	 */
	UFUNCTION(BlueprintCallable)
	float getVoxelDimensionVolume();

	/*
	 * Merges all the blocks of one actor into another, and destroys the source actor afterwards.
	 * So never keep a reference to the merged-from actor after calling this function.
	 */
	UFUNCTION(BlueprintCallable)
	bool mergeTo(ABlockBaseActor* actor);

	/* Stores whether this actor was removed from the world previously. */
	bool mergeRemoved = false;

	/* -------------- Ghost Preview Logic -------------- */

public:
	/* Which class to spawn as Ghost? (Can be set in the Editor/Blueprint) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ghost")
	TSubclassOf<AGhostPreview> GhostClass;

	/* Currently active Ghost Actor (if any) */
	UPROPERTY(BlueprintReadWrite, Category = "Ghost")
	AGhostPreview * CurrentGhost = nullptr;

	/* Shows a ghost preview if isMergableTo(...) = true and no Ghost is yet present */
	UFUNCTION(BlueprintCallable, Category = "Ghost")
	void ShowGhostPreview(ABlockBaseActor* OtherBlock);

	/* Continuously update the Ghost's transform while the user is still holding the block */
	UFUNCTION(BlueprintCallable, Category = "Ghost")
	void UpdateGhost(ABlockBaseActor* OtherBlock);

	/* Removes the Ghost Preview (if present) */
	UFUNCTION(BlueprintCallable, Category = "Ghost")
	void RemoveGhostPreview();
};
