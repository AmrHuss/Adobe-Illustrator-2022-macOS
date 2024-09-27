#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SMG_11

#include "Basic.hpp"

#include "BP_PrimaryWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SMG_11.BP_SMG_11_C
// 0x0000 (0x23B0 - 0x23B0)
class ABP_SMG_11_C final : public ABP_PrimaryWeapon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SMG_11_C">();
	}
	static class ABP_SMG_11_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SMG_11_C>();
	}
};
static_assert(alignof(ABP_SMG_11_C) == 0x000010, "Wrong alignment on ABP_SMG_11_C");
static_assert(sizeof(ABP_SMG_11_C) == 0x0023B0, "Wrong size on ABP_SMG_11_C");

}

