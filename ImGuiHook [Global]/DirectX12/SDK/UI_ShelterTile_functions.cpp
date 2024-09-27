#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ShelterTile

#include "Basic.hpp"

#include "UI_ShelterTile_classes.hpp"
#include "UI_ShelterTile_parameters.hpp"


namespace SDK
{

// Function UI_ShelterTile.UI_ShelterTile_C.ShowItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ItemClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShelterTile_C::ShowItem(class UClass* ItemClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ShelterTile_C", "ShowItem");

	Params::UI_ShelterTile_C_ShowItem Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ShelterTile.UI_ShelterTile_C.InitSceneCapture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SceneCaptureIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShelterTile_C::InitSceneCapture(int32 SceneCaptureIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ShelterTile_C", "InitSceneCapture");

	Params::UI_ShelterTile_C_InitSceneCapture Parms{};

	Parms.SceneCaptureIndex = SceneCaptureIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

