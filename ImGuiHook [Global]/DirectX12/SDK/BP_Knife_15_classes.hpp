#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Knife_15

#include "Basic.hpp"

#include "BP_MeleeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Knife_15.BP_Knife_15_C
// 0x0000 (0x0BC0 - 0x0BC0)
class ABP_Knife_15_C final : public ABP_MeleeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Knife_15_C">();
	}
	static class ABP_Knife_15_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Knife_15_C>();
	}
};
static_assert(alignof(ABP_Knife_15_C) == 0x000010, "Wrong alignment on ABP_Knife_15_C");
static_assert(sizeof(ABP_Knife_15_C) == 0x000BC0, "Wrong size on ABP_Knife_15_C");

}

