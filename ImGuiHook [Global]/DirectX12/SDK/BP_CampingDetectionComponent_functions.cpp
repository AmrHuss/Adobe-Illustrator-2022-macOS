#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampingDetectionComponent

#include "Basic.hpp"

#include "BP_CampingDetectionComponent_classes.hpp"
#include "BP_CampingDetectionComponent_parameters.hpp"


namespace SDK
{

// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.Player Is Camping__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Human_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CampingDetectionComponent_C::Player_Is_Camping__DelegateSignature(class AHumanCharacter* Human_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "Player Is Camping__DelegateSignature");

	Params::BP_CampingDetectionComponent_C_Player_Is_Camping__DelegateSignature Parms{};

	Parms.Human_Character = Human_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.ExecuteUbergraph_BP_CampingDetectionComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CampingDetectionComponent_C::ExecuteUbergraph_BP_CampingDetectionComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "ExecuteUbergraph_BP_CampingDetectionComponent");

	Params::BP_CampingDetectionComponent_C_ExecuteUbergraph_BP_CampingDetectionComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.Stop Camping Detection
// (BlueprintCallable, BlueprintEvent)

void UBP_CampingDetectionComponent_C::Stop_Camping_Detection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "Stop Camping Detection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.Start Camping Detection
// (BlueprintCallable, BlueprintEvent)

void UBP_CampingDetectionComponent_C::Start_Camping_Detection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "Start Camping Detection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.Match Has Started
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_CampingDetectionComponent_C::Match_Has_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "Match Has Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.Check Camping Players
// (BlueprintCallable, BlueprintEvent)

void UBP_CampingDetectionComponent_C::Check_Camping_Players()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "Check Camping Players");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CampingDetectionComponent.BP_CampingDetectionComponent_C.Check If Character Camping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Human_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CampingDetectionComponent_C::Check_If_Character_Camping(class AHumanCharacter* Human_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampingDetectionComponent_C", "Check If Character Camping");

	Params::BP_CampingDetectionComponent_C_Check_If_Character_Camping Parms{};

	Parms.Human_Character = Human_Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

