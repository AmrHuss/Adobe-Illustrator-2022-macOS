#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_CrownsShop_HC_Pack

#include "Basic.hpp"

#include "UI_Button_CrownsShop_HC_Pack_classes.hpp"
#include "UI_Button_CrownsShop_HC_Pack_parameters.hpp"


namespace SDK
{

// Function UI_Button_CrownsShop_HC_Pack.UI_Button_CrownsShop_HC_Pack_C.ExecuteUbergraph_UI_Button_CrownsShop_HC_Pack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Button_CrownsShop_HC_Pack_C::ExecuteUbergraph_UI_Button_CrownsShop_HC_Pack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_CrownsShop_HC_Pack_C", "ExecuteUbergraph_UI_Button_CrownsShop_HC_Pack");

	Params::UI_Button_CrownsShop_HC_Pack_C_ExecuteUbergraph_UI_Button_CrownsShop_HC_Pack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_CrownsShop_HC_Pack.UI_Button_CrownsShop_HC_Pack_C.SetFocusVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFocused                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HighlightOnly                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Button_CrownsShop_HC_Pack_C::SetFocusVisuals(bool IsFocused, bool HighlightOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_CrownsShop_HC_Pack_C", "SetFocusVisuals");

	Params::UI_Button_CrownsShop_HC_Pack_C_SetFocusVisuals Parms{};

	Parms.IsFocused = IsFocused;
	Parms.HighlightOnly = HighlightOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_CrownsShop_HC_Pack.UI_Button_CrownsShop_HC_Pack_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Button_CrownsShop_HC_Pack_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_CrownsShop_HC_Pack_C", "PreConstruct");

	Params::UI_Button_CrownsShop_HC_Pack_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Button_CrownsShop_HC_Pack.UI_Button_CrownsShop_HC_Pack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Button_CrownsShop_HC_Pack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_CrownsShop_HC_Pack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Button_CrownsShop_HC_Pack.UI_Button_CrownsShop_HC_Pack_C.SetRandomPackFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Button_CrownsShop_HC_Pack_C::SetRandomPackFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_CrownsShop_HC_Pack_C", "SetRandomPackFrame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Button_CrownsShop_HC_Pack.UI_Button_CrownsShop_HC_Pack_C.CustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_Button_CrownsShop_HC_Pack_C::CustomNavigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Button_CrownsShop_HC_Pack_C", "CustomNavigation");

	Params::UI_Button_CrownsShop_HC_Pack_C_CustomNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

