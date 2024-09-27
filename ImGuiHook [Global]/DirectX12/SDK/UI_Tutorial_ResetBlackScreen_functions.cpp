#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Tutorial_ResetBlackScreen

#include "Basic.hpp"

#include "UI_Tutorial_ResetBlackScreen_classes.hpp"
#include "UI_Tutorial_ResetBlackScreen_parameters.hpp"


namespace SDK
{

// Function UI_Tutorial_ResetBlackScreen.UI_Tutorial_ResetBlackScreen_C.ExecuteUbergraph_UI_Tutorial_ResetBlackScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tutorial_ResetBlackScreen_C::ExecuteUbergraph_UI_Tutorial_ResetBlackScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Tutorial_ResetBlackScreen_C", "ExecuteUbergraph_UI_Tutorial_ResetBlackScreen");

	Params::UI_Tutorial_ResetBlackScreen_C_ExecuteUbergraph_UI_Tutorial_ResetBlackScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Tutorial_ResetBlackScreen.UI_Tutorial_ResetBlackScreen_C.Auto close
// (BlueprintCallable, BlueprintEvent)

void UUI_Tutorial_ResetBlackScreen_C::Auto_close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Tutorial_ResetBlackScreen_C", "Auto close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Tutorial_ResetBlackScreen.UI_Tutorial_ResetBlackScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Tutorial_ResetBlackScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Tutorial_ResetBlackScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Tutorial_ResetBlackScreen.UI_Tutorial_ResetBlackScreen_C.Initialize reset black screen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EUI_Tutorial_ResetReason                Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time_to_autoclose_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tutorial_ResetBlackScreen_C::Initialize_reset_black_screen(EUI_Tutorial_ResetReason Index_0, float Time_to_autoclose_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Tutorial_ResetBlackScreen_C", "Initialize reset black screen");

	Params::UI_Tutorial_ResetBlackScreen_C_Initialize_reset_black_screen Parms{};

	Parms.Index_0 = Index_0;
	Parms.Time_to_autoclose_0 = Time_to_autoclose_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

