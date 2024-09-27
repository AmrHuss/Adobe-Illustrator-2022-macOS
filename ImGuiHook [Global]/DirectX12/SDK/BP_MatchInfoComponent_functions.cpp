#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchInfoComponent

#include "Basic.hpp"

#include "BP_MatchInfoComponent_classes.hpp"
#include "BP_MatchInfoComponent_parameters.hpp"


namespace SDK
{

// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.Match ID Available__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Match_ID_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_MatchInfoComponent_C::Match_ID_Available__DelegateSignature(const class FString& Match_ID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "Match ID Available__DelegateSignature");

	Params::BP_MatchInfoComponent_C_Match_ID_Available__DelegateSignature Parms{};

	Parms.Match_ID_0 = std::move(Match_ID_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.ExecuteUbergraph_BP_MatchInfoComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MatchInfoComponent_C::ExecuteUbergraph_BP_MatchInfoComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "ExecuteUbergraph_BP_MatchInfoComponent");

	Params::BP_MatchInfoComponent_C_ExecuteUbergraph_BP_MatchInfoComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_MatchInfoComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.Save Match ID on Client
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    New_Player                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MatchInfoComponent_C::Save_Match_ID_on_Client(class ABP_PlayerController_Script_C* New_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "Save Match ID on Client");

	Params::BP_MatchInfoComponent_C_Save_Match_ID_on_Client Parms{};

	Parms.New_Player = New_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.Save Match Info for Leaving Player to Cloud
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Exiting_Controller                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUserMatchInfo                   Match_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MatchInfoComponent_C::Save_Match_Info_for_Leaving_Player_to_Cloud(class AController* Exiting_Controller, const struct FUserMatchInfo& Match_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "Save Match Info for Leaving Player to Cloud");

	Params::BP_MatchInfoComponent_C_Save_Match_Info_for_Leaving_Player_to_Cloud Parms{};

	Parms.Exiting_Controller = Exiting_Controller;
	Parms.Match_Info = std::move(Match_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.Register Match in Cloud
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_MatchInfoComponent_C::Register_Match_in_Cloud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "Register Match in Cloud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.Match Registered
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudRequestResult              RequestResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           MatchID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_MatchInfoComponent_C::Match_Registered(const struct FCloudRequestResult& RequestResult, const class FString& MatchID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "Match Registered");

	Params::BP_MatchInfoComponent_C_Match_Registered Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.MatchID = std::move(MatchID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MatchInfoComponent.BP_MatchInfoComponent_C.Get Is Match Registration Done
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Match_Registration_Done_0                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MatchInfoComponent_C::Get_Is_Match_Registration_Done(bool* Match_Registration_Done_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MatchInfoComponent_C", "Get Is Match Registration Done");

	Params::BP_MatchInfoComponent_C_Get_Is_Match_Registration_Done Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Match_Registration_Done_0 != nullptr)
		*Match_Registration_Done_0 = Parms.Match_Registration_Done_0;
}

}

