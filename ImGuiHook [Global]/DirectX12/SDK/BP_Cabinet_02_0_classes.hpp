#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cabinet_02_0

#include "Basic.hpp"

#include "BP_Lootable_Furniture_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Cabinet_02.BP_Cabinet_02_C
// 0x0000 (0x03B0 - 0x03B0)
class BP_Cabinet_02_0::ABP_Cabinet_02_C final : public ABP_Lootable_Furniture_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass BP_Cabinet_02.BP_Cabinet_02_C", true, "BP_Cabinet_02_C">();
	}
	static class BP_Cabinet_02_0::ABP_Cabinet_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BP_Cabinet_02_0::ABP_Cabinet_02_C>();
	}
};
static_assert(alignof(BP_Cabinet_02_0::ABP_Cabinet_02_C) == 0x000008, "Wrong alignment on BP_Cabinet_02_0::ABP_Cabinet_02_C");
static_assert(sizeof(BP_Cabinet_02_0::ABP_Cabinet_02_C) == 0x0003B0, "Wrong size on BP_Cabinet_02_0::ABP_Cabinet_02_C");

}

