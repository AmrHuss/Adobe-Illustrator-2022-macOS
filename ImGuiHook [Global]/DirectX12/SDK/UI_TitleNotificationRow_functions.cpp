#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TitleNotificationRow

#include "Basic.hpp"

#include "UI_TitleNotificationRow_classes.hpp"
#include "UI_TitleNotificationRow_parameters.hpp"


namespace SDK
{

// Function UI_TitleNotificationRow.UI_TitleNotificationRow_C.ExecuteUbergraph_UI_TitleNotificationRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TitleNotificationRow_C::ExecuteUbergraph_UI_TitleNotificationRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TitleNotificationRow_C", "ExecuteUbergraph_UI_TitleNotificationRow");

	Params::UI_TitleNotificationRow_C_ExecuteUbergraph_UI_TitleNotificationRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TitleNotificationRow.UI_TitleNotificationRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TitleNotificationRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TitleNotificationRow_C", "PreConstruct");

	Params::UI_TitleNotificationRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_TitleNotificationRow.UI_TitleNotificationRow_C.UpdateVisual
// (BlueprintCallable, BlueprintEvent)

void UUI_TitleNotificationRow_C::UpdateVisual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TitleNotificationRow_C", "UpdateVisual");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TitleNotificationRow.UI_TitleNotificationRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TitleNotificationRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TitleNotificationRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_TitleNotificationRow.UI_TitleNotificationRow_C.OnLoaded_303A9E7341428F48F05BE78A91FF98D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TitleNotificationRow_C::OnLoaded_303A9E7341428F48F05BE78A91FF98D4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_TitleNotificationRow_C", "OnLoaded_303A9E7341428F48F05BE78A91FF98D4");

	Params::UI_TitleNotificationRow_C_OnLoaded_303A9E7341428F48F05BE78A91FF98D4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

