#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameInstance

#include "Basic.hpp"

#include "BPI_GameInstance_classes.hpp"
#include "BPI_GameInstance_parameters.hpp"


namespace SDK
{

// Function BPI_GameInstance.BPI_GameInstance_C.IsHealingOthersActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_GameInstance_C::IsHealingOthersActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "IsHealingOthersActive");

	Params::BPI_GameInstance_C_IsHealingOthersActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function BPI_GameInstance.BPI_GameInstance_C.EventSystemStarted
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_GameInstance_C::EventSystemStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "EventSystemStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_GameInstance.BPI_GameInstance_C.BPI_StoreAchievementProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AchievementName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   IncreaseProgressBy                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstance_C::BPI_StoreAchievementProgress(class FName AchievementName, float IncreaseProgressBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "BPI_StoreAchievementProgress");

	Params::BPI_GameInstance_C_BPI_StoreAchievementProgress Parms{};

	Parms.AchievementName = AchievementName;
	Parms.IncreaseProgressBy = IncreaseProgressBy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstance.BPI_GameInstance_C.BPI_GetAchievementProgressFromSave_Pure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AchievementName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   AchievementProgress                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstance_C::BPI_GetAchievementProgressFromSave_Pure(class FName AchievementName, bool* bValid, float* AchievementProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "BPI_GetAchievementProgressFromSave_Pure");

	Params::BPI_GameInstance_C_BPI_GetAchievementProgressFromSave_Pure Parms{};

	Parms.AchievementName = AchievementName;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (AchievementProgress != nullptr)
		*AchievementProgress = Parms.AchievementProgress;
}


// Function BPI_GameInstance.BPI_GameInstance_C.BPI_AddToAchievementQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AchievementName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstance_C::BPI_AddToAchievementQueue(class APlayerController* PlayerController, class FName AchievementName, float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "BPI_AddToAchievementQueue");

	Params::BPI_GameInstance_C_BPI_AddToAchievementQueue Parms{};

	Parms.PlayerController = PlayerController;
	Parms.AchievementName = AchievementName;
	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_GameInstance.BPI_GameInstance_C.BPI_GetAchievementProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AchievementName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ValidOutput                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    MightBeOutOfDate                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   AchievementProgress                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameInstance_C::BPI_GetAchievementProgress(class APlayerController* PlayerController, class FName AchievementName, bool* ValidOutput, bool* MightBeOutOfDate, float* AchievementProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "BPI_GetAchievementProgress");

	Params::BPI_GameInstance_C_BPI_GetAchievementProgress Parms{};

	Parms.PlayerController = PlayerController;
	Parms.AchievementName = AchievementName;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidOutput != nullptr)
		*ValidOutput = Parms.ValidOutput;

	if (MightBeOutOfDate != nullptr)
		*MightBeOutOfDate = Parms.MightBeOutOfDate;

	if (AchievementProgress != nullptr)
		*AchievementProgress = Parms.AchievementProgress;
}


// Function BPI_GameInstance.BPI_GameInstance_C.BPI_CheckForValidGameInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_GameInstance_C::BPI_CheckForValidGameInstance(bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_GameInstance_C", "BPI_CheckForValidGameInstance");

	Params::BPI_GameInstance_C_BPI_CheckForValidGameInstance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}

}

