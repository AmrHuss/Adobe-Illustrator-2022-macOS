#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Archetype

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Archetype.BP_Archetype_C
// 0x0008 (0x0490 - 0x0488)
class ABP_Archetype_C : public ACustomizationArchetype
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Archetype_C">();
	}
	static class ABP_Archetype_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Archetype_C>();
	}
};
static_assert(alignof(ABP_Archetype_C) == 0x000008, "Wrong alignment on ABP_Archetype_C");
static_assert(sizeof(ABP_Archetype_C) == 0x000490, "Wrong size on ABP_Archetype_C");
static_assert(offsetof(ABP_Archetype_C, DefaultSceneRoot) == 0x000488, "Member 'ABP_Archetype_C::DefaultSceneRoot' has a wrong offset!");

}

