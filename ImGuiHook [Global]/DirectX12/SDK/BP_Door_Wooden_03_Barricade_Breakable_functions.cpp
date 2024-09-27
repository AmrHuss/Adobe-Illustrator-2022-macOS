#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Door_Wooden_03_Barricade_Breakable

#include "Basic.hpp"

#include "BP_Door_Wooden_03_Barricade_Breakable_classes.hpp"
#include "BP_Door_Wooden_03_Barricade_Breakable_parameters.hpp"


namespace SDK
{

// Function BP_Door_Wooden_03_Barricade_Breakable.BP_Door_Wooden_03_Barricade_Breakable_C.ExecuteUbergraph_BP_Door_Wooden_03_Barricade_Breakable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Door_Wooden_03_Barricade_Breakable_C::ExecuteUbergraph_BP_Door_Wooden_03_Barricade_Breakable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Wooden_03_Barricade_Breakable_C", "ExecuteUbergraph_BP_Door_Wooden_03_Barricade_Breakable");

	Params::BP_Door_Wooden_03_Barricade_Breakable_C_ExecuteUbergraph_BP_Door_Wooden_03_Barricade_Breakable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Door_Wooden_03_Barricade_Breakable.BP_Door_Wooden_03_Barricade_Breakable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Door_Wooden_03_Barricade_Breakable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Wooden_03_Barricade_Breakable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Wooden_03_Barricade_Breakable.BP_Door_Wooden_03_Barricade_Breakable_C.InitBarricades
// (BlueprintCallable, BlueprintEvent)

void ABP_Door_Wooden_03_Barricade_Breakable_C::InitBarricades()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Wooden_03_Barricade_Breakable_C", "InitBarricades");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Wooden_03_Barricade_Breakable.BP_Door_Wooden_03_Barricade_Breakable_C.DEBUG_MOvement__UpdateFunc
// (BlueprintEvent)

void ABP_Door_Wooden_03_Barricade_Breakable_C::DEBUG_MOvement__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Wooden_03_Barricade_Breakable_C", "DEBUG_MOvement__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Wooden_03_Barricade_Breakable.BP_Door_Wooden_03_Barricade_Breakable_C.DEBUG_MOvement__FinishedFunc
// (BlueprintEvent)

void ABP_Door_Wooden_03_Barricade_Breakable_C::DEBUG_MOvement__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Wooden_03_Barricade_Breakable_C", "DEBUG_MOvement__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Door_Wooden_03_Barricade_Breakable.BP_Door_Wooden_03_Barricade_Breakable_C.SetupMainBarricades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Door_Wooden_03_Barricade_Breakable_C::SetupMainBarricades()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Door_Wooden_03_Barricade_Breakable_C", "SetupMainBarricades");

	UObject::ProcessEvent(Func, nullptr);
}

}

