#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InputActionWidget

#include "Basic.hpp"

#include "UI_InputActionWidget_classes.hpp"
#include "UI_InputActionWidget_parameters.hpp"


namespace SDK
{

// Function UI_InputActionWidget.UI_InputActionWidget_C.ExecuteUbergraph_UI_InputActionWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InputActionWidget_C::ExecuteUbergraph_UI_InputActionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "ExecuteUbergraph_UI_InputActionWidget");

	Params::UI_InputActionWidget_C_ExecuteUbergraph_UI_InputActionWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InputActionWidget.UI_InputActionWidget_C.InputModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputMode                              InputMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InputActionWidget_C::InputModeChanged(int32 PlayerIndex, EInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "InputModeChanged");

	Params::UI_InputActionWidget_C_InputModeChanged Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.InputMode = InputMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InputActionWidget.UI_InputActionWidget_C.IconChanged
// (BlueprintCallable, BlueprintEvent)

void UUI_InputActionWidget_C::IconChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "IconChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_InputActionWidget.UI_InputActionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InputActionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_InputActionWidget.UI_InputActionWidget_C.SetWindowsIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_InputActionWidget_C::SetWindowsIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "SetWindowsIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_InputActionWidget.UI_InputActionWidget_C.SetHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHovered_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_InputActionWidget_C::SetHovered(bool IsHovered_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "SetHovered");

	Params::UI_InputActionWidget_C_SetHovered Parms{};

	Parms.IsHovered_0 = IsHovered_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InputActionWidget.UI_InputActionWidget_C.IsInputActionGamepad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InputAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsGamepad                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_InputActionWidget_C::IsInputActionGamepad(const class FString& InputAction, bool* IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InputActionWidget_C", "IsInputActionGamepad");

	Params::UI_InputActionWidget_C_IsInputActionGamepad Parms{};

	Parms.InputAction = std::move(InputAction);

	UObject::ProcessEvent(Func, &Parms);

	if (IsGamepad != nullptr)
		*IsGamepad = Parms.IsGamepad;
}

}

