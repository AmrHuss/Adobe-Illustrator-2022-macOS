#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletDecalManager

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BulletDecalManager.BP_BulletDecalManager_C
// 0x0000 (0x0260 - 0x0260)
class ABP_BulletDecalManager_C final : public ABulletDecalManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BulletDecalManager_C">();
	}
	static class ABP_BulletDecalManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BulletDecalManager_C>();
	}
};
static_assert(alignof(ABP_BulletDecalManager_C) == 0x000010, "Wrong alignment on ABP_BulletDecalManager_C");
static_assert(sizeof(ABP_BulletDecalManager_C) == 0x000260, "Wrong size on ABP_BulletDecalManager_C");

}

