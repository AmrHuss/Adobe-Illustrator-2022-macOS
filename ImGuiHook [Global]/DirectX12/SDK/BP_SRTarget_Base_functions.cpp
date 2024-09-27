#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SRTarget_Base

#include "Basic.hpp"

#include "BP_SRTarget_Base_classes.hpp"
#include "BP_SRTarget_Base_parameters.hpp"


namespace SDK
{

// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ExecuteUbergraph_BP_SRTarget_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::ExecuteUbergraph_BP_SRTarget_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ExecuteUbergraph_BP_SRTarget_Base");

	Params::BP_SRTarget_Base_C_ExecuteUbergraph_BP_SRTarget_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ShowHitMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatingController                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::ShowHitMarker(float Damage, class AController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ShowHitMarker");

	Params::BP_SRTarget_Base_C_ShowHitMarker Parms{};

	Parms.Damage = Damage;
	Parms.InstigatingController = InstigatingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ResetTargetServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::ResetTargetServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ResetTargetServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.Event UpdateIndicatorDepth
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::Event_UpdateIndicatorDepth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "Event UpdateIndicatorDepth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ReceiveTick");

	Params::BP_SRTarget_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.UpdateIndicatorVisuals
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::UpdateIndicatorVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "UpdateIndicatorVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.StartChallengeVisuals
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::StartChallengeVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "StartChallengeVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.DestroyIndicators
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::DestroyIndicators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "DestroyIndicators");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.HideIndicators
// (BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::HideIndicators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "HideIndicators");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SRTarget_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.SetTargetActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SRTarget_Base_C::SetTargetActivity(bool IsActive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "SetTargetActivity");

	Params::BP_SRTarget_Base_C_SetTargetActivity Parms{};

	Parms.IsActive_0 = IsActive_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ResetTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SRTarget_Base_C::ResetTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ResetTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ShotFromDirection                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SRTarget_Base_C::ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "ReceivePointDamage");

	Params::BP_SRTarget_Base_C_ReceivePointDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = std::move(ShotFromDirection);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitInfo = std::move(HitInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.SetSpawnPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::SetSpawnPoint(class AActor* SpawnPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "SetSpawnPoint");

	Params::BP_SRTarget_Base_C_SetSpawnPoint Parms{};

	Parms.SpawnPoint = SpawnPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.AttachIndicatorToComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IndicatorIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*                  ComponentToBeAttached                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseRelativeLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          RelativeLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::AttachIndicatorToComponent(int32 IndicatorIndex, class UActorComponent* ComponentToBeAttached, bool UseRelativeLocation, const struct FVector& RelativeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "AttachIndicatorToComponent");

	Params::BP_SRTarget_Base_C_AttachIndicatorToComponent Parms{};

	Parms.IndicatorIndex = IndicatorIndex;
	Parms.ComponentToBeAttached = ComponentToBeAttached;
	Parms.UseRelativeLocation = UseRelativeLocation;
	Parms.RelativeLocation = std::move(RelativeLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.SetIndicatorsWidgetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale_X                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Scale_Y                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::SetIndicatorsWidgetScale(float Scale_X, float Scale_Y)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "SetIndicatorsWidgetScale");

	Params::BP_SRTarget_Base_C_SetIndicatorsWidgetScale Parms{};

	Parms.Scale_X = Scale_X;
	Parms.Scale_Y = Scale_Y;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.DestroyIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IndicatorToDestroy                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RemoveFromArray                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SRTarget_Base_C::DestroyIndicator(int32 IndicatorToDestroy, bool RemoveFromArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "DestroyIndicator");

	Params::BP_SRTarget_Base_C_DestroyIndicator Parms{};

	Parms.IndicatorToDestroy = IndicatorToDestroy;
	Parms.RemoveFromArray = RemoveFromArray;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SRTarget_Base.BP_SRTarget_Base_C.GetIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   IndicatorIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetComponent*                 Indicator                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SRTarget_Base_C::GetIndicator(int32 IndicatorIndex, class UWidgetComponent** Indicator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SRTarget_Base_C", "GetIndicator");

	Params::BP_SRTarget_Base_C_GetIndicator Parms{};

	Parms.IndicatorIndex = IndicatorIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Indicator != nullptr)
		*Indicator = Parms.Indicator;
}

}

