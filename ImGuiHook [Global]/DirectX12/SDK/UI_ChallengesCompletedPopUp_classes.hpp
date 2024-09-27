#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesCompletedPopUp

#include "Basic.hpp"

#include "E_ChallengeManagerState_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "FlameUI_structs.hpp"
#include "E_ChallengeSlotState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ChallengesCompletedPopUp.UI_ChallengesCompletedPopUp_C
// 0x0050 (0x02B0 - 0x0260)
class UUI_ChallengesCompletedPopUp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PopUp;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fade;                                              // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_InputActionWidget;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Anim_Timer;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Hide_Timer;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Shleter_Check_Timer;                               // 0x02A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         PopUp_Duration;                                    // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Completed_Challenges;                              // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ChallengesCompletedPopUp(int32 EntryPoint);
	void Enable_Action_Button(class AActor* OverlappedActor, class AActor* OtherActor);
	void Disable_Action_Button(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__UI_InputActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature();
	void Despawn();
	void Hide();
	void Show();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ChallengesCompletedPopUp_C">();
	}
	static class UUI_ChallengesCompletedPopUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ChallengesCompletedPopUp_C>();
	}
};
static_assert(alignof(UUI_ChallengesCompletedPopUp_C) == 0x000008, "Wrong alignment on UUI_ChallengesCompletedPopUp_C");
static_assert(sizeof(UUI_ChallengesCompletedPopUp_C) == 0x0002B0, "Wrong size on UUI_ChallengesCompletedPopUp_C");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, UberGraphFrame) == 0x000260, "Member 'UUI_ChallengesCompletedPopUp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, PopUp) == 0x000268, "Member 'UUI_ChallengesCompletedPopUp_C::PopUp' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, Fade) == 0x000270, "Member 'UUI_ChallengesCompletedPopUp_C::Fade' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, Text) == 0x000278, "Member 'UUI_ChallengesCompletedPopUp_C::Text' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, UI_FlameSafezone) == 0x000280, "Member 'UUI_ChallengesCompletedPopUp_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, UI_InputActionWidget) == 0x000288, "Member 'UUI_ChallengesCompletedPopUp_C::UI_InputActionWidget' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, Anim_Timer) == 0x000290, "Member 'UUI_ChallengesCompletedPopUp_C::Anim_Timer' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, Hide_Timer) == 0x000298, "Member 'UUI_ChallengesCompletedPopUp_C::Hide_Timer' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, Shleter_Check_Timer) == 0x0002A0, "Member 'UUI_ChallengesCompletedPopUp_C::Shleter_Check_Timer' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, PopUp_Duration) == 0x0002A8, "Member 'UUI_ChallengesCompletedPopUp_C::PopUp_Duration' has a wrong offset!");
static_assert(offsetof(UUI_ChallengesCompletedPopUp_C, Completed_Challenges) == 0x0002AC, "Member 'UUI_ChallengesCompletedPopUp_C::Completed_Challenges' has a wrong offset!");

}

