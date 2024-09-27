#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Challenge_GrenadeHitComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Challenge_GrenadeHitComponent.BP_Challenge_GrenadeHitComponent_C
// 0x0010 (0x00C0 - 0x00B0)
class UBP_Challenge_GrenadeHitComponent_C final : public UActorComponent
{
public:
	bool                                          Was_already_triggered;                             // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_C*                      Triggering_character;                              // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Challenge_GrenadeHitComponent_C">();
	}
	static class UBP_Challenge_GrenadeHitComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Challenge_GrenadeHitComponent_C>();
	}
};
static_assert(alignof(UBP_Challenge_GrenadeHitComponent_C) == 0x000008, "Wrong alignment on UBP_Challenge_GrenadeHitComponent_C");
static_assert(sizeof(UBP_Challenge_GrenadeHitComponent_C) == 0x0000C0, "Wrong size on UBP_Challenge_GrenadeHitComponent_C");
static_assert(offsetof(UBP_Challenge_GrenadeHitComponent_C, Was_already_triggered) == 0x0000B0, "Member 'UBP_Challenge_GrenadeHitComponent_C::Was_already_triggered' has a wrong offset!");
static_assert(offsetof(UBP_Challenge_GrenadeHitComponent_C, Triggering_character) == 0x0000B8, "Member 'UBP_Challenge_GrenadeHitComponent_C::Triggering_character' has a wrong offset!");

}

