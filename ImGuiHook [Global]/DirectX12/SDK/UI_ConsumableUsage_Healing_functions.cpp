#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsumableUsage_Healing

#include "Basic.hpp"

#include "UI_ConsumableUsage_Healing_classes.hpp"
#include "UI_ConsumableUsage_Healing_parameters.hpp"


namespace SDK
{

// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.ExecuteUbergraph_UI_ConsumableUsage_Healing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableUsage_Healing_C::ExecuteUbergraph_UI_ConsumableUsage_Healing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "ExecuteUbergraph_UI_ConsumableUsage_Healing");

	Params::UI_ConsumableUsage_Healing_C_ExecuteUbergraph_UI_ConsumableUsage_Healing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableUsage_Healing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "Tick");

	Params::UI_ConsumableUsage_Healing_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ConsumableUsage_Healing_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "PreConstruct");

	Params::UI_ConsumableUsage_Healing_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ConsumableUsage_Healing_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.SetHoldProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanBeUsed_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableUsage_Healing_C::SetHoldProgress(bool CanBeUsed_0, float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "SetHoldProgress");

	Params::UI_ConsumableUsage_Healing_C_SetHoldProgress Parms{};

	Parms.CanBeUsed_0 = CanBeUsed_0;
	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.HealSelf
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ConsumableUsage_Healing_C::HealSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "HealSelf");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.HealOther
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableUsage_Healing_C::HealOther(class ABP_Character_C* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "HealOther");

	Params::UI_ConsumableUsage_Healing_C_HealOther Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ConsumableUsage_Healing.UI_ConsumableUsage_Healing_C.GetHoldIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UImage*                           GamepadIcon_0                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ConsumableUsage_Healing_C::GetHoldIcon(class UImage** GamepadIcon_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ConsumableUsage_Healing_C", "GetHoldIcon");

	Params::UI_ConsumableUsage_Healing_C_GetHoldIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GamepadIcon_0 != nullptr)
		*GamepadIcon_0 = Parms.GamepadIcon_0;
}

}

