#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_ShouldTutorialAIMove

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Flame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C
// 0x0030 (0x00D0 - 0x00A0)
class UBTDecorator_ShouldTutorialAIMove_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 EnemyCharacter;                                    // 0x00A0(0x0028)(Edit, BlueprintVisible)
	float                                         MinDistance;                                       // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDistance;                                       // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ShortDistance(float DistanceSquared, bool* ShouldMove);
	void MediumDistance(bool* ShouldMove);
	void FarDistance(class ABP_TutorialAI_Character_C* AI, const struct FVector& EnemyLocation, bool* ShouldMove);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_ShouldTutorialAIMove_C">();
	}
	static class UBTDecorator_ShouldTutorialAIMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ShouldTutorialAIMove_C>();
	}
};
static_assert(alignof(UBTDecorator_ShouldTutorialAIMove_C) == 0x000008, "Wrong alignment on UBTDecorator_ShouldTutorialAIMove_C");
static_assert(sizeof(UBTDecorator_ShouldTutorialAIMove_C) == 0x0000D0, "Wrong size on UBTDecorator_ShouldTutorialAIMove_C");
static_assert(offsetof(UBTDecorator_ShouldTutorialAIMove_C, EnemyCharacter) == 0x0000A0, "Member 'UBTDecorator_ShouldTutorialAIMove_C::EnemyCharacter' has a wrong offset!");
static_assert(offsetof(UBTDecorator_ShouldTutorialAIMove_C, MinDistance) == 0x0000C8, "Member 'UBTDecorator_ShouldTutorialAIMove_C::MinDistance' has a wrong offset!");
static_assert(offsetof(UBTDecorator_ShouldTutorialAIMove_C, MaxDistance) == 0x0000CC, "Member 'UBTDecorator_ShouldTutorialAIMove_C::MaxDistance' has a wrong offset!");

}

