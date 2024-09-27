#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HitIndication

#include "Basic.hpp"

#include "UI_HitIndication_classes.hpp"
#include "UI_HitIndication_parameters.hpp"


namespace SDK
{

// Function UI_HitIndication.UI_HitIndication_C.ExecuteUbergraph_UI_HitIndication
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HitIndication_C::ExecuteUbergraph_UI_HitIndication(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HitIndication_C", "ExecuteUbergraph_UI_HitIndication");

	Params::UI_HitIndication_C_ExecuteUbergraph_UI_HitIndication Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HitIndication.UI_HitIndication_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HitIndication_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HitIndication_C", "PreConstruct");

	Params::UI_HitIndication_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HitIndication.UI_HitIndication_C.Event Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          BulletOrigin_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlayerHit_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsArmorHit_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsFriendlyFire_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Character_Script_C*           Caster_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_HitIndication_C::Event_Initialize(const struct FVector& BulletOrigin_0, bool IsPlayerHit_0, bool IsArmorHit_0, bool IsFriendlyFire_0, class ABP_Character_Script_C* Caster_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HitIndication_C", "Event Initialize");

	Params::UI_HitIndication_C_Event_Initialize Parms{};

	Parms.BulletOrigin_0 = std::move(BulletOrigin_0);
	Parms.IsPlayerHit_0 = IsPlayerHit_0;
	Parms.IsArmorHit_0 = IsArmorHit_0;
	Parms.IsFriendlyFire_0 = IsFriendlyFire_0;
	Parms.Caster_0 = Caster_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_HitIndication.UI_HitIndication_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HitIndication_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HitIndication_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HitIndication.UI_HitIndication_C.EventFadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_HitIndication_C::EventFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HitIndication_C", "EventFadeOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_HitIndication.UI_HitIndication_C.UpdateBulletIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HitIndication_C::UpdateBulletIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_HitIndication_C", "UpdateBulletIndicator");

	UObject::ProcessEvent(Func, nullptr);
}

}

