#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_SpawnSelectionItem

#include "Basic.hpp"

#include "UI_Raid_SpawnSelectionItem_classes.hpp"
#include "UI_Raid_SpawnSelectionItem_parameters.hpp"


namespace SDK
{

// Function UI_Raid_SpawnSelectionItem.UI_Raid_SpawnSelectionItem_C.ExecuteUbergraph_UI_Raid_SpawnSelectionItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_SpawnSelectionItem_C::ExecuteUbergraph_UI_Raid_SpawnSelectionItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnSelectionItem_C", "ExecuteUbergraph_UI_Raid_SpawnSelectionItem");

	Params::UI_Raid_SpawnSelectionItem_C_ExecuteUbergraph_UI_Raid_SpawnSelectionItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_SpawnSelectionItem.UI_Raid_SpawnSelectionItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Raid_SpawnSelectionItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnSelectionItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_SpawnSelectionItem.UI_Raid_SpawnSelectionItem_C.Set Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Raid_SpawnSelectionItem_C::Set_Selected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnSelectionItem_C", "Set Selected");

	Params::UI_Raid_SpawnSelectionItem_C_Set_Selected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}

