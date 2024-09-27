#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeatherManagerWIthLighting_Static

#include "Basic.hpp"

#include "BP_WeatherManagerWIthLighting_Static_classes.hpp"
#include "BP_WeatherManagerWIthLighting_Static_parameters.hpp"


namespace SDK
{

// Function BP_WeatherManagerWIthLighting_Static.BP_WeatherManagerWIthLighting_Static_C.ExecuteUbergraph_BP_WeatherManagerWIthLighting_Static
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherManagerWIthLighting_Static_C::ExecuteUbergraph_BP_WeatherManagerWIthLighting_Static(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWIthLighting_Static_C", "ExecuteUbergraph_BP_WeatherManagerWIthLighting_Static");

	Params::BP_WeatherManagerWIthLighting_Static_C_ExecuteUbergraph_BP_WeatherManagerWIthLighting_Static Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherManagerWIthLighting_Static.BP_WeatherManagerWIthLighting_Static_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeatherManagerWIthLighting_Static_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWIthLighting_Static_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherManagerWIthLighting_Static.BP_WeatherManagerWIthLighting_Static_C.UpdateOperationMode
// (BlueprintCallable, BlueprintEvent)

void ABP_WeatherManagerWIthLighting_Static_C::UpdateOperationMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWIthLighting_Static_C", "UpdateOperationMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeatherManagerWIthLighting_Static.BP_WeatherManagerWIthLighting_Static_C.SetContactShadowsForNintendoSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeatherManagerWIthLighting_Static_C::SetContactShadowsForNintendoSwitch(uint8 NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWIthLighting_Static_C", "SetContactShadowsForNintendoSwitch");

	Params::BP_WeatherManagerWIthLighting_Static_C_SetContactShadowsForNintendoSwitch Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeatherManagerWIthLighting_Static.BP_WeatherManagerWIthLighting_Static_C.SetAudioQualityLevelForNintendoSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeatherManagerWIthLighting_Static_C::SetAudioQualityLevelForNintendoSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeatherManagerWIthLighting_Static_C", "SetAudioQualityLevelForNintendoSwitch");

	UObject::ProcessEvent(Func, nullptr);
}

}

