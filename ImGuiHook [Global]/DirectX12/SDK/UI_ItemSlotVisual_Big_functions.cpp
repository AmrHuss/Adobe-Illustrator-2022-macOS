#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemSlotVisual_Big

#include "Basic.hpp"

#include "UI_ItemSlotVisual_Big_classes.hpp"
#include "UI_ItemSlotVisual_Big_parameters.hpp"


namespace SDK
{

// Function UI_ItemSlotVisual_Big.UI_ItemSlotVisual_Big_C.ExecuteUbergraph_UI_ItemSlotVisual_Big
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemSlotVisual_Big_C::ExecuteUbergraph_UI_ItemSlotVisual_Big(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemSlotVisual_Big_C", "ExecuteUbergraph_UI_ItemSlotVisual_Big");

	Params::UI_ItemSlotVisual_Big_C_ExecuteUbergraph_UI_ItemSlotVisual_Big Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemSlotVisual_Big.UI_ItemSlotVisual_Big_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemSlotVisual_Big_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemSlotVisual_Big_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ItemSlotVisual_Big.UI_ItemSlotVisual_Big_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ItemSlotVisual_Big_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemSlotVisual_Big_C", "PreConstruct");

	Params::UI_ItemSlotVisual_Big_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

