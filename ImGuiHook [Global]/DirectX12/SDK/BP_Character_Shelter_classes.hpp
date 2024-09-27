#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Shelter

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Character_Script_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Shelter.BP_Character_Shelter_C
// 0x0020 (0x11E0 - 0x11C0)
class ABP_Character_Shelter_C final : public ABP_Character_Script_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_Shelter_C;             // 0x11C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CHC_PP_Shelter_Switch_C*            BP_CHC_PP_Shelter_Switch;                          // 0x11C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInShootingRange;                                // 0x11D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Character_Shelter(int32 EntryPoint);
	void CheckIfPlayerIsInShootingRange();
	void OnStreamingLevelLoaded();
	void OnArrivedInShelter();
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_1_InventoryFromCloudLoadedAuthority__DelegateSignature(class AHumanCharacter* Sender, class UInventoryComponent* Inventory_0);
	void VerifyAllowFire();
	void EnqueueInputActionAfterCurrentAction(const class FString& ActionName);
	void BP_Character_Shelter_AutoGenFunc(const class AItem* Item, const class UItemState* State, EStatePhase Phase);
	void RemoveCassettePreviewMesh(class UStaticMeshComponent* Mesh_0);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Shelter_C">();
	}
	static class ABP_Character_Shelter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Shelter_C>();
	}
};
static_assert(alignof(ABP_Character_Shelter_C) == 0x000010, "Wrong alignment on ABP_Character_Shelter_C");
static_assert(sizeof(ABP_Character_Shelter_C) == 0x0011E0, "Wrong size on ABP_Character_Shelter_C");
static_assert(offsetof(ABP_Character_Shelter_C, UberGraphFrame_BP_Character_Shelter_C) == 0x0011C0, "Member 'ABP_Character_Shelter_C::UberGraphFrame_BP_Character_Shelter_C' has a wrong offset!");
static_assert(offsetof(ABP_Character_Shelter_C, BP_CHC_PP_Shelter_Switch) == 0x0011C8, "Member 'ABP_Character_Shelter_C::BP_CHC_PP_Shelter_Switch' has a wrong offset!");
static_assert(offsetof(ABP_Character_Shelter_C, bIsInShootingRange) == 0x0011D0, "Member 'ABP_Character_Shelter_C::bIsInShootingRange' has a wrong offset!");

}

