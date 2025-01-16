/* ©CGVR 2021. Author: Andre Muehlenbrock
 *
 * A BlockBaseActor is a movable and grabbable actor, which can have several BlockBaseComponents.
 */

#include "BlockBaseActor.h"
#include "GhostPreview.h"

 // Unreal
#include "Kismet/KismetSystemLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"

ABlockBaseActor::ABlockBaseActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// Creates a default object:
	PrimitiveComponentRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");

	BlockBaseComponent = CreateDefaultSubobject<UBlockBaseComponent>("BlockBaseComponent");
	BlockBaseComponent->AttachToComponent(PrimitiveComponentRoot, FAttachmentTransformRules::KeepRelativeTransform);

	// Enable overlap events and register overlap listeners:
	BlockBaseComponent->SetGenerateOverlapEvents(true);
	BlockBaseComponent->OnComponentBeginOverlap.AddDynamic(this, &ABlockBaseActor::OnOverlapBegin);
	BlockBaseComponent->OnComponentEndOverlap.AddDynamic(this, &ABlockBaseActor::OnOverlapEnd);
	BlockBaseComponent->SetCollisionProfileName(FName("OverlapAll"));

	// Insert the BlockBaseComponent at 0,0,0:
	blocks.Add(BlockBaseComponent, FBlockTransform());

	// Set the root component:
	RootComponent = PrimitiveComponentRoot;
}

void ABlockBaseActor::BeginPlay()
{
	Super::BeginPlay();
}

void ABlockBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Kopie aller derzeit overlapping Actors
	TMap<ABlockBaseActor*, UBlockBaseComponent*> overlappingCopy = overlappingActors;

	bool bFoundMergable = false;
	ABlockBaseActor* bestCandidate = nullptr;

	// Überprüfe, ob mind. ein Actor existiert, mit dem Merging (theoretisch) möglich ist
	for (auto& Elem : overlappingCopy)
	{
		ABlockBaseActor* overlapActor = Elem.Key;

		if (isMergableTo(overlapActor))
		{
			bFoundMergable = true;
			bestCandidate = overlapActor;
			break;
		}
	}

	// Falls "mergable"
	if (bFoundMergable && bestCandidate)
	{
		// Ghost erzeugen oder aktualisieren:
		ShowGhostPreview(bestCandidate);
		UpdateGhost(bestCandidate);
	}
	else
	{
		// Wenn wir nichts passendes finden, Ghost entfernen:
		RemoveGhostPreview();
	}
}

void ABlockBaseActor::OnOverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp && Comp)
	{
		if (OtherActor->IsA(ABlockBaseActor::StaticClass()) && Comp->IsA(UBlockBaseComponent::StaticClass()))
		{
			overlappingActors.Add((ABlockBaseActor*)OtherActor, (UBlockBaseComponent*)Comp);
		}
	}
}

void ABlockBaseActor::OnOverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp && Comp)
	{
		if (OtherActor->IsA(ABlockBaseActor::StaticClass()) && Comp->IsA(UBlockBaseComponent::StaticClass()))
		{
			overlappingActors.Remove((ABlockBaseActor*)OtherActor);
		}
	}
}

