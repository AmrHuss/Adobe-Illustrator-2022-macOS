#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_CraftingIntroduction

#include "Basic.hpp"

#include "UI_Onboarding_CraftingIntroduction_classes.hpp"
#include "UI_Onboarding_CraftingIntroduction_parameters.hpp"


namespace SDK
{

// Function UI_Onboarding_CraftingIntroduction.UI_Onboarding_CraftingIntroduction_C.ExecuteUbergraph_UI_Onboarding_CraftingIntroduction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_CraftingIntroduction_C::ExecuteUbergraph_UI_Onboarding_CraftingIntroduction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_CraftingIntroduction_C", "ExecuteUbergraph_UI_Onboarding_CraftingIntroduction");

	Params::UI_Onboarding_CraftingIntroduction_C_ExecuteUbergraph_UI_Onboarding_CraftingIntroduction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_CraftingIntroduction.UI_Onboarding_CraftingIntroduction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Onboarding_CraftingIntroduction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_CraftingIntroduction_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_CraftingIntroduction.UI_Onboarding_CraftingIntroduction_C.BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_4_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_CraftingIntroduction_C::BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_4_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_CraftingIntroduction_C", "BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_4_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_CraftingIntroduction.UI_Onboarding_CraftingIntroduction_C.BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_CraftingIntroduction_C::BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_CraftingIntroduction_C", "BndEvt__UI_GamepadActionWidget_Next_K2Node_ComponentBoundEvent_3_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

