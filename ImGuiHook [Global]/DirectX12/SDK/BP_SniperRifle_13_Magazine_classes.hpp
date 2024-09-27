#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_13_Magazine

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SniperRifle_13_Magazine.BP_SniperRifle_13_Magazine_C
// 0x0010 (0x0250 - 0x0240)
class ABP_SniperRifle_13_Magazine_C final : public AWeaponMagazine
{
public:
	class UStaticMeshComponent*                   MagazineMesh;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SniperRifle_13_Magazine_C">();
	}
	static class ABP_SniperRifle_13_Magazine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SniperRifle_13_Magazine_C>();
	}
};
static_assert(alignof(ABP_SniperRifle_13_Magazine_C) == 0x000008, "Wrong alignment on ABP_SniperRifle_13_Magazine_C");
static_assert(sizeof(ABP_SniperRifle_13_Magazine_C) == 0x000250, "Wrong size on ABP_SniperRifle_13_Magazine_C");
static_assert(offsetof(ABP_SniperRifle_13_Magazine_C, MagazineMesh) == 0x000240, "Member 'ABP_SniperRifle_13_Magazine_C::MagazineMesh' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_13_Magazine_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_SniperRifle_13_Magazine_C::DefaultSceneRoot' has a wrong offset!");

}

