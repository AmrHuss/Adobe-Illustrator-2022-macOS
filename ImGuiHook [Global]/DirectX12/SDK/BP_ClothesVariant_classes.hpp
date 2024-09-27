#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClothesVariant

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ClothesVariant.BP_ClothesVariant_C
// 0x0008 (0x0440 - 0x0438)
class ABP_ClothesVariant_C : public ACustomizationVariant
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ClothesVariant_C">();
	}
	static class ABP_ClothesVariant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ClothesVariant_C>();
	}
};
static_assert(alignof(ABP_ClothesVariant_C) == 0x000008, "Wrong alignment on ABP_ClothesVariant_C");
static_assert(sizeof(ABP_ClothesVariant_C) == 0x000440, "Wrong size on ABP_ClothesVariant_C");
static_assert(offsetof(ABP_ClothesVariant_C, DefaultSceneRoot) == 0x000438, "Member 'ABP_ClothesVariant_C::DefaultSceneRoot' has a wrong offset!");

}