void ABlockBaseActor::Pickup_Implementation(USceneComponent* AttachTo)
{
	K2_GetRootComponent()->K2_AttachToComponent(AttachTo, FName("None"), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
}

void ABlockBaseActor::Drop_Implementation()
{
	K2_DetachFromActor(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld);

	// Schauen, ob wir in Overlap mit Actor sind, wo Merge möglich ist:
	ABlockBaseActor* mergeCandidate = nullptr;
	for (auto& Elem : overlappingActors)
	{
		ABlockBaseActor* overlapActor = Elem.Key;
		if (isMergableTo(overlapActor))
		{
			mergeCandidate = overlapActor;
			break;
		}
	}

	if (mergeCandidate)
	{
		// Jetzt erst mergen:
		mergeTo(mergeCandidate);
	}

	// Anschließend Ghost weg
	RemoveGhostPreview();
}

bool ABlockBaseActor::setMergeRemoved(bool isMR)
{
	mergeRemoved = isMR;
	return true;
}

/* =============== Ghost-Preview-Methoden =============== */

void ABlockBaseActor::ShowGhostPreview(ABlockBaseActor* OtherBlock)
{
	// Falls Ghost schon existiert -> nichts machen
	if (CurrentGhost || !OtherBlock) return;

	// Falls in der UE-Editor-Instanz noch kein GhostClass gesetzt wurde, Warnung
	if (!GhostClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("GhostClass is not set in ABlockBaseActor!"));
		return;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	// Ghost-Actor erzeugen:
	CurrentGhost = GetWorld()->SpawnActor<AGhostBlockActor>(
		GhostClass,
		FTransform::Identity,
		SpawnParams
	);

	if (!CurrentGhost)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to spawn GhostBlockActor"));
		return;
	}

	// Erstposition:
	FTransform ghostTransform = getBlockTransformRelativeTo(OtherBlock) * OtherBlock->GetActorTransform();
	CurrentGhost->SetActorTransform(ghostTransform);
}

void ABlockBaseActor::UpdateGhost(ABlockBaseActor* OtherBlock)
{
	if (!CurrentGhost || !OtherBlock) return;

	FTransform ghostTransform = getBlockTransformRelativeTo(OtherBlock) * OtherBlock->GetActorTransform();
	CurrentGhost->SetActorTransform(ghostTransform);
}

void ABlockBaseActor::RemoveGhostPreview()
{
	if (CurrentGhost)
	{
		CurrentGhost->Destroy();
		CurrentGhost = nullptr;
	}
}

/* =================== Vorhandene Funktionen =================== */

// Hier folgen deine vorhandenen Methoden, die wir nicht geändert haben. 
// (currentVolume(), isMergableTo(), getBlockTransformRelativeTo(), 
// GetVoxelDimension(), getVoxelDimensionVolume(), mergeTo(...)) 
// ... alles unverändert übernommen ...

VoxelVolume ABlockBaseActor::currentVolume()
{
	VoxelVolume result;
	for (auto& Elem : blocks)
	{
		result.Add(Elem.Key->voxelVolume, Elem.Value);
	}
	return result;
}

bool ABlockBaseActor::isMergableTo(ABlockBaseActor* actor)
{
	// Dein bestehender Code aus dem Original, unverändert
	VoxelVolume targetVolume = actor->currentVolume();
	VoxelVolume sourceVolume = currentVolume().TransformTo(FBlockTransform(getBlockTransformRelativeTo(actor)));

	int connections = 0;

	for (auto& Elem : sourceVolume.voxels)
	{
		FIntVector vec = Elem.Key;
		VoxelType type = Elem.Value;

		if (targetVolume.Get(vec) != Free)
		{
			return false;
		}
		// ... restlicher Logic mit male/female ...
		if (type == Blocking)
		{
			VoxelType lowerTarget = targetVolume.Get(vec + FIntVector(0, 0, -1));
			if (lowerTarget == Male)
			{
				return false;
			}
		}
		if (type == Female)
		{
			FVoxelType lowerTarget = targetVolume.Get(vec + FIntVector(0, 0, -1));
			if (lowerTarget != Male && lowerTarget != Free)
			{
				return false;
			}
			if (lowerTarget == Male)
				++connections;
		}
		if (type == Male)
		{
			VoxelType upperTarget = targetVolume.Get(vec + FIntVector(0, 0, 1));
			if (upperTarget != Female && upperTarget != Free)
			{
				return false;
			}
			if (upperTarget == Female)
				++connections;
		}
	}

	if (connections == 0)
	{
		return false;
	}
	return true;
}

