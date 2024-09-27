#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardPopUp

#include "Basic.hpp"

#include "UI_RewardPopUp_classes.hpp"
#include "UI_RewardPopUp_parameters.hpp"


namespace SDK
{

// Function UI_RewardPopUp.UI_RewardPopUp_C.ExecuteUbergraph_UI_RewardPopUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RewardPopUp_C::ExecuteUbergraph_UI_RewardPopUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardPopUp_C", "ExecuteUbergraph_UI_RewardPopUp");

	Params::UI_RewardPopUp_C_ExecuteUbergraph_UI_RewardPopUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RewardPopUp.UI_RewardPopUp_C.Set Reward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rewarded_XP                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UClass*, int32>              Item_Rewards                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    LocalPlayerWon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RewardPopUp_C::Set_Reward(const int32 Rewarded_XP, const TMap<class UClass*, int32>& Item_Rewards, bool LocalPlayerWon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardPopUp_C", "Set Reward");

	Params::UI_RewardPopUp_C_Set_Reward Parms{};

	Parms.Rewarded_XP = Rewarded_XP;
	Parms.Item_Rewards = std::move(Item_Rewards);
	Parms.LocalPlayerWon = LocalPlayerWon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RewardPopUp.UI_RewardPopUp_C.Destroy Widget
// (BlueprintCallable, BlueprintEvent)

void UUI_RewardPopUp_C::Destroy_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardPopUp_C", "Destroy Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RewardPopUp.UI_RewardPopUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RewardPopUp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardPopUp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RewardPopUp.UI_RewardPopUp_C.Fill In Item Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UClass*, int32>              Item_Rewards                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_RewardPopUp_C::Fill_In_Item_Rewards(const TMap<class UClass*, int32>& Item_Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardPopUp_C", "Fill In Item Rewards");

	Params::UI_RewardPopUp_C_Fill_In_Item_Rewards Parms{};

	Parms.Item_Rewards = std::move(Item_Rewards);

	UObject::ProcessEvent(Func, &Parms);
}

}

