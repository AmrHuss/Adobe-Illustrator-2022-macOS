#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WindowSashSet_Base

#include "Basic.hpp"

#include "BP_WindowSashSet_Base_classes.hpp"
#include "BP_WindowSashSet_Base_parameters.hpp"


namespace SDK
{

// Function BP_WindowSashSet_Base.BP_WindowSashSet_Base_C.OpenAnimationUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   T                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WindowSashSet_Base_C::OpenAnimationUpdate(float T)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowSashSet_Base_C", "OpenAnimationUpdate");

	Params::BP_WindowSashSet_Base_C_OpenAnimationUpdate Parms{};

	Parms.T = T;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WindowSashSet_Base.BP_WindowSashSet_Base_C.OnWindowOpen
// (Event, Protected, BlueprintEvent)

void ABP_WindowSashSet_Base_C::OnWindowOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowSashSet_Base_C", "OnWindowOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WindowSashSet_Base.BP_WindowSashSet_Base_C.OnWindowClose
// (Event, Protected, BlueprintEvent)

void ABP_WindowSashSet_Base_C::OnWindowClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowSashSet_Base_C", "OnWindowClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WindowSashSet_Base.BP_WindowSashSet_Base_C.OnPlayOpenAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInstant                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WindowSashSet_Base_C::OnPlayOpenAnimation(bool bOpen, bool bInstant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowSashSet_Base_C", "OnPlayOpenAnimation");

	Params::BP_WindowSashSet_Base_C_OnPlayOpenAnimation Parms{};

	Parms.bOpen = bOpen;
	Parms.bInstant = bInstant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WindowSashSet_Base.BP_WindowSashSet_Base_C.OnPaneShot
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       PaneTransform                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      PaneMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WindowSashSet_Base_C::OnPaneShot(const struct FVector& HitLocation, const struct FTransform& PaneTransform, class UStaticMesh* PaneMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowSashSet_Base_C", "OnPaneShot");

	Params::BP_WindowSashSet_Base_C_OnPaneShot Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.PaneTransform = std::move(PaneTransform);
	Parms.PaneMesh = PaneMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WindowSashSet_Base.BP_WindowSashSet_Base_C.ExecuteUbergraph_BP_WindowSashSet_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WindowSashSet_Base_C::ExecuteUbergraph_BP_WindowSashSet_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WindowSashSet_Base_C", "ExecuteUbergraph_BP_WindowSashSet_Base");

	Params::BP_WindowSashSet_Base_C_ExecuteUbergraph_BP_WindowSashSet_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

