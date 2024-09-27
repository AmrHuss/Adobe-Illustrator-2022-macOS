#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BarredWindow_Breakable

#include "Basic.hpp"

#include "BP_ADM_BarredWindow_Breakable_classes.hpp"
#include "BP_ADM_BarredWindow_Breakable_parameters.hpp"


namespace SDK
{

// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ExecuteUbergraph_BP_ADM_BarredWindow_Breakable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::ExecuteUbergraph_BP_ADM_BarredWindow_Breakable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ExecuteUbergraph_BP_ADM_BarredWindow_Breakable");

	Params::BP_ADM_BarredWindow_Breakable_C_ExecuteUbergraph_BP_ADM_BarredWindow_Breakable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ProccessExplosion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExplosionRadius                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatorController                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DamagingExplosion                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   EnviromentDamageMultiplier                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::ProccessExplosion(const struct FVector& Location, float ExplosionRadius, class AController* InstigatorController, class AActor* DamageCauser, bool DamagingExplosion, float EnviromentDamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ProccessExplosion");

	Params::BP_ADM_BarredWindow_Breakable_C_ProccessExplosion Parms{};

	Parms.Location = std::move(Location);
	Parms.ExplosionRadius = ExplosionRadius;
	Parms.InstigatorController = InstigatorController;
	Parms.DamageCauser = DamageCauser;
	Parms.DamagingExplosion = DamagingExplosion;
	Parms.EnviromentDamageMultiplier = EnviromentDamageMultiplier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ReplicateExplosion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Center                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::ReplicateExplosion(float Radius, const struct FVector& Center)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ReplicateExplosion");

	Params::BP_ADM_BarredWindow_Breakable_C_ReplicateExplosion Parms{};

	Parms.Radius = Radius;
	Parms.Center = std::move(Center);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ApplyExplosionDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   EnviroDamageMultiplier                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatingController                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::ApplyExplosionDamage(float EnviroDamageMultiplier, const struct FVector& Location, class AController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ApplyExplosionDamage");

	Params::BP_ADM_BarredWindow_Breakable_C_ApplyExplosionDamage Parms{};

	Parms.EnviroDamageMultiplier = EnviroDamageMultiplier;
	Parms.Location = std::move(Location);
	Parms.InstigatingController = InstigatingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ChangeBarricadeHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::ChangeBarricadeHealth(class FName Tag, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ChangeBarricadeHealth");

	Params::BP_ADM_BarredWindow_Breakable_C_ChangeBarricadeHealth Parms{};

	Parms.Tag = Tag;
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.FakeBarricadeInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ADM_DoorBarricade_Component_C*Barricade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::FakeBarricadeInteraction(class AActor* InteractingActor, class UBP_ADM_DoorBarricade_Component_C* Barricade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "FakeBarricadeInteraction");

	Params::BP_ADM_BarredWindow_Breakable_C_FakeBarricadeInteraction Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.Barricade = Barricade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ReceivePointDamage
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

void ABP_ADM_BarredWindow_Breakable_C::ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ReceivePointDamage");

	Params::BP_ADM_BarredWindow_Breakable_C_ReceivePointDamage Parms{};

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


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.BarricadeInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ADM_DoorBarricade_Component_C*Barricade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::BarricadeInteract(class AActor* Interacting_Actor, class UBP_ADM_DoorBarricade_Component_C* Barricade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "BarricadeInteract");

	Params::BP_ADM_BarredWindow_Breakable_C_BarricadeInteract Parms{};

	Parms.Interacting_Actor = Interacting_Actor;
	Parms.Barricade = Barricade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.InitBarricades
// (BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredWindow_Breakable_C::InitBarricades()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "InitBarricades");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionItemComponent*        Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Interacting_Actor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction Start on Server__DelegateSignature");

	Params::BP_ADM_BarredWindow_Breakable_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_3_Interaction_Start_on_Server__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.Interacting_Actor = Interacting_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ADM_BarredWindow_Breakable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ADM_BarredWindow_Breakable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.Spawn Barricade Debrie Mesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ADM_DoorBarricade_Component_C*BarricadeComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::Spawn_Barricade_Debrie_Mesh(class UStaticMeshComponent* MeshComponent, class UBP_ADM_DoorBarricade_Component_C* BarricadeComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "Spawn Barricade Debrie Mesh");

	Params::BP_ADM_BarredWindow_Breakable_C_Spawn_Barricade_Debrie_Mesh Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.BarricadeComponent = BarricadeComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BarredWindow_Breakable.BP_ADM_BarredWindow_Breakable_C.GetNextDebrieMeshComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*             MeshComponent                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BarredWindow_Breakable_C::GetNextDebrieMeshComponent(class UStaticMeshComponent** MeshComponent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BarredWindow_Breakable_C", "GetNextDebrieMeshComponent");

	Params::BP_ADM_BarredWindow_Breakable_C_GetNextDebrieMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MeshComponent != nullptr)
		*MeshComponent = Parms.MeshComponent;
}

}

