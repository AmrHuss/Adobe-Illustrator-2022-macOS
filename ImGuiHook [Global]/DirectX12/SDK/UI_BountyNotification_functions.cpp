#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BountyNotification

#include "Basic.hpp"

#include "UI_BountyNotification_classes.hpp"
#include "UI_BountyNotification_parameters.hpp"


namespace SDK
{

// Function UI_BountyNotification.UI_BountyNotification_C.ExecuteUbergraph_UI_BountyNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BountyNotification_C::ExecuteUbergraph_UI_BountyNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BountyNotification_C", "ExecuteUbergraph_UI_BountyNotification");

	Params::UI_BountyNotification_C_ExecuteUbergraph_UI_BountyNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BountyNotification.UI_BountyNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BountyNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BountyNotification_C", "PreConstruct");

	Params::UI_BountyNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BountyNotification.UI_BountyNotification_C.OnHide
// (Event, Public, BlueprintEvent)

void UUI_BountyNotification_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BountyNotification_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BountyNotification.UI_BountyNotification_C.OnShow
// (Event, Public, BlueprintEvent)

void UUI_BountyNotification_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BountyNotification_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BountyNotification.UI_BountyNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BountyNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BountyNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BountyNotification.UI_BountyNotification_C.UpdateContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_BountyNotification_C::UpdateContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BountyNotification_C", "UpdateContent");

	UObject::ProcessEvent(Func, nullptr);
}

}

