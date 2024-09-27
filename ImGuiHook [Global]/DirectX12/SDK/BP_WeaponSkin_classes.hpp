#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponSkin

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponSkin.BP_WeaponSkin_C
// 0x0008 (0x04D8 - 0x04D0)
class ABP_WeaponSkin_C : public AWeaponSkin
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponSkin_C">();
	}
	static class ABP_WeaponSkin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeaponSkin_C>();
	}
};
static_assert(alignof(ABP_WeaponSkin_C) == 0x000008, "Wrong alignment on ABP_WeaponSkin_C");
static_assert(sizeof(ABP_WeaponSkin_C) == 0x0004D8, "Wrong size on ABP_WeaponSkin_C");
static_assert(offsetof(ABP_WeaponSkin_C, DefaultSceneRoot) == 0x0004D0, "Member 'ABP_WeaponSkin_C::DefaultSceneRoot' has a wrong offset!");

}

