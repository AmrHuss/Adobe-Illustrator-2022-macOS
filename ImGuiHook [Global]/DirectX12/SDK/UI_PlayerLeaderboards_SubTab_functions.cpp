#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerLeaderboards_SubTab

#include "Basic.hpp"

#include "UI_PlayerLeaderboards_SubTab_classes.hpp"
#include "UI_PlayerLeaderboards_SubTab_parameters.hpp"


namespace SDK
{

// Function UI_PlayerLeaderboards_SubTab.UI_PlayerLeaderboards_SubTab_C.ExecuteUbergraph_UI_PlayerLeaderboards_SubTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerLeaderboards_SubTab_C::ExecuteUbergraph_UI_PlayerLeaderboards_SubTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_SubTab_C", "ExecuteUbergraph_UI_PlayerLeaderboards_SubTab");

	Params::UI_PlayerLeaderboards_SubTab_C_ExecuteUbergraph_UI_PlayerLeaderboards_SubTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerLeaderboards_SubTab.UI_PlayerLeaderboards_SubTab_C.OnResetToDefaultState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_PlayerLeaderboards_SubTab_C::OnResetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_SubTab_C", "OnResetToDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PlayerLeaderboards_SubTab.UI_PlayerLeaderboards_SubTab_C.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NewIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerLeaderboards_SubTab_C::OnSelectionChanged(int32 NewIndex, int32 OldIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_SubTab_C", "OnSelectionChanged");

	Params::UI_PlayerLeaderboards_SubTab_C_OnSelectionChanged Parms{};

	Parms.NewIndex = NewIndex;
	Parms.OldIndex = OldIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerLeaderboards_SubTab.UI_PlayerLeaderboards_SubTab_C.CreateTabs
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UTabWidget*>               ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UTabWidget*> UUI_PlayerLeaderboards_SubTab_C::CreateTabs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_SubTab_C", "CreateTabs");

	Params::UI_PlayerLeaderboards_SubTab_C_CreateTabs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

