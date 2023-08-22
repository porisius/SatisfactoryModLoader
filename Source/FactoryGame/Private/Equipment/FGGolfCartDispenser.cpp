// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGGolfCartDispenser.h"

AFGGolfCartDispenser::AFGGolfCartDispenser() : Super() {
	this->mPlaceDistanceMax = 1000.0;
	this->mValidPlacementMaterial = nullptr;
	this->mInvalidPlacementMaterial = nullptr;
	this->mArmAnimation = EArmEquipment::AE_PortableMiner;
	this->mDefaultEquipmentActions = 1;
}
void AFGGolfCartDispenser::BeginPlay(){ }
void AFGGolfCartDispenser::SetMaterial( UMaterialInterface* material){ }
void AFGGolfCartDispenser::HandleDefaultEquipmentActionEvent(EDefaultEquipmentAction action, EDefaultEquipmentActionEvent actionEvent){ }
