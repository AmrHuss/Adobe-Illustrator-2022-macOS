#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesMsgCompleted

#include "Basic.hpp"

#include "UI_ChallengesMsgCompleted_classes.hpp"
#include "UI_ChallengesMsgCompleted_parameters.hpp"


namespace SDK
{

// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.ExecuteUbergraph_UI_ChallengesMsgCompleted
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChallengesMsgCompleted_C::ExecuteUbergraph_UI_ChallengesMsgCompleted(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesMsgCompleted_C", "ExecuteUbergraph_UI_ChallengesMsgCompleted");

	Params::UI_ChallengesMsgCompleted_C_ExecuteUbergraph_UI_ChallengesMsgCompleted Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.Scroll List
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChallengesMsgCompleted_C::Scroll_List(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesMsgCompleted_C", "Scroll List");

	Params::UI_ChallengesMsgCompleted_C_Scroll_List Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.BndEvt__ActionA_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ChallengesMsgCompleted_C::BndEvt__ActionA_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesMsgCompleted_C", "BndEvt__ActionA_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ChallengesMsgCompleted_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesMsgCompleted_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChallengesMsgCompleted.UI_ChallengesMsgCompleted_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_ChallengesMsgCompleted_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesMsgCompleted_C", "GetWidgetToFocus");

	Params::UI_ChallengesMsgCompleted_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

