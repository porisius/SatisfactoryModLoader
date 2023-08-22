// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGProjectile.h"
#include "Components/SphereComponent.h"
#include "FGProjectileMovementComponent.h"

AFGProjectile::AFGProjectile() : Super() {
	this->mCanTriggerExplodeBySameClass = false;
	this->mProjectileLifespan = 10.0;
	this->mProjectileStickspan = 5.0;
	this->mProjectileColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mProjectileScale = 0.0;
	this->mCanBeHitByHomingAmmo = false;
	this->mRotatingMovementComp = nullptr;
	this->mClusterProjectileClass = nullptr;
	this->mNumClusterProjectiles = FInt32Interval(0, 0);
	this->mClusterProjectileSpreadIntervalAngle = FFloatInterval(0.0, 360.0);
	this->mClusterProjectileSidewaysLaunchSpeed = FFloatInterval(500.0, 1000.0);
	this->mClusterProjectileVerticalLaunchSpeed = FFloatInterval(500.0, 1000.0);
	this->mClusterUpVector = FVector((0, 0, 1));
	this->mThrowRotation = FRotator::ZeroRotator;
	this->mTargetActor = nullptr;
	this->mTargetLocation = FVector::ZeroVector;
	this->mIsHomingProjectile = false;
	this->mSourceAmmoDescriptor = nullptr;
	this->mGravityScaleOverLifespan.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mGravityScaleOverLifespan.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mGravityScaleOverLifespan.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mGravityScaleOverLifespan.ExternalCurve = nullptr;
	this->mMaxHomingAccelerationMagnitude = 0.0;
	this->mHomingStrengthOverLifespan.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mHomingStrengthOverLifespan.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mHomingStrengthOverLifespan.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mHomingStrengthOverLifespan.ExternalCurve = nullptr;
	this->mHomingStrengthOverDistanceToTarget.EditorCurveData.DefaultValue = 3.40282e+38;
	this->mHomingStrengthOverDistanceToTarget.EditorCurveData.PreInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mHomingStrengthOverDistanceToTarget.EditorCurveData.PostInfinityExtrap = ERichCurveExtrapolation::RCCE_Constant;
	this->mHomingStrengthOverDistanceToTarget.ExternalCurve = nullptr;
	this->mProjectileStartingHealth = 1.0;
	this->mProjectileCurrentHealth = 0.0;
	this->mImpactNoise = nullptr;
	this->mExplodeNoise = nullptr;
	this->mHasExploded = false;
	this->mInitialVelocity = FVector::ZeroVector;
	this->mTraveledDistance = 0.0;
	this->mCollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	this->mProjectileMovement = CreateDefaultSubobject<UFGProjectileMovementComponent>(TEXT("ProjectileComp"));
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = true;
	this->RootComponent = mCollisionComp;
}
void AFGProjectile::Tick(float DeltaSeconds){ }
void AFGProjectile::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGProjectile, mProjectileLifespan);
	DOREPLIFETIME(AFGProjectile, mProjectileStickspan);
	DOREPLIFETIME(AFGProjectile, mProjectileColor);
	DOREPLIFETIME(AFGProjectile, mProjectileScale);
	DOREPLIFETIME(AFGProjectile, mTargetActor);
	DOREPLIFETIME(AFGProjectile, mTargetLocation);
	DOREPLIFETIME(AFGProjectile, mIsHomingProjectile);
	DOREPLIFETIME(AFGProjectile, mSourceAmmoDescriptor);
	DOREPLIFETIME(AFGProjectile, mGravityScaleOverLifespan);
	DOREPLIFETIME(AFGProjectile, mMaxHomingAccelerationMagnitude);
	DOREPLIFETIME(AFGProjectile, mHomingStrengthOverLifespan);
	DOREPLIFETIME(AFGProjectile, mHomingStrengthOverDistanceToTarget);
	DOREPLIFETIME(AFGProjectile, mProjectileStartingHealth);
	DOREPLIFETIME(AFGProjectile, mHasExploded);
	DOREPLIFETIME(AFGProjectile, mInitialVelocity);
}
void AFGProjectile::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGProjectile::PostNetReceiveLocationAndRotation(){ }
bool AFGProjectile::ShouldSave_Implementation() const{ return bool(); }
bool AFGProjectile::NeedTransform_Implementation(){ return bool(); }
float AFGProjectile::TakeDamage(float DamageAmount, const  FDamageEvent& DamageEvent,  AController* EventInstigator,
							AActor* DamageCauser){ return float(); }
void AFGProjectile::LifeSpanExpired(){ }
void AFGProjectile::OnImpact_Native(const FHitResult& hitResult){ }
void AFGProjectile::Multicast_OnImpact_Implementation(const FHitResult& hitResult, bool wasAttached){ }
void AFGProjectile::OnBounce_Native(const FHitResult& hitResult, const FVector& hitVelocity){ }
void AFGProjectile::SetTargetLocation(const FVector& targetLocation){ }
void AFGProjectile::SetTargetActor(AActor* actor){ }
void AFGProjectile::SetIsHomingProjectile(bool isHoming){ }
void AFGProjectile::SetInitialVelocity(const FVector& inVelocity){ }
void AFGProjectile::TriggerSecondary(){ }
void AFGProjectile::TriggerSecondaryWithDelay(float delayTime){ }
void AFGProjectile::SetAndEnableRotation(float scale){ }
void AFGProjectile::Multicast_SpawnImpactDamageEffects_Implementation(FHitResult const& hitResult){ }
void AFGProjectile::Multicast_SpawnEndOfLifeDamageEffects_Implementation(FHitResult const& hitResult){ }
void AFGProjectile::SetInitialHealth(float newHealth){ }
void AFGProjectile::SetMaximumHomingAccelerationMagnitude(float newHomingAccelerationMagnitude){ }
void AFGProjectile::OnSpawnedAsClusterProjectile_Implementation(){ }
void AFGProjectile::DealEndOfLifeDamages(const FHitResult& impact){ }
void AFGProjectile::DealImpactDamages(const FHitResult& impact){ }
void AFGProjectile::DisableAndSetLifeSpan(){ }
void AFGProjectile::OnRep_Exploded(){ }
void AFGProjectile::OnExplode_Implementation(){ }
bool AFGProjectile::AttachProjectileToImpactActor(const FHitResult& impact){ return bool(); }
void AFGProjectile::OnRep_InitialVelocity(){ }
void AFGProjectile::OnRep_TargetActor(){ }
void AFGProjectile::OnRep_TargetLocation(){ }
void AFGProjectile::OnRep_IsHomingProjectile(){ }
void AFGProjectile::OnRep_MaxHomingAccelerationMagnitude(){ }