FTransform ABlockBaseActor::getBlockTransformRelativeTo(ABlockBaseActor* actor)
{
	FTransform deltaTransform = GetActorTransform() * actor->GetActorTransform().Inverse();
	FVector deltaV = deltaTransform.GetLocation();
	FQuat rotation = deltaTransform.GetRotation();

	// Nur Yaw-Rotation in 90°-Schritten
	FVector v2D = rotation.RotateVector(FVector(1, 0, 0));
	v2D.Z = 0;
	v2D.Normalize();
	float yawRaw = FMath::RadiansToDegrees(FMath::Atan2(v2D.Y, v2D.X));
	float yaw = FMath::Fmod(yawRaw + 360.f, 360.f);

	FRotator quantRotation(0, 0, 0);
	if (yaw >= 45 && yaw < 135)
		quantRotation = FRotator(0, 90, 0);
	else if (yaw >= 135 && yaw < 225)
		quantRotation = FRotator(0, 180, 0);
	else if (yaw >= 225 && yaw < 315)
		quantRotation = FRotator(0, 270, 0);

	FIntVector iVec = GetVoxelDimension();
	FVector rotationOffset(iVec.X / 2.f, iVec.Y / 2.f, iVec.Z / 4.f);

	FTransform rotationTransform = FTransform(-rotationOffset) * FTransform(quantRotation);

	FTransform locationTransform = FTransform(deltaV + rotation.RotateVector(rotationOffset));
	FTransform newTransform = rotationTransform * locationTransform;

	FVector nTVector = newTransform.GetLocation();
	nTVector.X = FMath::RoundToFloat(nTVector.X);
	nTVector.Y = FMath::RoundToFloat(nTVector.Y);
	nTVector.Z = FMath::RoundToFloat(nTVector.Z);

	return FTransform(newTransform.GetRotation(), nTVector);
}

FIntVector ABlockBaseActor::GetVoxelDimension()
{
	VoxelVolume volume = currentVolume();
	FIntVector min(1000000, 1000000, 1000000);
	FIntVector max(-1000000, -1000000, -1000000);

	for (auto& Elem : volume.voxels)
	{
		FIntVector e = Elem.Key;
		if (e.X > max.X) max.X = e.X;
		if (e.Y > max.Y) max.Y = e.Y;
		if (e.Z > max.Z) max.Z = e.Z;
		if (e.X < min.X) min.X = e.X;
		if (e.Y < min.Y) min.Y = e.Y;
		if (e.Z < min.Z) min.Z = e.Z;
	}

	if (min.X > max.X)
		return FIntVector(0, 0, 0);

	return (max - min) + FIntVector(1, 1, 1);
}

float ABlockBaseActor::getVoxelDimensionVolume()
{
	FIntVector dimension = GetVoxelDimension();
	return dimension.X * dimension.Y * (dimension.Z / 2.f);
}

bool ABlockBaseActor::mergeTo(ABlockBaseActor* actor)
{
	if (this == actor || !isMergableTo(actor))
		return false;

	if (mergeRemoved || actor->mergeRemoved)
		return false;

	// Mark here as removed
	mergeRemoved = true;

	FTransform actorToThisTransform = getBlockTransformRelativeTo(actor);

	// Copy all BlockBaseComponents:
	for (auto& Elem : blocks)
	{
		Elem.Key->OnComponentBeginOverlap.RemoveAll(this);
		Elem.Key->OnComponentEndOverlap.RemoveAll(this);

		UBlockBaseComponent* copy = NewObject<UBlockBaseComponent>(actor);
		copy->SetStaticMesh(Elem.Key->GetStaticMesh());
		copy->AttachToComponent(actor->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

		FTransform blockTransform = blocks[Elem.Key].ToFTransform() * actorToThisTransform;
		copy->SetRelativeTransform(blockTransform);
		copy->RegisterComponent();
		copy->voxelVolume = Elem.Key->voxelVolume;

		copy->OnComponentBeginOverlap.AddDynamic(actor, &ABlockBaseActor::OnOverlapBegin);
		copy->OnComponentEndOverlap.AddDynamic(actor, &ABlockBaseActor::OnOverlapEnd);
		copy->SetCollisionProfileName(FName("OverlapAll"));

		actor->blocks.Add(copy, FBlockTransform(blockTransform));
	}

	GetWorld()->DestroyActor(this);

	return true;
}
