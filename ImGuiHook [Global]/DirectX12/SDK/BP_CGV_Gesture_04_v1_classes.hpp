#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CGV_Gesture_04_v1

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CGV_Gesture_04_v1.BP_CGV_Gesture_04_v1_C
// 0x0008 (0x0460 - 0x0458)
class ABP_CGV_Gesture_04_v1_C final : public ACustomizationGestureVariant
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CGV_Gesture_04_v1_C">();
	}
	static class ABP_CGV_Gesture_04_v1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CGV_Gesture_04_v1_C>();
	}
};
static_assert(alignof(ABP_CGV_Gesture_04_v1_C) == 0x000008, "Wrong alignment on ABP_CGV_Gesture_04_v1_C");
static_assert(sizeof(ABP_CGV_Gesture_04_v1_C) == 0x000460, "Wrong size on ABP_CGV_Gesture_04_v1_C");
static_assert(offsetof(ABP_CGV_Gesture_04_v1_C, DefaultSceneRoot) == 0x000458, "Member 'ABP_CGV_Gesture_04_v1_C::DefaultSceneRoot' has a wrong offset!");

}

