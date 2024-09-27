#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_CustomItemInteraction

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_CustomItemInteraction.I_CustomItemInteraction_C
// 0x0000 (0x0028 - 0x0028)
class II_CustomItemInteraction_C final : public IInterface
{
public:
	void ShowMarker(class AActor* InteractionActor, const struct FVector& MarkerPosition);
	void UpdateMarker(const struct FVector& MarkerPosition);
	void HideMarker();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_CustomItemInteraction_C">();
	}
	static class II_CustomItemInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_CustomItemInteraction_C>();
	}
};
static_assert(alignof(II_CustomItemInteraction_C) == 0x000008, "Wrong alignment on II_CustomItemInteraction_C");
static_assert(sizeof(II_CustomItemInteraction_C) == 0x000028, "Wrong size on II_CustomItemInteraction_C");

}

