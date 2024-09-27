#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_GuidePromo

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Onboarding_GuidePromo.UI_Onboarding_GuidePromo_C
// 0x0028 (0x02E0 - 0x02B8)
class UUI_Onboarding_GuidePromo_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_0;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Options;                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Onboarding_GuidePromo(int32 EntryPoint);
	void BndEvt__UI_GamepadActionWidget_Options_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Onboarding_GuidePromo_C">();
	}
	static class UUI_Onboarding_GuidePromo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Onboarding_GuidePromo_C>();
	}
};
static_assert(alignof(UUI_Onboarding_GuidePromo_C) == 0x000008, "Wrong alignment on UUI_Onboarding_GuidePromo_C");
static_assert(sizeof(UUI_Onboarding_GuidePromo_C) == 0x0002E0, "Wrong size on UUI_Onboarding_GuidePromo_C");
static_assert(offsetof(UUI_Onboarding_GuidePromo_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Onboarding_GuidePromo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_GuidePromo_C, Image_0) == 0x0002C0, "Member 'UUI_Onboarding_GuidePromo_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_GuidePromo_C, Image_1) == 0x0002C8, "Member 'UUI_Onboarding_GuidePromo_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_GuidePromo_C, RichTextBlock_0) == 0x0002D0, "Member 'UUI_Onboarding_GuidePromo_C::RichTextBlock_0' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_GuidePromo_C, UI_GamepadActionWidget_Options) == 0x0002D8, "Member 'UUI_Onboarding_GuidePromo_C::UI_GamepadActionWidget_Options' has a wrong offset!");

}

