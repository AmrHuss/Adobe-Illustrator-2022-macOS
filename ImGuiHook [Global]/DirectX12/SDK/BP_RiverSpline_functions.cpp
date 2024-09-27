#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RiverSpline

#include "Basic.hpp"

#include "BP_RiverSpline_classes.hpp"
#include "BP_RiverSpline_parameters.hpp"


namespace SDK
{

// Function BP_RiverSpline.BP_RiverSpline_C.Max
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          First                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Second                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Largest                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RiverSpline_C::Max(const struct FVector& First, const struct FVector& Second, struct FVector* Largest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "Max");

	Params::BP_RiverSpline_C_Max Parms{};

	Parms.First = std::move(First);
	Parms.Second = std::move(Second);

	UObject::ProcessEvent(Func, &Parms);

	if (Largest != nullptr)
		*Largest = std::move(Parms.Largest);
}


// Function BP_RiverSpline.BP_RiverSpline_C.InverseSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RiverSpline_C::InverseSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "InverseSpline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RiverSpline.BP_RiverSpline_C.BuildSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RiverSpline_C::BuildSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "BuildSpline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RiverSpline.BP_RiverSpline_C.GetTraceDistance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Distance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RiverSpline_C::GetTraceDistance(const struct FVector& Start, const struct FVector& Direction, float* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "GetTraceDistance");

	Params::BP_RiverSpline_C_GetTraceDistance Parms{};

	Parms.Start = std::move(Start);
	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}


// Function BP_RiverSpline.BP_RiverSpline_C.GetRiverDimensions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RightVector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RightOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BankDistance                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RiverDepth                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RiverSpline_C::GetRiverDimensions(const struct FVector& Location, const struct FVector& RightVector, int32 Index_0, float* RightOffset, float* BankDistance, float* RiverDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "GetRiverDimensions");

	Params::BP_RiverSpline_C_GetRiverDimensions Parms{};

	Parms.Location = std::move(Location);
	Parms.RightVector = std::move(RightVector);
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (RightOffset != nullptr)
		*RightOffset = Parms.RightOffset;

	if (BankDistance != nullptr)
		*BankDistance = Parms.BankDistance;

	if (RiverDepth != nullptr)
		*RiverDepth = Parms.RiverDepth;
}


// Function BP_RiverSpline.BP_RiverSpline_C.BuildRiverSegment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      InputMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RiverSpline_C::BuildRiverSegment(int32 CurrentIndex, class UStaticMesh* InputMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "BuildRiverSegment");

	Params::BP_RiverSpline_C_BuildRiverSegment Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.InputMesh = InputMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RiverSpline.BP_RiverSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RiverSpline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RiverSpline.BP_RiverSpline_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RiverSpline_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RiverSpline.BP_RiverSpline_C.ExecuteUbergraph_BP_RiverSpline
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RiverSpline_C::ExecuteUbergraph_BP_RiverSpline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RiverSpline_C", "ExecuteUbergraph_BP_RiverSpline");

	Params::BP_RiverSpline_C_ExecuteUbergraph_BP_RiverSpline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

