#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LinkToStash

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LinkToStash.BP_LinkToStash_C
// 0x0010 (0x0240 - 0x0230)
class ABP_LinkToStash_C : public ALinkToStash
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractionItemComponent_C*         BP_InteractionItemComponent;                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LinkToStash(int32 EntryPoint);
	void Event_OnboardingSequenceFinished();
	void Event_OnboardingSequenceStarted();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LinkToStash_C">();
	}
	static class ABP_LinkToStash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LinkToStash_C>();
	}
};
static_assert(alignof(ABP_LinkToStash_C) == 0x000008, "Wrong alignment on ABP_LinkToStash_C");
static_assert(sizeof(ABP_LinkToStash_C) == 0x000240, "Wrong size on ABP_LinkToStash_C");
static_assert(offsetof(ABP_LinkToStash_C, UberGraphFrame) == 0x000230, "Member 'ABP_LinkToStash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LinkToStash_C, BP_InteractionItemComponent) == 0x000238, "Member 'ABP_LinkToStash_C::BP_InteractionItemComponent' has a wrong offset!");

}

