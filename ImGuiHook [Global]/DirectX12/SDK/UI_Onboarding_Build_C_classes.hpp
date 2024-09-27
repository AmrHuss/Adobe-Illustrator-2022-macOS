#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_Build_C

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Onboarding_Build_C.UI_Onboarding_Build_C_C
// 0x0058 (0x0348 - 0x02F0)
class UUI_Onboarding_Build_C_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_2;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hint;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BlurMask_C*                         UI_BlurMask;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Close;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Previous;                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Onboarding_GuidePromo_C*            UI_Onboarding_GuidePromo;                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Pressed_Back;                                      // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_Onboarding_Build_C(int32 EntryPoint);
	void BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_Close_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Onboarding_Build_C_C">();
	}
	static class UUI_Onboarding_Build_C_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Onboarding_Build_C_C>();
	}
};
static_assert(alignof(UUI_Onboarding_Build_C_C) == 0x000008, "Wrong alignment on UUI_Onboarding_Build_C_C");
static_assert(sizeof(UUI_Onboarding_Build_C_C) == 0x000348, "Wrong size on UUI_Onboarding_Build_C_C");
static_assert(offsetof(UUI_Onboarding_Build_C_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_Onboarding_Build_C_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, Image_2) == 0x0002F8, "Member 'UUI_Onboarding_Build_C_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, Image_Arrow) == 0x000300, "Member 'UUI_Onboarding_Build_C_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, Image_Background) == 0x000308, "Member 'UUI_Onboarding_Build_C_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, Image_Hint) == 0x000310, "Member 'UUI_Onboarding_Build_C_C::Image_Hint' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, UI_BlurMask) == 0x000318, "Member 'UUI_Onboarding_Build_C_C::UI_BlurMask' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, UI_FlameSafezone) == 0x000320, "Member 'UUI_Onboarding_Build_C_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, UI_GamepadActionWidget_Close) == 0x000328, "Member 'UUI_Onboarding_Build_C_C::UI_GamepadActionWidget_Close' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, UI_GamepadActionWidget_Previous) == 0x000330, "Member 'UUI_Onboarding_Build_C_C::UI_GamepadActionWidget_Previous' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, UI_Onboarding_GuidePromo) == 0x000338, "Member 'UUI_Onboarding_Build_C_C::UI_Onboarding_GuidePromo' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_Build_C_C, Pressed_Back) == 0x000340, "Member 'UUI_Onboarding_Build_C_C::Pressed_Back' has a wrong offset!");

}

