#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SRChallenge_ResultScreen_Failed

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SRChallenge_ResultScreen_Failed.UI_SRChallenge_ResultScreen_Failed_C
// 0x0090 (0x0368 - 0x02D8)
class UUI_SRChallenge_ResultScreen_Failed_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonA;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonB;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeName;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FailedTitle;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FailureText;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_173;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   FailingReason;                                     // 0x0338(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UBP_ShootingChallenges_GMComponent_C*   Shooting_Challenges_Component;                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ResultScreenClosed;                                // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ResultScreenClosed__DelegateSignature(bool RetryChallenge);
	void ExecuteUbergraph_UI_SRChallenge_ResultScreen_Failed(int32 EntryPoint);
	void Construct();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_GamepadActionWidget_381_K2Node_ComponentBoundEvent_66_OnActionPressedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SRChallenge_ResultScreen_Failed_C">();
	}
	static class UUI_SRChallenge_ResultScreen_Failed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SRChallenge_ResultScreen_Failed_C>();
	}
};
static_assert(alignof(UUI_SRChallenge_ResultScreen_Failed_C) == 0x000008, "Wrong alignment on UUI_SRChallenge_ResultScreen_Failed_C");
static_assert(sizeof(UUI_SRChallenge_ResultScreen_Failed_C) == 0x000368, "Wrong size on UUI_SRChallenge_ResultScreen_Failed_C");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, FadeIn) == 0x0002E0, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, Background) == 0x0002E8, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, ButtonA) == 0x0002F0, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::ButtonA' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, ButtonB) == 0x0002F8, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::ButtonB' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, ChallengeName) == 0x000300, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::ChallengeName' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, FailedTitle) == 0x000308, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::FailedTitle' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, FailureText) == 0x000310, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::FailureText' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, Image_1) == 0x000318, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, Image_65) == 0x000320, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::Image_65' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, Image_173) == 0x000328, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::Image_173' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, UI_FlameSafezone) == 0x000330, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, FailingReason) == 0x000338, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::FailingReason' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, Shooting_Challenges_Component) == 0x000350, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::Shooting_Challenges_Component' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Failed_C, ResultScreenClosed) == 0x000358, "Member 'UUI_SRChallenge_ResultScreen_Failed_C::ResultScreenClosed' has a wrong offset!");

}

