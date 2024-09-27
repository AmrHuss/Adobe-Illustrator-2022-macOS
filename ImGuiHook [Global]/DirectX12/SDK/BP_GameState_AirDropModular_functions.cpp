#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_AirDropModular

#include "Basic.hpp"

#include "BP_GameState_AirDropModular_classes.hpp"
#include "BP_GameState_AirDropModular_parameters.hpp"


namespace SDK
{

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.ExecuteUbergraph_BP_GameState_AirDropModular
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_AirDropModular_C::ExecuteUbergraph_BP_GameState_AirDropModular(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_AirDropModular_C", "ExecuteUbergraph_BP_GameState_AirDropModular");

	Params::BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Destroy ADM Component
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GSComponent_ADM_C*            ADM_GSComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_AirDropModular_C::Destroy_ADM_Component(class UBP_GSComponent_ADM_C* ADM_GSComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_AirDropModular_C", "Destroy ADM Component");

	Params::BP_GameState_AirDropModular_C_Destroy_ADM_Component Parms{};

	Parms.ADM_GSComponent = ADM_GSComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Print Component List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GameState_AirDropModular_C::Print_Component_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_AirDropModular_C", "Print Component List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Get Game Mode Description
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Game_Mode_Description_0                                (Parm, OutParm)

void ABP_GameState_AirDropModular_C::Get_Game_Mode_Description(class FText* Game_Mode_Description_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_AirDropModular_C", "Get Game Mode Description");

	Params::BP_GameState_AirDropModular_C_Get_Game_Mode_Description Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Game_Mode_Description_0 != nullptr)
		*Game_Mode_Description_0 = std::move(Parms.Game_Mode_Description_0);
}


// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Set Game Mode Description
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             New_Game_Mode_Description                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_GameState_AirDropModular_C::Set_Game_Mode_Description(const class FText& New_Game_Mode_Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_AirDropModular_C", "Set Game Mode Description");

	Params::BP_GameState_AirDropModular_C_Set_Game_Mode_Description Parms{};

	Parms.New_Game_Mode_Description = std::move(New_Game_Mode_Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.GetGameModeStringName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StringName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_GameState_AirDropModular_C::GetGameModeStringName(class FString* StringName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_AirDropModular_C", "GetGameModeStringName");

	Params::BP_GameState_AirDropModular_C_GetGameModeStringName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StringName != nullptr)
		*StringName = std::move(Parms.StringName);
}

}

