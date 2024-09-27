#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fishbox_02

#include "Basic.hpp"

#include "BP_Container_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fishbox_02.BP_Fishbox_02_C
// 0x0008 (0x0258 - 0x0250)
class ABP_Fishbox_02_C final : public ABP_Container_Base_C
{
public:
	class UObstacleComponent*                     Obstacle;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fishbox_02_C">();
	}
	static class ABP_Fishbox_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fishbox_02_C>();
	}
};
static_assert(alignof(ABP_Fishbox_02_C) == 0x000008, "Wrong alignment on ABP_Fishbox_02_C");
static_assert(sizeof(ABP_Fishbox_02_C) == 0x000258, "Wrong size on ABP_Fishbox_02_C");
static_assert(offsetof(ABP_Fishbox_02_C, Obstacle) == 0x000250, "Member 'ABP_Fishbox_02_C::Obstacle' has a wrong offset!");

}

