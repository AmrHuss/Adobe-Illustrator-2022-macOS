#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_BattlePass_B

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Onboarding_BattlePass_B.UI_Onboarding_BattlePass_B_C
// 0x0050 (0x0340 - 0x02F0)
class UUI_Onboarding_BattlePass_B_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_2;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hint;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BlurMask_C*                         UI_BlurMask;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Next;                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_Previous;                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WasTriggered;                                      // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_Onboarding_BattlePass_B(int32 EntryPoint);
	void BndEvt__UI_GamepadActionWidget_Previous_K2Node_ComponentBoundEvent_5_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Onboarding_BattlePass_B_C">();
	}
	static class UUI_Onboarding_BattlePass_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Onboarding_BattlePass_B_C>();
	}
};
static_assert(alignof(UUI_Onboarding_BattlePass_B_C) == 0x000008, "Wrong alignment on UUI_Onboarding_BattlePass_B_C");
static_assert(sizeof(UUI_Onboarding_BattlePass_B_C) == 0x000340, "Wrong size on UUI_Onboarding_BattlePass_B_C");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_Onboarding_BattlePass_B_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, Image_2) == 0x0002F8, "Member 'UUI_Onboarding_BattlePass_B_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, Image_Arrow) == 0x000300, "Member 'UUI_Onboarding_BattlePass_B_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, Image_Background) == 0x000308, "Member 'UUI_Onboarding_BattlePass_B_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, Image_Hint) == 0x000310, "Member 'UUI_Onboarding_BattlePass_B_C::Image_Hint' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, UI_BlurMask) == 0x000318, "Member 'UUI_Onboarding_BattlePass_B_C::UI_BlurMask' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, UI_FlameSafezone) == 0x000320, "Member 'UUI_Onboarding_BattlePass_B_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, UI_GamepadActionWidget_Next) == 0x000328, "Member 'UUI_Onboarding_BattlePass_B_C::UI_GamepadActionWidget_Next' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, UI_GamepadActionWidget_Previous) == 0x000330, "Member 'UUI_Onboarding_BattlePass_B_C::UI_GamepadActionWidget_Previous' has a wrong offset!");
static_assert(offsetof(UUI_Onboarding_BattlePass_B_C, WasTriggered) == 0x000338, "Member 'UUI_Onboarding_BattlePass_B_C::WasTriggered' has a wrong offset!");

}

