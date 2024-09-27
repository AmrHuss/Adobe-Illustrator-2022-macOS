#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HC_CaffeineTablets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AssortedConsumable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HC_CaffeineTablets.BP_HC_CaffeineTablets_C
// 0x0028 (0x0488 - 0x0460)
class ABP_HC_CaffeineTablets_C final : public ABP_AssortedConsumable_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HC_CaffeineTablets_C;            // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Expected;                                          // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RemainingHeal;                                     // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         ConsumablesUI_ToHide;                              // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_HC_CaffeineTablets(int32 EntryPoint);
	void OnUsedImplementable(class AHumanCharacter* ParentCharacter);
	void PlayStaminaEffect(class AHumanCharacter* Character_0, class UStaminaComponent** Stamina_Component);

	bool CanBeUsedImpl() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HC_CaffeineTablets_C">();
	}
	static class ABP_HC_CaffeineTablets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HC_CaffeineTablets_C>();
	}
};
static_assert(alignof(ABP_HC_CaffeineTablets_C) == 0x000008, "Wrong alignment on ABP_HC_CaffeineTablets_C");
static_assert(sizeof(ABP_HC_CaffeineTablets_C) == 0x000488, "Wrong size on ABP_HC_CaffeineTablets_C");
static_assert(offsetof(ABP_HC_CaffeineTablets_C, UberGraphFrame_BP_HC_CaffeineTablets_C) == 0x000460, "Member 'ABP_HC_CaffeineTablets_C::UberGraphFrame_BP_HC_CaffeineTablets_C' has a wrong offset!");
static_assert(offsetof(ABP_HC_CaffeineTablets_C, SkeletalMesh) == 0x000468, "Member 'ABP_HC_CaffeineTablets_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_HC_CaffeineTablets_C, Expected) == 0x000470, "Member 'ABP_HC_CaffeineTablets_C::Expected' has a wrong offset!");
static_assert(offsetof(ABP_HC_CaffeineTablets_C, RemainingHeal) == 0x000474, "Member 'ABP_HC_CaffeineTablets_C::RemainingHeal' has a wrong offset!");
static_assert(offsetof(ABP_HC_CaffeineTablets_C, ConsumablesUI_ToHide) == 0x000478, "Member 'ABP_HC_CaffeineTablets_C::ConsumablesUI_ToHide' has a wrong offset!");

}

