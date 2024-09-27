#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BarredVaultLocation

#include "Basic.hpp"

#include "BP_ADM_BarredVaultLocation_classes.hpp"
#include "BP_ADM_BarredVaultLocation_parameters.hpp"


namespace SDK
{

// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.ExecuteUbergraph_BP_ADM_BarredVaultLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredVaultLocation_C::ExecuteUbergraph_BP_ADM_BarredVaultLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "ExecuteUbergraph_BP_ADM_BarredVaultLocation");

	Params::BP_ADM_BarredVaultLocation_C_ExecuteUbergraph_BP_ADM_BarredVaultLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.Show Linked Assets
// (BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::Show_Linked_Assets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "Show Linked Assets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.Hide Links
// (BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::Hide_Links()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "Hide Links");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.PostRebuildBuildings
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TMap<class FName, float>                Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ADM_BarredVaultLocation_C::PostRebuildBuildings(const TMap<class FName, float>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "PostRebuildBuildings");

	Params::BP_ADM_BarredVaultLocation_C_PostRebuildBuildings Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.PreRebuildBuildings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEditorRebuildDataStorage*        Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredVaultLocation_C::PreRebuildBuildings(class UEditorRebuildDataStorage* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "PreRebuildBuildings");

	Params::BP_ADM_BarredVaultLocation_C_PreRebuildBuildings Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.Refresh References in All
// (BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::Refresh_References_in_All()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "Refresh References in All");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.Update Door References
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::Update_Door_References()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "Update Door References");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.Update Window References
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::Update_Window_References()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "Update Window References");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.Draw Debug Lines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::Draw_Debug_Lines()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "Draw Debug Lines");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.UpdateAll
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredVaultLocation_C::UpdateAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "UpdateAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredVaultLocation.BP_ADM_BarredVaultLocation_C.GetRebuildReferencedTags
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSet<class FName>                       OutNames                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ADM_BarredVaultLocation_C::GetRebuildReferencedTags(TSet<class FName>& OutNames) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredVaultLocation_C", "GetRebuildReferencedTags");

	Params::BP_ADM_BarredVaultLocation_C_GetRebuildReferencedTags Parms{};

	Parms.OutNames = std::move(OutNames);

	UObject::ProcessEvent(Func, &Parms);

	OutNames = std::move(Parms.OutNames);
}

}

