#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_05_Part

#include "Basic.hpp"

#include "BP_WeaponPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Shotgun_05_Part.BP_Shotgun_05_Part_C
// 0x0000 (0x03B8 - 0x03B8)
class ABP_Shotgun_05_Part_C final : public ABP_WeaponPart_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shotgun_05_Part_C">();
	}
	static class ABP_Shotgun_05_Part_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Shotgun_05_Part_C>();
	}
};
static_assert(alignof(ABP_Shotgun_05_Part_C) == 0x000008, "Wrong alignment on ABP_Shotgun_05_Part_C");
static_assert(sizeof(ABP_Shotgun_05_Part_C) == 0x0003B8, "Wrong size on ABP_Shotgun_05_Part_C");

}

