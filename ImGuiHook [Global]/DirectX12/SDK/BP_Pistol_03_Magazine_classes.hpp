#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pistol_03_Magazine

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pistol_03_Magazine.BP_Pistol_03_Magazine_C
// 0x0008 (0x0248 - 0x0240)
class ABP_Pistol_03_Magazine_C final : public AWeaponMagazine
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pistol_03_Magazine_C">();
	}
	static class ABP_Pistol_03_Magazine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pistol_03_Magazine_C>();
	}
};
static_assert(alignof(ABP_Pistol_03_Magazine_C) == 0x000008, "Wrong alignment on ABP_Pistol_03_Magazine_C");
static_assert(sizeof(ABP_Pistol_03_Magazine_C) == 0x000248, "Wrong size on ABP_Pistol_03_Magazine_C");
static_assert(offsetof(ABP_Pistol_03_Magazine_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_Pistol_03_Magazine_C::DefaultSceneRoot' has a wrong offset!");

}

