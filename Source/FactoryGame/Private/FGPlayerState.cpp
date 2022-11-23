// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPlayerState.h"

FHotbar::FHotbar( AFGPlayerState* owningState, const FHotbar& hotbar){ }
FHotbar::FHotbar(TArray<  UFGHotbarShortcut* > hotbarShortcuts){ }
FPresetHotbar::FPresetHotbar( AFGPlayerState* owningState, const FPresetHotbar& presetHotbar){ }
AFGPlayerState::AFGPlayerState() : Super() {
	this->mSlotNum = -1;
	this->mPlayerColorData.PingColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mPlayerColorData.NametagColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mPlayerRules.CreatureHostilityMode = EPlayerHostilityMode::PHM_Default;
	this->mOwnedPawn = nullptr;
	this->mHasReceivedInitialItems = false;
	this->mIsServerAdmin = false;
	this->mCustomColorData.PrimaryColor = FLinearColor(0.0, 0.0, 0.0, 1.0);
	this->mCustomColorData.SecondaryColor = FLinearColor(0.0, 0.0, 0.0, 1.0);
	this->mCustomColorData.Metallic = 0.0;
	this->mCustomColorData.Roughness = 0.0;
	this->mShoppingListSettings.PublicTodoListVisibilty = false;
	this->mShoppingListSettings.PrivateTodoListVisibilty = false;
	this->mShoppingListSettings.RecipeListVisibilty = false;
	this->mShoppingListSettings.Size = 0.0;
	this->mTutorialSubsystem = nullptr;
	this->mTutorialSubsystemClass = nullptr;
	this->mNumArmSlots = 1;
	this->mOnlyShowAffordableRecipes = false;
	this->mLastSelectedResourceSinkShopCategory = nullptr;
	this->mPrivateTodoList = TEXT("");
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->NetUpdateFrequency = 10.0;
}
void AFGPlayerState::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPlayerState, mHotbars);
	DOREPLIFETIME(AFGPlayerState, mPresetHotbars);
	DOREPLIFETIME(AFGPlayerState, mCurrentHotbarIndex);
	DOREPLIFETIME(AFGPlayerState, mBuildableSubCategoryDefaultMatDesc);
	DOREPLIFETIME(AFGPlayerState, mMaterialSubCategoryDefaultMatDesc);
	DOREPLIFETIME(AFGPlayerState, mNewRecipes);
	DOREPLIFETIME(AFGPlayerState, mSlotNum);
	DOREPLIFETIME(AFGPlayerState, mPlayerColorData);
	DOREPLIFETIME(AFGPlayerState, mPlayerRules);
	DOREPLIFETIME(AFGPlayerState, mIsServerAdmin);
	DOREPLIFETIME(AFGPlayerState, mVisitedAreas);
	DOREPLIFETIME(AFGPlayerState, mCustomColorData);
	DOREPLIFETIME(AFGPlayerState, mShoppingListSettings);
	DOREPLIFETIME(AFGPlayerState, mRememberedFirstTimeEquipmentClasses);
	DOREPLIFETIME(AFGPlayerState, mNumArmSlots);
	DOREPLIFETIME(AFGPlayerState, mOnlyShowAffordableRecipes);
	DOREPLIFETIME(AFGPlayerState, mCollapsedItemCategories);
	DOREPLIFETIME(AFGPlayerState, mFilteredOutMapTypes);
	DOREPLIFETIME(AFGPlayerState, mFilteredOutCompassTypes);
	DOREPLIFETIME(AFGPlayerState, mCollapsedMapCategories);
	DOREPLIFETIME(AFGPlayerState, mNumObservedInventorySlots);
	DOREPLIFETIME(AFGPlayerState, mFavoriteShopSchematics);
	DOREPLIFETIME(AFGPlayerState, mPrivateTodoList);
	DOREPLIFETIME(AFGPlayerState, mShoppingListBlueprints);
	DOREPLIFETIME(AFGPlayerState, mShoppingListRecipes);
	DOREPLIFETIME(AFGPlayerState, mOpenedWidgetsPersistent);
}
bool AFGPlayerState::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
void AFGPlayerState::BeginPlay(){ }
void AFGPlayerState::CopyProperties(APlayerState* playerState){ }
void AFGPlayerState::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGPlayerState::NeedTransform_Implementation(){ return bool(); }
bool AFGPlayerState::ShouldSave_Implementation() const{ return bool(); }
void AFGPlayerState::SetPlayerColorData(FPlayerColorData slotData){ }
void AFGPlayerState::SetCreatureHostility(EPlayerHostilityMode hostility){ }
void AFGPlayerState::Server_SetCreatureHostility_Implementation(EPlayerHostilityMode hostility){ }
FString AFGPlayerState::GetUserName(){ return FString(); }
FString AFGPlayerState::GetUserID(){ return FString(); }
FUniqueNetIdRepl AFGPlayerState::GetUniqeNetId(){ return FUniqueNetIdRepl(); }
FString AFGPlayerState::GetSteamID(){ return FString(); }
void AFGPlayerState::CreateTutorialSubsystem(){ }
TArray< TSubclassOf< class UFGMessageBase > > AFGPlayerState::GetAllMessages(EMessageType messageType){ return TArray<TSubclassOf<class UFGMessageBase> >(); }
void AFGPlayerState::ReadMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::AddMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::RemoveMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::SetupDefaultShortcuts(){ }
UFGHotbarShortcut* AFGPlayerState::CreateShortcut(TSubclassOf<  UFGHotbarShortcut > shortcutClass){ return nullptr; }
void AFGPlayerState::GetCurrentShortcuts(TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
UFGHotbarShortcut* AFGPlayerState::GetShortcutFromCurrentHotbar(int32 shortcutIndex){ return nullptr; }
void AFGPlayerState::GetPresetShortcuts(int32 presetHotbarIndex, TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
void AFGPlayerState::GetAllPresetHotbars(TArray<FPresetHotbar>& out_presetHotbars){ }
void AFGPlayerState::SetHotbarIndex(int32 val){ }
bool AFGPlayerState::CreatePresetFromCurrentHotbar(const FText& presetName, int32 iconIndex){ return bool(); }
bool AFGPlayerState::CanCreateNewPresetHotbar() const{ return bool(); }
bool AFGPlayerState::CopyCurrentHotbarToPresetHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerState::ChangeNameOfPresetHotbar(int32 presetHotbarIndex, const FText& newName){ }
void AFGPlayerState::ChangeIconIndexOfPresetHotbar(int32 presetHotbarIndex, int32 iconIndex){ }
bool AFGPlayerState::RemovePresetHotbar(int32 presetHotbarIndex){ return bool(); }
bool AFGPlayerState::CopyPresetHotbarToCurrentHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerState::SetRecipeShortcutOnIndex(TSubclassOf<  UFGRecipe > recipe, int32 onIndex, int32 onHotbarIndex){ }
void AFGPlayerState::SetCustomizationShortcutOnIndex(TSubclassOf<  UFGCustomizationRecipe > customizationRecipe, int32 onIndex){ }
void AFGPlayerState::SetEmoteShortcutOnIndex(TSubclassOf<  UFGEmote > emote, int32 onIndex){ }
void AFGPlayerState::SetBlueprintShortcutOnIndex(const FString& blueprintName, int32 onIndex){ }
bool AFGPlayerState::GetAndSetFirstTimeEquipped( AFGEquipment* equipment){ return bool(); }
AFGPlayerController* AFGPlayerState::GetOwningController() const{ return nullptr; }
UFGGameUI* AFGPlayerState::GetGameUI() const{ return nullptr; }
void AFGPlayerState::AddNewRecipe(TSubclassOf< UFGRecipe > recipe){ }
void AFGPlayerState::GetNewRecipes(TArray<TSubclassOf<class UFGRecipe>>& out_newRecipes) const{ }
void AFGPlayerState::RemoveRecipe(TSubclassOf< UFGRecipe > recipe){ }
void AFGPlayerState::Server_RemoveRecipe_Implementation(TSubclassOf< UFGRecipe > recipe){ }
bool AFGPlayerState::Server_RemoveRecipe_Validate(TSubclassOf< UFGRecipe > recipe){ return bool(); }
void AFGPlayerState::AddArmSlots(int32 slotsToAdd){ }
void AFGPlayerState::SetOnlyShowAffordableRecipes(bool enabled){ }
void AFGPlayerState::Server_SetOnlyShowAffordableRecipes_Implementation(bool enabled){ }
bool AFGPlayerState::Server_SetOnlyShowAffordableRecipes_Validate(bool enabled){ return bool(); }
void AFGPlayerState::SetItemCategoryCollapsed(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ }
void AFGPlayerState::Server_SetItemCategoryCollapsed_Implementation(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ }
bool AFGPlayerState::Server_SetItemCategoryCollapsed_Validate(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ return bool(); }
void AFGPlayerState::SetMapFilter(ERepresentationType representationType, bool visible){ }
void AFGPlayerState::Server_SetMapFilter_Implementation(ERepresentationType representationType, bool visible){ }
bool AFGPlayerState::Server_SetMapFilter_Validate(ERepresentationType representationType, bool visible){ return bool(); }
void AFGPlayerState::SetCompassFilter(ERepresentationType representationType, bool visible){ }
void AFGPlayerState::Server_SetCompassFilter_Implementation(ERepresentationType representationType, bool visible){ }
bool AFGPlayerState::Server_SetCompassFilter_Validate(ERepresentationType representationType, bool visible){ return bool(); }
void AFGPlayerState::SetMapCategoryCollapsed(ERepresentationType mapCategory, bool collapsed){ }
void AFGPlayerState::Server_SetMapCategoryCollapsed_Implementation(ERepresentationType mapCategory, bool collapsed){ }
void AFGPlayerState::UpdateOwningPawnActorRepresentation() const{ }
void AFGPlayerState::DumpHotbars(){ }
void AFGPlayerState::UpdateNumObservedInventorySlots(){ }
bool AFGPlayerState::IsShopFavorite(TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
TArray<TSubclassOf<class UFGSchematic>> AFGPlayerState::GetShopFavorites() const{ return TArray<TSubclassOf<class UFGSchematic>>(); }
void AFGPlayerState::SaveAsShopFavorite(TSubclassOf<class UFGSchematic> schematic){ }
void AFGPlayerState::RemoveAsShopFavorite(TSubclassOf<class UFGSchematic> schematic){ }
void AFGPlayerState::RemoveAllShopFavorites(){ }
TMap< TSubclassOf< class UFGSchematic >, int32 > AFGPlayerState::GetShoppingCart() const{ return TMap<TSubclassOf<class UFGSchematic>,int32>(); }
void AFGPlayerState::SetShoppingCart(TMap< TSubclassOf<  UFGSchematic >, int32 > shoppingCart){ }
void AFGPlayerState::SetPlayerCustomizationSlotData(FFactoryCustomizationColorSlot customColorData){ }
void AFGPlayerState::Server_SetPlayerCustomizationSlotData_Implementation(FFactoryCustomizationColorSlot customColorData){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > AFGPlayerState::GetSavedMatDescForBuildableCategory(TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGCategory > subCategory){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void AFGPlayerState::SetSavedMatDescForBuildableCategory(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc, bool skipRep){ }
void AFGPlayerState::Server_SetSavedMatDescForBuildableCategory_Implementation(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > AFGPlayerState::GetSavedMatDescForMaterialCategory(TSubclassOf<  UFGCategory > category){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void AFGPlayerState::SetSavedMatDescForMaterialCategory(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc, bool updateHotbarShortcuts){ }
void AFGPlayerState::Server_SetSavedMatDescForMaterialCategory_Implementation(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
void AFGPlayerState::UpdateHotbarShortcutsForMaterialDesc(TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > newDefaultMaterialDesc){ }
void AFGPlayerState::SetPublicTodoList(const FString& newTodoList){ }
void AFGPlayerState::Server_SetPublicTodoList_Implementation(const FString& newTodoList){ }
void AFGPlayerState::Client_UpdatePublicTodoList_Implementation(const FString& updatedTodoList){ }
void AFGPlayerState::SetPrivateTodoList(const FString& newTodoList){ }
void AFGPlayerState::Server_SetPrivateTodoList_Implementation(const FString& newTodoList){ }
FString AFGPlayerState::GetPublicTodoList() const{ return FString(); }
void AFGPlayerState::SetShoppingListSettings(const FShoppingListSettings& newShoppingListSettings){ }
void AFGPlayerState::Server_SetShoppingListSettings_Implementation(const FShoppingListSettings& newShoppingListSettings){ }
void AFGPlayerState::CopyFactoryClipboard(UObject* object){ }
void AFGPlayerState::PasteFactoryClipboard(UObject* object){ }
bool AFGPlayerState::GetWidgetHasBeenOpened(TSubclassOf<  UUserWidget > widget, bool& openedThisSession){ return bool(); }
void AFGPlayerState::SetWidgetHasBeenOpened(TSubclassOf<  UUserWidget > widget, bool save){ }
void AFGPlayerState::Server_SetWidgetHasBeenOpened_Implementation(TSubclassOf<  UUserWidget > widget){ }
void AFGPlayerState::AddBlueprintToShoppingList( UFGBlueprintDescriptor* blueprintDescriptor, int32 amount){ }
void AFGPlayerState::Server_AddBlueprintToShoppingList_Implementation(const FString& blueprintName, int32 amount){ }
void AFGPlayerState::RemoveBlueprintFromShoppingList( UFGBlueprintDescriptor* blueprintDescriptor, int32 amount){ }
void AFGPlayerState::Server_RemoveBlueprintFromShoppingList_Implementation(const FString& blueprintName, int32 amount){ }
void AFGPlayerState::AddRecipeClassToShoppingList(TSubclassOf<  UFGRecipe > recipeClass, int32 amount){ }
void AFGPlayerState::Server_AddRecipeClassToShoppingList_Implementation(TSubclassOf<  UFGRecipe > recipeClass, int32 amount){ }
void AFGPlayerState::RemoveRecipeClassFromShoppingList(TSubclassOf<  UFGRecipe > recipeClass, int32 amount){ }
void AFGPlayerState::Server_RemoveClassRecipeFromShoppingList_Implementation(TSubclassOf<  UFGRecipe > recipeClass, int32 amount){ }
void AFGPlayerState::EmptyShoppingList(){ }
void AFGPlayerState::Server_EmptyShoppingList_Implementation(){ }
TMap< FString, int32 > AFGPlayerState::GetShoppingListItems(){ return TMap<FString,int32>(); }
TArray< FItemAmount > AFGPlayerState::GetShoppingListCost() const{ return TArray<FItemAmount>(); }
void AFGPlayerState::Client_OnRecipeConstructed_Implementation(TSubclassOf<  UFGRecipe > recipe, int32 numConstructed){ }
void AFGPlayerState::Native_OnRecipeConstructed(TSubclassOf<  UFGRecipe > recipe, int32 numConstructed){ }
void AFGPlayerState::Native_OnBlueprintConstructed(const FString& blueprintName, int32 numConstructed){ }
bool AFGPlayerState::IsInPlayerArray(){ return bool(); }
void AFGPlayerState::Native_OnFactoryClipboardCopied(UObject* object,  UFGFactoryClipboardSettings* factoryClipboard){ }
void AFGPlayerState::Native_OnFactoryClipboardPasted(UObject* object,  UFGFactoryClipboardSettings* factoryClipboard){ }
void AFGPlayerState::OnRep_HotbarShortcuts(){ }
void AFGPlayerState::OnRep_CurrentHotbarIndex(){ }
void AFGPlayerState::OnRep_PlayerColorData(){ }
void AFGPlayerState::OnRep_PlayerRules(){ }
void AFGPlayerState::OnRep_ShoppingListBlueprints(){ }
void AFGPlayerState::OnRep_ShoppingListRecipes(){ }
void AFGPlayerState::Server_UpdateNumObservedInventorySlots_Implementation(){ }
bool AFGPlayerState::Server_UpdateNumObservedInventorySlots_Validate(){ return bool(); }
void AFGPlayerState::Native_OnPlayerColorDataUpdated(){ }
void AFGPlayerState::SetupPlayerRules(){ }
void AFGPlayerState::PushRulesToGameModesSubssytem(){ }
void AFGPlayerState::OnCreatureHostilityModeUpdated(FString strId, FVariant value){ }
void AFGPlayerState::Internal_RemoveBlueprintFromShoppingList(const FString& blueprintName, int32 amount){ }
