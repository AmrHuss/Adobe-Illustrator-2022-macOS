#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveSpawnPoint_GunFight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObjectiveSpawnPoint_GunFight.BP_ObjectiveSpawnPoint_GunFight_C
// 0x0020 (0x0240 - 0x0220)
class ABP_ObjectiveSpawnPoint_GunFight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         SettingsID;                                        // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ObjectiveSpawnPoint_GunFight(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObjectiveSpawnPoint_GunFight_C">();
	}
	static class ABP_ObjectiveSpawnPoint_GunFight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ObjectiveSpawnPoint_GunFight_C>();
	}
};
static_assert(alignof(ABP_ObjectiveSpawnPoint_GunFight_C) == 0x000008, "Wrong alignment on ABP_ObjectiveSpawnPoint_GunFight_C");
static_assert(sizeof(ABP_ObjectiveSpawnPoint_GunFight_C) == 0x000240, "Wrong size on ABP_ObjectiveSpawnPoint_GunFight_C");
static_assert(offsetof(ABP_ObjectiveSpawnPoint_GunFight_C, UberGraphFrame) == 0x000220, "Member 'ABP_ObjectiveSpawnPoint_GunFight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveSpawnPoint_GunFight_C, StaticMesh) == 0x000228, "Member 'ABP_ObjectiveSpawnPoint_GunFight_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveSpawnPoint_GunFight_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_ObjectiveSpawnPoint_GunFight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveSpawnPoint_GunFight_C, SettingsID) == 0x000238, "Member 'ABP_ObjectiveSpawnPoint_GunFight_C::SettingsID' has a wrong offset!");

}

