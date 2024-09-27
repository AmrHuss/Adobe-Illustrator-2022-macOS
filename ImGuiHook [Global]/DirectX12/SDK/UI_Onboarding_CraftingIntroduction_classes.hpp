#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_CraftingIntroduction

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Onboarding_CraftingIntroduction.UI_Onboarding_CraftingIntroduction_C
// 0x0028 (0x0318 - 0x02F0)
class UUI_Onboarding_CraftingIntroduction_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Background;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hint;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Next;                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Onboarding_CraftingIntroduction(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_4_OnActionHoldEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Onboarding_CraftingIntroduction_C">();
	}
	static class UUI_Onboarding_CraftingIntroduction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Onboarding_CraftingIntroduction_C>();
	}
};
static_assert(alignof(UUI_Onboarding_CraftingIntroduction_C) == 0x000008, "Wrong alignment on UUI_Onboarding_CraftingIntroduction_C");
static_assert(sizeof(UUI_Onboarding_CraftingIntroduction_C) == 0x000318, "Wrong size on UUI_Onboarding_CraftingIntroduction_C");
static_assert(offsetof(UUI_Onboarding_CraftingIntroduction_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_Onboarding_CraftingIntroduction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_CraftingIntroduction_C, Image_Background) == 0x0002F8, "Member 'UUI_Onboarding_CraftingIntroduction_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_CraftingIntroduction_C, Image_Hint) == 0x000300, "Member 'UUI_Onboarding_CraftingIntroduction_C::Image_Hint' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_CraftingIntroduction_C, UI_FlameSafezone) == 0x000308, "Member 'UUI_Onboarding_CraftingIntroduction_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_CraftingIntroduction_C, UI_GamepadActionWidget_Next) == 0x000310, "Member 'UUI_Onboarding_CraftingIntroduction_C::UI_GamepadActionWidget_Next' has a wrong offset!");

}

