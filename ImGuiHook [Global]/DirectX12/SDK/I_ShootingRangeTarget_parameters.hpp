#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_ShootingRangeTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function I_ShootingRangeTarget.I_ShootingRangeTarget_C.SetTargetActivity
// 0x0001 (0x0001 - 0x0000)
struct I_ShootingRangeTarget_C_SetTargetActivity final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(I_ShootingRangeTarget_C_SetTargetActivity) == 0x000001, "Wrong alignment on I_ShootingRangeTarget_C_SetTargetActivity");
static_assert(sizeof(I_ShootingRangeTarget_C_SetTargetActivity) == 0x000001, "Wrong size on I_ShootingRangeTarget_C_SetTargetActivity");
static_assert(offsetof(I_ShootingRangeTarget_C_SetTargetActivity, IsActive) == 0x000000, "Member 'I_ShootingRangeTarget_C_SetTargetActivity::IsActive' has a wrong offset!");

// Function I_ShootingRangeTarget.I_ShootingRangeTarget_C.SetSpawnPoint
// 0x0008 (0x0008 - 0x0000)
struct I_ShootingRangeTarget_C_SetSpawnPoint final
{
public:
	class AActor*                                 SpawnPoint;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_ShootingRangeTarget_C_SetSpawnPoint) == 0x000008, "Wrong alignment on I_ShootingRangeTarget_C_SetSpawnPoint");
static_assert(sizeof(I_ShootingRangeTarget_C_SetSpawnPoint) == 0x000008, "Wrong size on I_ShootingRangeTarget_C_SetSpawnPoint");
static_assert(offsetof(I_ShootingRangeTarget_C_SetSpawnPoint, SpawnPoint) == 0x000000, "Member 'I_ShootingRangeTarget_C_SetSpawnPoint::SpawnPoint' has a wrong offset!");

}

