#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClothesSlotHeadgearBottom

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ClothesSlotHeadgearBottom.BP_ClothesSlotHeadgearBottom_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_ClothesSlotHeadgearBottom_C final : public AClothesSlotHeadgearBottom
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ClothesSlotHeadgearBottom_C">();
	}
	static class ABP_ClothesSlotHeadgearBottom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ClothesSlotHeadgearBottom_C>();
	}
};
static_assert(alignof(ABP_ClothesSlotHeadgearBottom_C) == 0x000008, "Wrong alignment on ABP_ClothesSlotHeadgearBottom_C");
static_assert(sizeof(ABP_ClothesSlotHeadgearBottom_C) == 0x0003B0, "Wrong size on ABP_ClothesSlotHeadgearBottom_C");
static_assert(offsetof(ABP_ClothesSlotHeadgearBottom_C, DefaultSceneRoot) == 0x0003A8, "Member 'ABP_ClothesSlotHeadgearBottom_C::DefaultSceneRoot' has a wrong offset!");

}

