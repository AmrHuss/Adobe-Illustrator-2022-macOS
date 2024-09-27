#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LandMine_Border

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_TC_ContactBomb_Object_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LandMine_Border.BP_LandMine_Border_C
// 0x0018 (0x05C0 - 0x05A8)
class ABP_LandMine_Border_C final : public ABP_TC_ContactBomb_Object_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LandMine_Border_C;               // 0x05A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                ActorScale;                                        // 0x05B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LandMine_Border(int32 EntryPoint);
	void ProccessExplosion(const struct FVector& Location, float ExplosionRadius, class AController* InstigatorController, class AActor* DamageCauser, bool DamagingExplosion, float EnviromentDamageMultiplier);
	void BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnExplosionCompleted(const TArray<struct FExplosionEffect>& ExplosionEffects);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LandMine_Border_C">();
	}
	static class ABP_LandMine_Border_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LandMine_Border_C>();
	}
};
static_assert(alignof(ABP_LandMine_Border_C) == 0x000008, "Wrong alignment on ABP_LandMine_Border_C");
static_assert(sizeof(ABP_LandMine_Border_C) == 0x0005C0, "Wrong size on ABP_LandMine_Border_C");
static_assert(offsetof(ABP_LandMine_Border_C, UberGraphFrame_BP_LandMine_Border_C) == 0x0005A8, "Member 'ABP_LandMine_Border_C::UberGraphFrame_BP_LandMine_Border_C' has a wrong offset!");
static_assert(offsetof(ABP_LandMine_Border_C, ActorScale) == 0x0005B0, "Member 'ABP_LandMine_Border_C::ActorScale' has a wrong offset!");

}

