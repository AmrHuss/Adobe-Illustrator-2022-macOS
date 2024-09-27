#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LargeCableCoil_01

#include "Basic.hpp"

#include "BP_StaticProp_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LargeCableCoil_01.BP_LargeCableCoil_01_C
// 0x0010 (0x0240 - 0x0230)
class ABP_LargeCableCoil_01_C final : public ABP_StaticProp_Base_C
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LargeCableCoil_01_C">();
	}
	static class ABP_LargeCableCoil_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LargeCableCoil_01_C>();
	}
};
static_assert(alignof(ABP_LargeCableCoil_01_C) == 0x000008, "Wrong alignment on ABP_LargeCableCoil_01_C");
static_assert(sizeof(ABP_LargeCableCoil_01_C) == 0x000240, "Wrong size on ABP_LargeCableCoil_01_C");
static_assert(offsetof(ABP_LargeCableCoil_01_C, StaticMesh) == 0x000230, "Member 'ABP_LargeCableCoil_01_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_LargeCableCoil_01_C, Obstacle) == 0x000238, "Member 'ABP_LargeCableCoil_01_C::Obstacle' has a wrong offset!");

}

