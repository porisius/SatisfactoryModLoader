// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCreatureSubsystem.h"

TAutoConsoleVariable<int32> CVarCreatureDisable(TEXT("CVarCreatureDisable"), 0, TEXT(""));
AFGCreatureSubsystem::AFGCreatureSubsystem() : Super() {
	this->mMaxNumCreatures = 20;
	this->mCreaturesCanAttackEachother = false;
	this->mArachnidCreaturesDisabled = false;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGCreatureSubsystem::BeginPlay(){ }
void AFGCreatureSubsystem::Tick(float dt){ }
void AFGCreatureSubsystem::RegisterSpawner( AFGCreatureSpawner* spawner){ }
void AFGCreatureSubsystem::UnregisterSpawner( AFGCreatureSpawner* spawner){ }
void AFGCreatureSubsystem::RegisterCreature( AFGCreature* creature){ }
void AFGCreatureSubsystem::UnregisterCreature( AFGCreature* creature){ }
void AFGCreatureSubsystem::RegisterFlyingBabyCrab( AFGFlyingBabyCrab* babyCrab){ }
void AFGCreatureSubsystem::UnregisterFlyingBabyCrab( AFGFlyingBabyCrab* babyCrab){ }
void AFGCreatureSubsystem::ForceTriggerSpawnersInRange(){ }
bool AFGCreatureSubsystem::IsProtectedCreature(TSubclassOf<  AFGCreature > creatureClass) const{ return bool(); }
void AFGCreatureSubsystem::SetCreatureStressEnabled(bool enabled){ }
AFGCreatureSubsystem* AFGCreatureSubsystem::Get(UWorld* world){ return nullptr; }
AFGCreatureSubsystem* AFGCreatureSubsystem::Get(UObject* worldContext){ return nullptr; }
TSubclassOf< class UFGNoise > AFGCreatureSubsystem::GetNoiseClassFromFName(const FName& name) const{ return TSubclassOf<class UFGNoise>(); }
TSubclassOf< class UFGNoise > AFGCreatureSubsystem::GetNoiseClassFromStimulus(const  FAIStimulus& stimulus) const{ return TSubclassOf<class UFGNoise>(); }
void AFGCreatureSubsystem::AddCreatureClassOverride(TSubclassOf< AFGCreature > classToReplace, TSubclassOf< AFGCreature > overrideClass, ECreatureReplaceAction replaceAction){ }
void AFGCreatureSubsystem::AddCreatureClassOverride(const FCreatureClassOverride& creatureOverride, ECreatureReplaceAction replaceAction){ }
void AFGCreatureSubsystem::RemoveCreatureClassOverride(TSubclassOf< AFGCreature > creatureClass, bool updateScannableState){ }
AFGCreature* AFGCreatureSubsystem::BeginSpawningCreature(TSubclassOf< AFGCreature > creatureClass, const FTransform& spawnTransform){ return nullptr; }
void AFGCreatureSubsystem::SetArachnidCreaturesDisabled(bool disabled, ECreatureReplaceAction replaceAction){ }
TSubclassOf< AFGCreature > AFGCreatureSubsystem::GetOverriddenCreatureClass(TSubclassOf< AFGCreature > creatureClass) const{ return TSubclassOf<AFGCreature>(); }
TSubclassOf< AFGCreature > AFGCreatureSubsystem::OverrideSpawnedCreatureClass_Implementation(TSubclassOf< AFGCreature > creatureClassToSpawn) const{ return TSubclassOf<AFGCreature>(); }
void AFGCreatureSubsystem::OnPreLevelRemovedFromWorld(ULevel* inLevel, UWorld* inWorld){ }
void AFGCreatureSubsystem::DespawnCreaturesInlevel(ULevel* inLevel){ }
void AFGCreatureSubsystem::OnCreaturePersistenceUpdated( AFGCreature* creature, bool isPersistent){ }
void AFGCreatureSubsystem::UpdateSpawners(){ }
void AFGCreatureSubsystem::ManageCreatures(){ }
void AFGCreatureSubsystem::ManageSpawningNewCreatures(){ }
void AFGCreatureSubsystem::ManageFlyingBabyCrabs(float dt){ }
void AFGCreatureSubsystem::PopulateNoiseClassArray(){ }
void AFGCreatureSubsystem::HandleExistingCreatureReplacement( AFGCreature* creatureToReplace, ECreatureReplaceAction replaceAction){ }
