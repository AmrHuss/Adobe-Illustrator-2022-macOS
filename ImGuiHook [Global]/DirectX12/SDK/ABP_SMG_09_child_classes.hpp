#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SMG_09_child

#include "Basic.hpp"

#include "Firearm_ABP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_SMG_09_child.ABP_SMG_09_child_C
// 0x0000 (0x16D0 - 0x16D0)
class UABP_SMG_09_child_C final : public UFirearm_ABP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_SMG_09_child_C">();
	}
	static class UABP_SMG_09_child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_SMG_09_child_C>();
	}
};
static_assert(alignof(UABP_SMG_09_child_C) == 0x000010, "Wrong alignment on UABP_SMG_09_child_C");
static_assert(sizeof(UABP_SMG_09_child_C) == 0x0016D0, "Wrong size on UABP_SMG_09_child_C");

}

