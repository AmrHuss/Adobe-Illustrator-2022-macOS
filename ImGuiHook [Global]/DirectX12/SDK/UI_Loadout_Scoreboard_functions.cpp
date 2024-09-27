#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Loadout_Scoreboard

#include "Basic.hpp"

#include "UI_Loadout_Scoreboard_classes.hpp"
#include "UI_Loadout_Scoreboard_parameters.hpp"


namespace SDK
{

// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.ExecuteUbergraph_UI_Loadout_Scoreboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Loadout_Scoreboard_C::ExecuteUbergraph_UI_Loadout_Scoreboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "ExecuteUbergraph_UI_Loadout_Scoreboard");

	Params::UI_Loadout_Scoreboard_C_ExecuteUbergraph_UI_Loadout_Scoreboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.DisableFocusItemInfoPanel
// (BlueprintCallable, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::DisableFocusItemInfoPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "DisableFocusItemInfoPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Loadout_Scoreboard_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "OnMouseLeave");

	Params::UI_Loadout_Scoreboard_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.OnViewUpdate
// (Event, Public, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::OnViewUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "OnViewUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.OnChildFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Loadout_Scoreboard_C::OnChildFocusReceived(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "OnChildFocusReceived");

	Params::UI_Loadout_Scoreboard_C_OnChildFocusReceived Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_32_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Loadout_Scoreboard_C::BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_32_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_32_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Loadout_Scoreboard_C::BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Loadout_Scoreboard_C::BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "BndEvt__ActionDestroy_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.OnGameMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::OnGameMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "OnGameMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.OnCancelPressed
// (BlueprintCallable, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::OnCancelPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "OnCancelPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.BndEvt__ActionClose_K2Node_ComponentBoundEvent_17_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Loadout_Scoreboard_C::BndEvt__ActionClose_K2Node_ComponentBoundEvent_17_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "BndEvt__ActionClose_K2Node_ComponentBoundEvent_17_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.Update Scoreboard
// (BlueprintCallable, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::Update_Scoreboard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "Update Scoreboard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.Close
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Loadout_Scoreboard_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.GetWidgetToFocus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_Loadout_Scoreboard_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "GetWidgetToFocus");

	Params::UI_Loadout_Scoreboard_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Loadout_Scoreboard.UI_Loadout_Scoreboard_C.IsDestroyAllowed
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_Loadout_Scoreboard_C::IsDestroyAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Loadout_Scoreboard_C", "IsDestroyAllowed");

	Params::UI_Loadout_Scoreboard_C_IsDestroyAllowed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

