#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_ShouldTutorialAIMove

#include "Basic.hpp"

#include "BTDecorator_ShouldTutorialAIMove_classes.hpp"
#include "BTDecorator_ShouldTutorialAIMove_parameters.hpp"


namespace SDK
{

// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBTDecorator_ShouldTutorialAIMove_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_ShouldTutorialAIMove_C", "PerformConditionCheckAI");

	Params::BTDecorator_ShouldTutorialAIMove_C_PerformConditionCheckAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.ShortDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DistanceSquared                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldMove                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTDecorator_ShouldTutorialAIMove_C::ShortDistance(float DistanceSquared, bool* ShouldMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_ShouldTutorialAIMove_C", "ShortDistance");

	Params::BTDecorator_ShouldTutorialAIMove_C_ShortDistance Parms{};

	Parms.DistanceSquared = DistanceSquared;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldMove != nullptr)
		*ShouldMove = Parms.ShouldMove;
}


// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.MediumDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldMove                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTDecorator_ShouldTutorialAIMove_C::MediumDistance(bool* ShouldMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_ShouldTutorialAIMove_C", "MediumDistance");

	Params::BTDecorator_ShouldTutorialAIMove_C_MediumDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldMove != nullptr)
		*ShouldMove = Parms.ShouldMove;
}


// Function BTDecorator_ShouldTutorialAIMove.BTDecorator_ShouldTutorialAIMove_C.FarDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TutorialAI_Character_C*       AI                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EnemyLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldMove                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTDecorator_ShouldTutorialAIMove_C::FarDistance(class ABP_TutorialAI_Character_C* AI, const struct FVector& EnemyLocation, bool* ShouldMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_ShouldTutorialAIMove_C", "FarDistance");

	Params::BTDecorator_ShouldTutorialAIMove_C_FarDistance Parms{};

	Parms.AI = AI;
	Parms.EnemyLocation = std::move(EnemyLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldMove != nullptr)
		*ShouldMove = Parms.ShouldMove;
}

}

