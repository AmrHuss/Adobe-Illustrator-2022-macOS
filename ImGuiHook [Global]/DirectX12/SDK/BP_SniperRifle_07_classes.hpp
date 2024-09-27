#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_07

#include "Basic.hpp"

#include "BP_PrimaryWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SniperRifle_07.BP_SniperRifle_07_C
// 0x0010 (0x23C0 - 0x23B0)
class ABP_SniperRifle_07_C final : public ABP_PrimaryWeapon_C
{
public:
	class UBP_WeaponGlint_Optics40_C*             BP_WeaponGlint_Optics40;                           // 0x23B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SniperRifle_07_C">();
	}
	static class ABP_SniperRifle_07_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SniperRifle_07_C>();
	}
};
static_assert(alignof(ABP_SniperRifle_07_C) == 0x000010, "Wrong alignment on ABP_SniperRifle_07_C");
static_assert(sizeof(ABP_SniperRifle_07_C) == 0x0023C0, "Wrong size on ABP_SniperRifle_07_C");
static_assert(offsetof(ABP_SniperRifle_07_C, BP_WeaponGlint_Optics40) == 0x0023B0, "Member 'ABP_SniperRifle_07_C::BP_WeaponGlint_Optics40' has a wrong offset!");

}

