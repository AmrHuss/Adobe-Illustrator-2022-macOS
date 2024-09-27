#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponSkinPreviewScene

#include "Basic.hpp"

#include "BP_WeaponSkinPreviewScene_classes.hpp"
#include "BP_WeaponSkinPreviewScene_parameters.hpp"


namespace SDK
{

// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.ExecuteUbergraph_BP_WeaponSkinPreviewScene
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::ExecuteUbergraph_BP_WeaponSkinPreviewScene(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "ExecuteUbergraph_BP_WeaponSkinPreviewScene");

	Params::BP_WeaponSkinPreviewScene_C_ExecuteUbergraph_BP_WeaponSkinPreviewScene Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.AddPreviewRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         DeltaRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponSkinPreviewScene_C::AddPreviewRotation(const struct FRotator& DeltaRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "AddPreviewRotation");

	Params::BP_WeaponSkinPreviewScene_C_AddPreviewRotation Parms{};

	Parms.DeltaRotation = std::move(DeltaRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "ReceiveTick");

	Params::BP_WeaponSkinPreviewScene_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.HideTempProps
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::HideTempProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "HideTempProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.Stop Ambient Sound
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::Stop_Ambient_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "Stop Ambient Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.Start Ambient Sound
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::Start_Ambient_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "Start Ambient Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "ReceiveEndPlay");

	Params::BP_WeaponSkinPreviewScene_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.UpdateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           WeaponSkin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::UpdateWeapon(class UClass* Weapon, class UClass* WeaponSkin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "UpdateWeapon");

	Params::BP_WeaponSkinPreviewScene_C_UpdateWeapon Parms{};

	Parms.Weapon = Weapon;
	Parms.WeaponSkin = WeaponSkin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.SetWeaponTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WeaponSkinPreviewSettings     TransformSettings                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::SetWeaponTransform(const struct FS_WeaponSkinPreviewSettings& TransformSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "SetWeaponTransform");

	Params::BP_WeaponSkinPreviewScene_C_SetWeaponTransform Parms{};

	Parms.TransformSettings = std::move(TransformSettings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.Get Weapon Settings Table Row
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSkinPreviewSettings     Row                                                    (Parm, OutParm, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::Get_Weapon_Settings_Table_Row(class UClass* Weapon, struct FS_WeaponSkinPreviewSettings* Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "Get Weapon Settings Table Row");

	Params::BP_WeaponSkinPreviewScene_C_Get_Weapon_Settings_Table_Row Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

	if (Row != nullptr)
		*Row = std::move(Parms.Row);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.UpdateCameraTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::UpdateCameraTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "UpdateCameraTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.UpdatePreviewPropTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::UpdatePreviewPropTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "UpdatePreviewPropTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.UpdateWeaponAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::UpdateWeaponAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "UpdateWeaponAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.HandleRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponSkinPreviewScene_C::HandleRarity(int32 Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "HandleRarity");

	Params::BP_WeaponSkinPreviewScene_C_HandleRarity Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.DEBUG_ENABLE_PLACEMENT
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSkinPreviewScene_C::DEBUG_ENABLE_PLACEMENT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "DEBUG_ENABLE_PLACEMENT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponSkinPreviewScene.BP_WeaponSkinPreviewScene_C.GetWeaponRelativeZoomTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       CameraTransform                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                          ZoomOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABP_WeaponSkinPreviewScene_C::GetWeaponRelativeZoomTransform(const struct FTransform& CameraTransform, const struct FVector& ZoomOffset, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponSkinPreviewScene_C", "GetWeaponRelativeZoomTransform");

	Params::BP_WeaponSkinPreviewScene_C_GetWeaponRelativeZoomTransform Parms{};

	Parms.CameraTransform = std::move(CameraTransform);
	Parms.ZoomOffset = std::move(ZoomOffset);

	UObject::ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}

}

