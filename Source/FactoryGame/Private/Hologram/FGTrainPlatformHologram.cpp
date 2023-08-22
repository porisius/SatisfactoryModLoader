// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGTrainPlatformHologram.h"

AFGTrainPlatformHologram::AFGTrainPlatformHologram() : Super() {
	this->mRequireSnapToPlatform = false;
	this->mRailroadTrackRecipe = nullptr;
	this->mRailroadTrackHologram = nullptr;
	this->mPlatformConnectionComponents[0] = nullptr;
	this->mPlatformConnectionComponents[1] = nullptr;
	this->mConnectedPlatformComponents[0] = nullptr;
	this->mConnectedPlatformComponents[1] = nullptr;
}
void AFGTrainPlatformHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGTrainPlatformHologram, mRailroadTrackHologram);
}
void AFGTrainPlatformHologram::BeginPlay(){ }
void AFGTrainPlatformHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
AActor* AFGTrainPlatformHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
void AFGTrainPlatformHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
void AFGTrainPlatformHologram::PostHologramPlacement(const FHitResult& hitResult){ }
USceneComponent* AFGTrainPlatformHologram::SetupComponent(USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName, const FName& attachSocketName){ return nullptr; }
void AFGTrainPlatformHologram::PreConfigureActor( AFGBuildable* inBuildable){ }
void AFGTrainPlatformHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGTrainPlatformHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
bool AFGTrainPlatformHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGTrainPlatformHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
int32 AFGTrainPlatformHologram::GetRotationStep() const{ return int32(); }
void AFGTrainPlatformHologram::OnHologramTransformUpdated(){ }
void AFGTrainPlatformHologram::SnapToConnection( UFGTrainPlatformConnection* connection){ }
UFGTrainPlatformConnection* AFGTrainPlatformHologram::FindOverlappingConnectionComponent(const FVector& location, float actorOverlapRadius, float toleranceRadius, bool ignoreSelf, bool ignoreIsConnected) const{ return nullptr; }
