#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerStart_Raid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerStartPrimary_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerStart_Raid.BP_PlayerStart_Raid_C
// 0x0040 (0x0318 - 0x02D8)
class ABP_PlayerStart_Raid_C final : public ABP_PlayerStartPrimary_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Is_Attacker_Spawn;                                 // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Spawn_Point_Name;                                  // 0x02E4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PlayerStartSecondary_C*>     All_Secondary_Spawns;                              // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_PlayerStartSecondary_C*>     Available_Secondary_Spawns;                        // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         ExpectedSpawnCount;                                // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SettingsID;                                        // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerStart_Raid(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Get_Random_Secondary_Spawn(class AActor** Random_Start);
	void Reset_Given_Secondary_Spawns();
	void Find_Secondary_Spawns();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerStart_Raid_C">();
	}
	static class ABP_PlayerStart_Raid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerStart_Raid_C>();
	}
};
static_assert(alignof(ABP_PlayerStart_Raid_C) == 0x000008, "Wrong alignment on ABP_PlayerStart_Raid_C");
static_assert(sizeof(ABP_PlayerStart_Raid_C) == 0x000318, "Wrong size on ABP_PlayerStart_Raid_C");
static_assert(offsetof(ABP_PlayerStart_Raid_C, UberGraphFrame) == 0x0002D8, "Member 'ABP_PlayerStart_Raid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_Raid_C, Is_Attacker_Spawn) == 0x0002E0, "Member 'ABP_PlayerStart_Raid_C::Is_Attacker_Spawn' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_Raid_C, Spawn_Point_Name) == 0x0002E4, "Member 'ABP_PlayerStart_Raid_C::Spawn_Point_Name' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_Raid_C, All_Secondary_Spawns) == 0x0002F0, "Member 'ABP_PlayerStart_Raid_C::All_Secondary_Spawns' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_Raid_C, Available_Secondary_Spawns) == 0x000300, "Member 'ABP_PlayerStart_Raid_C::Available_Secondary_Spawns' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_Raid_C, ExpectedSpawnCount) == 0x000310, "Member 'ABP_PlayerStart_Raid_C::ExpectedSpawnCount' has a wrong offset!");
static_assert(offsetof(ABP_PlayerStart_Raid_C, SettingsID) == 0x000314, "Member 'ABP_PlayerStart_Raid_C::SettingsID' has a wrong offset!");

}

