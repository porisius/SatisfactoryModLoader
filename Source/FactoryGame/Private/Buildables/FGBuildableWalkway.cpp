// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableWalkway.h"
#include "Hologram/FGWalkwayHologram.h"

AFGBuildableWalkway::AFGBuildableWalkway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mSize = 200.0;
	this->mElevation = 0.0;
	this->mDisableSnapOn.Front = false;
	this->mDisableSnapOn.Right = false;
	this->mDisableSnapOn.Back = false;
	this->mDisableSnapOn.Left = false;
	this->mDisableSnapOn.Top = true;
	this->mDisableSnapOn.Bottom = true;
	this->mHologramClass = AFGWalkwayHologram::StaticClass();
	this->mManagedByLightweightBuildableSubsystem = true;
}
AFGBuildableWalkwayLightweight::AFGBuildableWalkwayLightweight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mMeshComponentProxy = nullptr;
}
