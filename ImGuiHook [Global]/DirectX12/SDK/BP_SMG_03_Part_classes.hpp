#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SMG_03_Part

#include "Basic.hpp"

#include "BP_WeaponPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SMG_03_Part.BP_SMG_03_Part_C
// 0x0000 (0x03B8 - 0x03B8)
class ABP_SMG_03_Part_C final : public ABP_WeaponPart_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SMG_03_Part_C">();
	}
	static class ABP_SMG_03_Part_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SMG_03_Part_C>();
	}
};
static_assert(alignof(ABP_SMG_03_Part_C) == 0x000008, "Wrong alignment on ABP_SMG_03_Part_C");
static_assert(sizeof(ABP_SMG_03_Part_C) == 0x0003B8, "Wrong size on ABP_SMG_03_Part_C");

}

