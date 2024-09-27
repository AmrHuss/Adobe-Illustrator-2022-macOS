#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_Base

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_Actions_structs.hpp"
#include "E_ParticleTriggerConditions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Door_Base.BP_Door_Base_C
// 0x0020 (0x0390 - 0x0370)
class ABP_Door_Base_C : public ADoor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 Replacement_Barring_Object;                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             OpenSound;                                         // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CloseSound;                                        // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Door_Base(int32 EntryPoint);
	void OnDoorClose();
	void OnDoorOpen();
	void TriggerMeshSpecificParticle(E_ParticleTriggerConditions TriggerType, bool HandleReplicationYourself);
	void UpdateAnimsAfterCustomizationChanges();
	void PutMapToRightHand();
	void ClearRightHand();
	void PutKitchenTimerToRightHand();
	void AnimHitReaction(class FName BoneName, const struct FVector& HitNormal, float Impact);
	void AnimInteraction(E_Actions Action, bool Interrupt);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Door_Base_C">();
	}
	static class ABP_Door_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Door_Base_C>();
	}
};
static_assert(alignof(ABP_Door_Base_C) == 0x000008, "Wrong alignment on ABP_Door_Base_C");
static_assert(sizeof(ABP_Door_Base_C) == 0x000390, "Wrong size on ABP_Door_Base_C");
static_assert(offsetof(ABP_Door_Base_C, UberGraphFrame) == 0x000370, "Member 'ABP_Door_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Door_Base_C, Replacement_Barring_Object) == 0x000378, "Member 'ABP_Door_Base_C::Replacement_Barring_Object' has a wrong offset!");
static_assert(offsetof(ABP_Door_Base_C, OpenSound) == 0x000380, "Member 'ABP_Door_Base_C::OpenSound' has a wrong offset!");
static_assert(offsetof(ABP_Door_Base_C, CloseSound) == 0x000388, "Member 'ABP_Door_Base_C::CloseSound' has a wrong offset!");

}

