#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_07

#include "Basic.hpp"

#include "BP_SideArmWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shotgun_07.BP_Shotgun_07_C
// 0x0000 (0x2370 - 0x2370)
class ABP_Shotgun_07_C final : public ABP_SideArmWeapon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shotgun_07_C">();
	}
	static class ABP_Shotgun_07_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Shotgun_07_C>();
	}
};
static_assert(alignof(ABP_Shotgun_07_C) == 0x000010, "Wrong alignment on ABP_Shotgun_07_C");
static_assert(sizeof(ABP_Shotgun_07_C) == 0x002370, "Wrong size on ABP_Shotgun_07_C");

}

