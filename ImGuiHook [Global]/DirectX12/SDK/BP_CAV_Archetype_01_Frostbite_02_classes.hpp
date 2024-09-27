#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CAV_Archetype_01_Frostbite_02

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CAV_Archetype_01_Frostbite_02.BP_CAV_Archetype_01_Frostbite_02_C
// 0x0008 (0x0440 - 0x0438)
class ABP_CAV_Archetype_01_Frostbite_02_C final : public ACustomizationVariant
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CAV_Archetype_01_Frostbite_02_C">();
	}
	static class ABP_CAV_Archetype_01_Frostbite_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CAV_Archetype_01_Frostbite_02_C>();
	}
};
static_assert(alignof(ABP_CAV_Archetype_01_Frostbite_02_C) == 0x000008, "Wrong alignment on ABP_CAV_Archetype_01_Frostbite_02_C");
static_assert(sizeof(ABP_CAV_Archetype_01_Frostbite_02_C) == 0x000440, "Wrong size on ABP_CAV_Archetype_01_Frostbite_02_C");
static_assert(offsetof(ABP_CAV_Archetype_01_Frostbite_02_C, DefaultSceneRoot) == 0x000438, "Member 'ABP_CAV_Archetype_01_Frostbite_02_C::DefaultSceneRoot' has a wrong offset!");

}

