#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_RedChest_LootManager

#include "Basic.hpp"

#include "BP_LootEvents_LootManager_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_RedChest_LootManager.BP_ADM_RedChest_LootManager_C
// 0x0000 (0x0330 - 0x0330)
class ABP_ADM_RedChest_LootManager_C final : public ABP_LootEvents_LootManager_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_RedChest_LootManager_C">();
	}
	static class ABP_ADM_RedChest_LootManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_RedChest_LootManager_C>();
	}
};
static_assert(alignof(ABP_ADM_RedChest_LootManager_C) == 0x000008, "Wrong alignment on ABP_ADM_RedChest_LootManager_C");
static_assert(sizeof(ABP_ADM_RedChest_LootManager_C) == 0x000330, "Wrong size on ABP_ADM_RedChest_LootManager_C");

}

