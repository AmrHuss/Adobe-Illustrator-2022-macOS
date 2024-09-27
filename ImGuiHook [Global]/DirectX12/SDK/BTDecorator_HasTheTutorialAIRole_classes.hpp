#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_HasTheTutorialAIRole

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_HasTheTutorialAIRole.BTDecorator_HasTheTutorialAIRole_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTDecorator_HasTheTutorialAIRole_C final : public UBTDecorator_BlueprintBase
{
public:
	ETutorialAIRole                               AIRole;                                            // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_HasTheTutorialAIRole_C">();
	}
	static class UBTDecorator_HasTheTutorialAIRole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_HasTheTutorialAIRole_C>();
	}
};
static_assert(alignof(UBTDecorator_HasTheTutorialAIRole_C) == 0x000008, "Wrong alignment on UBTDecorator_HasTheTutorialAIRole_C");
static_assert(sizeof(UBTDecorator_HasTheTutorialAIRole_C) == 0x0000A8, "Wrong size on UBTDecorator_HasTheTutorialAIRole_C");
static_assert(offsetof(UBTDecorator_HasTheTutorialAIRole_C, AIRole) == 0x0000A0, "Member 'UBTDecorator_HasTheTutorialAIRole_C::AIRole' has a wrong offset!");

}

