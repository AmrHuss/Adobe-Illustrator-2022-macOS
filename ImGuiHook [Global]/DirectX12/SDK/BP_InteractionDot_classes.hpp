#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractionDot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractionDot.BP_InteractionDot_C
// 0x0010 (0x05C0 - 0x05B0)
class UBP_InteractionDot_C final : public UWidgetComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_InteractionDot(int32 EntryPoint);
	void Update_Location(const struct FVector& New_Location);
	void DestroySelf();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractionDot_C">();
	}
	static class UBP_InteractionDot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractionDot_C>();
	}
};
static_assert(alignof(UBP_InteractionDot_C) == 0x000010, "Wrong alignment on UBP_InteractionDot_C");
static_assert(sizeof(UBP_InteractionDot_C) == 0x0005C0, "Wrong size on UBP_InteractionDot_C");
static_assert(offsetof(UBP_InteractionDot_C, UberGraphFrame) == 0x0005B0, "Member 'UBP_InteractionDot_C::UberGraphFrame' has a wrong offset!");

}

