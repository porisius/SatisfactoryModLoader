// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableWidgetSign.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AFGBuildableWidgetSign::AFGBuildableWidgetSign() : Super() {
	this->mSignProxyPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProxyMesh"));
	this->mSignTypeDescriptor = nullptr;
	this->mPrefabLayout = nullptr;
	this->mGainSignificanceDistance = 10000.0;
	this->mWidgetMaterial = nullptr;
	this->mEmissiveOnlySignMaterial = nullptr;
	this->mDefaultSignMaterial = nullptr;
	this->mWidgetClass = nullptr;
	this->mActivePrefabLayout = nullptr;
	this->mForegroundColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mBackgroundColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mAuxilaryColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mEmissive = 1.0;
	this->mGlossiness = 0.0;
	this->mDataVersion = 0;
	this->mAllowColoring = false;
	this->mSignProxyPlane->SetupAttachment(RootComponent);
}
void AFGBuildableWidgetSign::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableWidgetSign, mDataVersion);
}
void AFGBuildableWidgetSign::BeginPlay(){ }
void AFGBuildableWidgetSign::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableWidgetSign::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableWidgetSign::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableWidgetSign::OnConstruction(const FTransform& transform){ }
AFGBuildable* AFGBuildableWidgetSign::GetBuildable_Implementation(){ return nullptr; }
TSubclassOf< UFGSignTypeDescriptor > AFGBuildableWidgetSign::GetSignTypeDescriptor_Implementation(){ return TSubclassOf<UFGSignTypeDescriptor>(); }
FVector2D AFGBuildableWidgetSign::GetSignDimensions_Implementation(){ return FVector2D(); }
void AFGBuildableWidgetSign::GainedSignificance_Implementation(){ }
void AFGBuildableWidgetSign::LostSignificance_Implementation(){ }
UFGFactoryClipboardSettings* AFGBuildableWidgetSign::CopySettings_Implementation(){ return nullptr; }
bool AFGBuildableWidgetSign::PasteSettings_Implementation(UFGFactoryClipboardSettings* settings){ return bool(); }
void AFGBuildableWidgetSign::OnBuildEffectFinished(){ }
void AFGBuildableWidgetSign::SetPrefabSignData(FPrefabSignData& signData){ }
void AFGBuildableWidgetSign::GetSignPrefabData(FPrefabSignData& out_signData){ }
void AFGBuildableWidgetSign::UpdateSignElements(FPrefabSignData& prefabSignData){ }
float AFGBuildableWidgetSign::GetAdjustedEmissiveValue(int32 Level) const{ return float(); }
void AFGBuildableWidgetSign::OnRep_SignDataDirty(){ }
uint32 AFGBuildableWidgetSign::GenerateGUID(FPrefabSignData& signData){ return uint32(); }
void AFGBuildableWidgetSign::ConvertToEmissiveOnly(FPrefabSignData& prefabSignData) const{ }
void AFGBuildableWidgetSign::SetupMaterialInstanceForProxyPlane(UMaterialInstanceDynamic* Instance, UTextureRenderTarget2D* RenderTarget){ }
