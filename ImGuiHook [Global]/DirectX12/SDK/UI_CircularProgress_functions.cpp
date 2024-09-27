#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CircularProgress

#include "Basic.hpp"

#include "UI_CircularProgress_classes.hpp"
#include "UI_CircularProgress_parameters.hpp"


namespace SDK
{

// Function UI_CircularProgress.UI_CircularProgress_C.ExecuteUbergraph_UI_CircularProgress
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CircularProgress_C::ExecuteUbergraph_UI_CircularProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CircularProgress_C", "ExecuteUbergraph_UI_CircularProgress");

	Params::UI_CircularProgress_C_ExecuteUbergraph_UI_CircularProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CircularProgress.UI_CircularProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CircularProgress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CircularProgress_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CircularProgress.UI_CircularProgress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CircularProgress_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CircularProgress_C", "PreConstruct");

	Params::UI_CircularProgress_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CircularProgress.UI_CircularProgress_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CircularProgress_C::SetProgress(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CircularProgress_C", "SetProgress");

	Params::UI_CircularProgress_C_SetProgress Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CircularProgress.UI_CircularProgress_C.SetStartingAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CircularProgress_C::SetStartingAngle(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CircularProgress_C", "SetStartingAngle");

	Params::UI_CircularProgress_C_SetStartingAngle Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CircularProgress.UI_CircularProgress_C.SetProgressTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CircularProgress_C::SetProgressTexture(class UTexture* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CircularProgress_C", "SetProgressTexture");

	Params::UI_CircularProgress_C_SetProgressTexture Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

