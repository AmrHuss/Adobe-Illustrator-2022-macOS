#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fishers_House_01

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fishers_House_01.BP_Fishers_House_01_C
// 0x0010 (0x0340 - 0x0330)
class ABP_Fishers_House_01_C final : public ABuilding
{
public:
	class UChildActorComponent*                   Roof2;                                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Roof;                                              // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fishers_House_01_C">();
	}
	static class ABP_Fishers_House_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fishers_House_01_C>();
	}
};
static_assert(alignof(ABP_Fishers_House_01_C) == 0x000008, "Wrong alignment on ABP_Fishers_House_01_C");
static_assert(sizeof(ABP_Fishers_House_01_C) == 0x000340, "Wrong size on ABP_Fishers_House_01_C");
static_assert(offsetof(ABP_Fishers_House_01_C, Roof2) == 0x000330, "Member 'ABP_Fishers_House_01_C::Roof2' has a wrong offset!");
static_assert(offsetof(ABP_Fishers_House_01_C, Roof) == 0x000338, "Member 'ABP_Fishers_House_01_C::Roof' has a wrong offset!");

}

