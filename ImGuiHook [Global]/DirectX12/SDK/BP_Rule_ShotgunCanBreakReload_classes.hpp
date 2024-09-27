#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Rule_ShotgunCanBreakReload

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Rule_ShotgunCanBreakReload.BP_Rule_ShotgunCanBreakReload_C
// 0x0008 (0x0270 - 0x0268)
class ABP_Rule_ShotgunCanBreakReload_C final : public ACustomInputRule
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	EInputRule CustomReactOnInput(const class AHumanPlayerController* TargetController) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Rule_ShotgunCanBreakReload_C">();
	}
	static class ABP_Rule_ShotgunCanBreakReload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Rule_ShotgunCanBreakReload_C>();
	}
};
static_assert(alignof(ABP_Rule_ShotgunCanBreakReload_C) == 0x000008, "Wrong alignment on ABP_Rule_ShotgunCanBreakReload_C");
static_assert(sizeof(ABP_Rule_ShotgunCanBreakReload_C) == 0x000270, "Wrong size on ABP_Rule_ShotgunCanBreakReload_C");
static_assert(offsetof(ABP_Rule_ShotgunCanBreakReload_C, DefaultSceneRoot) == 0x000268, "Member 'ABP_Rule_ShotgunCanBreakReload_C::DefaultSceneRoot' has a wrong offset!");

}

