#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Kitchen_Cabinet_01

#include "Basic.hpp"

#include "BP_Lootable_Furniture_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Kitchen_Cabinet_01.BP_Kitchen_Cabinet_01_C
// 0x0000 (0x03B0 - 0x03B0)
class ABP_Kitchen_Cabinet_01_C final : public ABP_Lootable_Furniture_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Kitchen_Cabinet_01_C">();
	}
	static class ABP_Kitchen_Cabinet_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Kitchen_Cabinet_01_C>();
	}
};
static_assert(alignof(ABP_Kitchen_Cabinet_01_C) == 0x000008, "Wrong alignment on ABP_Kitchen_Cabinet_01_C");
static_assert(sizeof(ABP_Kitchen_Cabinet_01_C) == 0x0003B0, "Wrong size on ABP_Kitchen_Cabinet_01_C");

}

