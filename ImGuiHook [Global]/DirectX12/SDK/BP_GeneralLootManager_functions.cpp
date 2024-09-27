#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GeneralLootManager

#include "Basic.hpp"

#include "BP_GeneralLootManager_classes.hpp"
#include "BP_GeneralLootManager_parameters.hpp"


namespace SDK
{

// Function BP_GeneralLootManager.BP_GeneralLootManager_C.OnCommodityParamsModify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class AActor>               CommodityType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                                   SpawnProbabilityIn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CapacityMinIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CapacityMaxIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubObjectsLimitMinIn                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubObjectsLimitMaxIn                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SpawnProbabilityOut                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CapacityMinOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CapacityMaxOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubObjectsLimitMinOut                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubObjectsLimitMaxOut                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GeneralLootManager_C::OnCommodityParamsModify(TSubclassOf<class AActor> CommodityType, float SpawnProbabilityIn, int32 CapacityMinIn, int32 CapacityMaxIn, int32 SubObjectsLimitMinIn, int32 SubObjectsLimitMaxIn, float* SpawnProbabilityOut, int32* CapacityMinOut, int32* CapacityMaxOut, int32* SubObjectsLimitMinOut, int32* SubObjectsLimitMaxOut) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GeneralLootManager_C", "OnCommodityParamsModify");

	Params::BP_GeneralLootManager_C_OnCommodityParamsModify Parms{};

	Parms.CommodityType = CommodityType;
	Parms.SpawnProbabilityIn = SpawnProbabilityIn;
	Parms.CapacityMinIn = CapacityMinIn;
	Parms.CapacityMaxIn = CapacityMaxIn;
	Parms.SubObjectsLimitMinIn = SubObjectsLimitMinIn;
	Parms.SubObjectsLimitMaxIn = SubObjectsLimitMaxIn;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnProbabilityOut != nullptr)
		*SpawnProbabilityOut = Parms.SpawnProbabilityOut;

	if (CapacityMinOut != nullptr)
		*CapacityMinOut = Parms.CapacityMinOut;

	if (CapacityMaxOut != nullptr)
		*CapacityMaxOut = Parms.CapacityMaxOut;

	if (SubObjectsLimitMinOut != nullptr)
		*SubObjectsLimitMinOut = Parms.SubObjectsLimitMinOut;

	if (SubObjectsLimitMaxOut != nullptr)
		*SubObjectsLimitMaxOut = Parms.SubObjectsLimitMaxOut;
}

}

