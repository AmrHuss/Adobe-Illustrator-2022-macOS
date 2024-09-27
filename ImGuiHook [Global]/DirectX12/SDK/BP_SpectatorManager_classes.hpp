#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectatorManager

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpectatorManager.BP_SpectatorManager_C
// 0x0008 (0x0358 - 0x0350)
class ABP_SpectatorManager_C : public ASpectatorManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpectatorManager_C">();
	}
	static class ABP_SpectatorManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpectatorManager_C>();
	}
};
static_assert(alignof(ABP_SpectatorManager_C) == 0x000008, "Wrong alignment on ABP_SpectatorManager_C");
static_assert(sizeof(ABP_SpectatorManager_C) == 0x000358, "Wrong size on ABP_SpectatorManager_C");
static_assert(offsetof(ABP_SpectatorManager_C, DefaultSceneRoot) == 0x000350, "Member 'ABP_SpectatorManager_C::DefaultSceneRoot' has a wrong offset!");

}

