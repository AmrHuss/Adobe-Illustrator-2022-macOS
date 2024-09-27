#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootLocation_Wire

#include "Basic.hpp"

#include "BP_LootLocation_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LootLocation_Wire.BP_LootLocation_Wire_C
// 0x0008 (0x0240 - 0x0238)
class ABP_LootLocation_Wire_C final : public ABP_LootLocation_Base_C
{
public:
	class UStaticMeshComponent*                   GhostMech;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LootLocation_Wire_C">();
	}
	static class ABP_LootLocation_Wire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LootLocation_Wire_C>();
	}
};
static_assert(alignof(ABP_LootLocation_Wire_C) == 0x000008, "Wrong alignment on ABP_LootLocation_Wire_C");
static_assert(sizeof(ABP_LootLocation_Wire_C) == 0x000240, "Wrong size on ABP_LootLocation_Wire_C");
static_assert(offsetof(ABP_LootLocation_Wire_C, GhostMech) == 0x000238, "Member 'ABP_LootLocation_Wire_C::GhostMech' has a wrong offset!");

}

