#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CurrencyMaterial

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CurrencyMaterial.BP_CurrencyMaterial_C
// 0x0008 (0x03A0 - 0x0398)
class ABP_CurrencyMaterial_C final : public ACurrencyMaterial
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CurrencyMaterial_C">();
	}
	static class ABP_CurrencyMaterial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CurrencyMaterial_C>();
	}
};
static_assert(alignof(ABP_CurrencyMaterial_C) == 0x000008, "Wrong alignment on ABP_CurrencyMaterial_C");
static_assert(sizeof(ABP_CurrencyMaterial_C) == 0x0003A0, "Wrong size on ABP_CurrencyMaterial_C");
static_assert(offsetof(ABP_CurrencyMaterial_C, DefaultSceneRoot) == 0x000398, "Member 'ABP_CurrencyMaterial_C::DefaultSceneRoot' has a wrong offset!");

}

