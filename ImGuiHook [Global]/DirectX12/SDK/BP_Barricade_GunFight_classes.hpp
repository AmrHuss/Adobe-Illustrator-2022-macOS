#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Barricade_GunFight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Barricade_GunFight.BP_Barricade_GunFight_C
// 0x0010 (0x0230 - 0x0220)
class ABP_Barricade_GunFight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Barricade_GunFight(int32 EntryPoint);
	void Set_Barrier_Active(bool Is_active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Barricade_GunFight_C">();
	}
	static class ABP_Barricade_GunFight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Barricade_GunFight_C>();
	}
};
static_assert(alignof(ABP_Barricade_GunFight_C) == 0x000008, "Wrong alignment on ABP_Barricade_GunFight_C");
static_assert(sizeof(ABP_Barricade_GunFight_C) == 0x000230, "Wrong size on ABP_Barricade_GunFight_C");
static_assert(offsetof(ABP_Barricade_GunFight_C, UberGraphFrame) == 0x000220, "Member 'ABP_Barricade_GunFight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Barricade_GunFight_C, StaticMesh) == 0x000228, "Member 'ABP_Barricade_GunFight_C::StaticMesh' has a wrong offset!");

}

