#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Warehouse_02

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Warehouse_02.BP_Warehouse_02_C
// 0x0028 (0x0358 - 0x0330)
class ABP_Warehouse_02_C final : public ABuilding
{
public:
	class UObstacleComponent*                     Obstacle;                                          // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_big_01;                       // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_small;                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Warehouse_03_door_big;                          // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Warehouse_02_C">();
	}
	static class ABP_Warehouse_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Warehouse_02_C>();
	}
};
static_assert(alignof(ABP_Warehouse_02_C) == 0x000008, "Wrong alignment on ABP_Warehouse_02_C");
static_assert(sizeof(ABP_Warehouse_02_C) == 0x000358, "Wrong size on ABP_Warehouse_02_C");
static_assert(offsetof(ABP_Warehouse_02_C, Obstacle) == 0x000330, "Member 'ABP_Warehouse_02_C::Obstacle' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_02_C, StaticMesh) == 0x000338, "Member 'ABP_Warehouse_02_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_02_C, SM_Warehouse_03_door_big_01) == 0x000340, "Member 'ABP_Warehouse_02_C::SM_Warehouse_03_door_big_01' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_02_C, SM_Warehouse_03_door_small) == 0x000348, "Member 'ABP_Warehouse_02_C::SM_Warehouse_03_door_small' has a wrong offset!");
static_assert(offsetof(ABP_Warehouse_02_C, SM_Warehouse_03_door_big) == 0x000350, "Member 'ABP_Warehouse_02_C::SM_Warehouse_03_door_big' has a wrong offset!");

}

