#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_CombinationChest_Location

#include "Basic.hpp"

#include "BP_ADM_ActorLocation_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_CombinationChest_Location.BP_ADM_CombinationChest_Location_C
// 0x0008 (0x0240 - 0x0238)
class ABP_ADM_CombinationChest_Location_C final : public ABP_ADM_ActorLocation_Base_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_CombinationChest_Location_C">();
	}
	static class ABP_ADM_CombinationChest_Location_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_CombinationChest_Location_C>();
	}
};
static_assert(alignof(ABP_ADM_CombinationChest_Location_C) == 0x000008, "Wrong alignment on ABP_ADM_CombinationChest_Location_C");
static_assert(sizeof(ABP_ADM_CombinationChest_Location_C) == 0x000240, "Wrong size on ABP_ADM_CombinationChest_Location_C");
static_assert(offsetof(ABP_ADM_CombinationChest_Location_C, StaticMesh) == 0x000238, "Member 'ABP_ADM_CombinationChest_Location_C::StaticMesh' has a wrong offset!");

}

