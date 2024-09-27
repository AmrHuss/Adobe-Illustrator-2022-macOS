#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoosterTicket_Insurance

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BoosterTicket_Insurance.BP_BoosterTicket_Insurance_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_BoosterTicket_Insurance_C final : public ACurrencyBoosterTicketInsurance
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoosterTicket_Insurance_C">();
	}
	static class ABP_BoosterTicket_Insurance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BoosterTicket_Insurance_C>();
	}
};
static_assert(alignof(ABP_BoosterTicket_Insurance_C) == 0x000008, "Wrong alignment on ABP_BoosterTicket_Insurance_C");
static_assert(sizeof(ABP_BoosterTicket_Insurance_C) == 0x0003B0, "Wrong size on ABP_BoosterTicket_Insurance_C");
static_assert(offsetof(ABP_BoosterTicket_Insurance_C, DefaultSceneRoot) == 0x0003A8, "Member 'ABP_BoosterTicket_Insurance_C::DefaultSceneRoot' has a wrong offset!");

}

