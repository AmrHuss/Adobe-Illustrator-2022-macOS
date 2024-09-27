#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CarryingComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CarryingComponent.BP_CarryingComponent_C
// 0x0028 (0x00D8 - 0x00B0)
class UBP_CarryingComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_ActorToCarry_C*>             CarriedActors;                                     // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UUI_Carrying_C*                         UI;                                                // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultMaxWalkSpeed;                               // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DafaultSprintExhaustSpeed;                         // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CarryingComponent(int32 EntryPoint);
	void SetRestrictionsOnOwningClient(class ABP_Character_C* Character, TArray<class ABP_ActorToCarry_C*>& Cargos);
	void CloseUI();
	void ShowUI();
	void DropAll();
	void DropCargoGetHandleLocation(class ABP_ActorToCarry_C* Cargo);
	void GrabCargo(class ABP_ActorToCarry_C* Cargo);
	void DropCargoServer(class ABP_ActorToCarry_C* Cargo, const struct FTransform& HandleWorldTransform);
	void SetRestrictions(class AHumanCharacter* Character, TArray<class ABP_ActorToCarry_C*>& Cargos);
	bool HasCapacityFor(class ABP_ActorToCarry_C* Cargo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CarryingComponent_C">();
	}
	static class UBP_CarryingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CarryingComponent_C>();
	}
};
static_assert(alignof(UBP_CarryingComponent_C) == 0x000008, "Wrong alignment on UBP_CarryingComponent_C");
static_assert(sizeof(UBP_CarryingComponent_C) == 0x0000D8, "Wrong size on UBP_CarryingComponent_C");
static_assert(offsetof(UBP_CarryingComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_CarryingComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CarryingComponent_C, CarriedActors) == 0x0000B8, "Member 'UBP_CarryingComponent_C::CarriedActors' has a wrong offset!");
static_assert(offsetof(UBP_CarryingComponent_C, UI) == 0x0000C8, "Member 'UBP_CarryingComponent_C::UI' has a wrong offset!");
static_assert(offsetof(UBP_CarryingComponent_C, DefaultMaxWalkSpeed) == 0x0000D0, "Member 'UBP_CarryingComponent_C::DefaultMaxWalkSpeed' has a wrong offset!");
static_assert(offsetof(UBP_CarryingComponent_C, DafaultSprintExhaustSpeed) == 0x0000D4, "Member 'UBP_CarryingComponent_C::DafaultSprintExhaustSpeed' has a wrong offset!");

}

