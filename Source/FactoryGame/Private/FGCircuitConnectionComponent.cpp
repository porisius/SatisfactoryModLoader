// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCircuitConnectionComponent.h"

UFGCircuitConnectionComponent::UFGCircuitConnectionComponent() : Super() {
	this->mCircuitType = nullptr;
	this->mMaxNumConnectionLinks = 1;
	this->mIsHiddenConnection = false;
	this->mConnectionDistanceBias = 0.0;
	this->mNumWiresConnected = 0;
	this->mCircuitID = -1;
	this->bNetAddressable = true;
	this->SetIsReplicatedByDefault(true);
}
void UFGCircuitConnectionComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGCircuitConnectionComponent, mWires);
	DOREPLIFETIME(UFGCircuitConnectionComponent, mNumWiresConnected);
	DOREPLIFETIME(UFGCircuitConnectionComponent, mCircuitID);
}
void UFGCircuitConnectionComponent::OnComponentDestroyed(bool isDestroyingHierarchy){ }
void UFGCircuitConnectionComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
int32 UFGCircuitConnectionComponent::GetNumConnections() const{ return int32(); }
void UFGCircuitConnectionComponent::GetConnections(TArray<  UFGCircuitConnectionComponent* >& out_connections) const{ }
void UFGCircuitConnectionComponent::AddConnection( AFGBuildableWire* wire){ }
void UFGCircuitConnectionComponent::RemoveConnection( AFGBuildableWire* wire){ }
void UFGCircuitConnectionComponent::AddHiddenConnection( UFGCircuitConnectionComponent* other){ }
void UFGCircuitConnectionComponent::RemoveHiddenConnection( UFGCircuitConnectionComponent* other){ }
bool UFGCircuitConnectionComponent::HasHiddenConnection( UFGCircuitConnectionComponent* other){ return bool(); }
void UFGCircuitConnectionComponent::ClearHiddenConnections(){ }
void UFGCircuitConnectionComponent::SetCircuitID(int32 circuitID){ }
void UFGCircuitConnectionComponent::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
FString UFGCircuitConnectionComponent::GetDebugName() const{ return FString(); }
void UFGCircuitConnectionComponent::OnCircuitIDChanged(){ }
void UFGCircuitConnectionComponent::OnRep_CircuitIDChanged(){ }
