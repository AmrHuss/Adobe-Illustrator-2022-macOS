#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Jammer

#include "Basic.hpp"

#include "BP_PlacableTrap_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TC_Jammer.BP_TC_Jammer_C
// 0x0000 (0x06F0 - 0x06F0)
class ABP_TC_Jammer_C final : public ABP_PlacableTrap_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TC_Jammer_C">();
	}
	static class ABP_TC_Jammer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TC_Jammer_C>();
	}
};
static_assert(alignof(ABP_TC_Jammer_C) == 0x000010, "Wrong alignment on ABP_TC_Jammer_C");
static_assert(sizeof(ABP_TC_Jammer_C) == 0x0006F0, "Wrong size on ABP_TC_Jammer_C");

}

