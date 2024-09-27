#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmokeGrenade_Consumable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BaseGrenade_Consumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmokeGrenade_Consumable.BP_SmokeGrenade_Consumable_C
// 0x0010 (0x0520 - 0x0510)
class ABP_SmokeGrenade_Consumable_C final : public ABP_BaseGrenade_Consumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SmokeGrenade_Consumable_C;       // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SmokeGrenade_Consumable(int32 EntryPoint);
	void PlayMeshThrowAnimation();
	void PlayMeshThrowAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmokeGrenade_Consumable_C">();
	}
	static class ABP_SmokeGrenade_Consumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SmokeGrenade_Consumable_C>();
	}
};
static_assert(alignof(ABP_SmokeGrenade_Consumable_C) == 0x000008, "Wrong alignment on ABP_SmokeGrenade_Consumable_C");
static_assert(sizeof(ABP_SmokeGrenade_Consumable_C) == 0x000520, "Wrong size on ABP_SmokeGrenade_Consumable_C");
static_assert(offsetof(ABP_SmokeGrenade_Consumable_C, UberGraphFrame_BP_SmokeGrenade_Consumable_C) == 0x000510, "Member 'ABP_SmokeGrenade_Consumable_C::UberGraphFrame_BP_SmokeGrenade_Consumable_C' has a wrong offset!");
static_assert(offsetof(ABP_SmokeGrenade_Consumable_C, Mesh) == 0x000518, "Member 'ABP_SmokeGrenade_Consumable_C::Mesh' has a wrong offset!");

}

