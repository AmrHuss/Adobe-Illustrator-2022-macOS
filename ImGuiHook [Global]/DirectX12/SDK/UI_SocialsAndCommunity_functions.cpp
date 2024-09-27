#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SocialsAndCommunity

#include "Basic.hpp"

#include "UI_SocialsAndCommunity_classes.hpp"
#include "UI_SocialsAndCommunity_parameters.hpp"


namespace SDK
{

// Function UI_SocialsAndCommunity.UI_SocialsAndCommunity_C.ExecuteUbergraph_UI_SocialsAndCommunity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SocialsAndCommunity_C::ExecuteUbergraph_UI_SocialsAndCommunity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SocialsAndCommunity_C", "ExecuteUbergraph_UI_SocialsAndCommunity");

	Params::UI_SocialsAndCommunity_C_ExecuteUbergraph_UI_SocialsAndCommunity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SocialsAndCommunity.UI_SocialsAndCommunity_C.BndEvt__UI_SocialsAndCommunity_ActionClose_1_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SocialsAndCommunity_C::BndEvt__UI_SocialsAndCommunity_ActionClose_1_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SocialsAndCommunity_C", "BndEvt__UI_SocialsAndCommunity_ActionClose_1_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SocialsAndCommunity.UI_SocialsAndCommunity_C.BndEvt__UI_SocialsAndCommunity_ActionClose_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SocialsAndCommunity_C::BndEvt__UI_SocialsAndCommunity_ActionClose_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SocialsAndCommunity_C", "BndEvt__UI_SocialsAndCommunity_ActionClose_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SocialsAndCommunity.UI_SocialsAndCommunity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SocialsAndCommunity_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SocialsAndCommunity_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

