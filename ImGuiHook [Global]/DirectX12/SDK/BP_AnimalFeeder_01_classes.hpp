#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimalFeeder_01

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimalFeeder_01.BP_AnimalFeeder_01_C
// 0x0008 (0x0338 - 0x0330)
class ABP_AnimalFeeder_01_C final : public ABuilding
{
public:
	class UBuildingBoxComponent*                  BuildingBox;                                       // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimalFeeder_01_C">();
	}
	static class ABP_AnimalFeeder_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AnimalFeeder_01_C>();
	}
};
static_assert(alignof(ABP_AnimalFeeder_01_C) == 0x000008, "Wrong alignment on ABP_AnimalFeeder_01_C");
static_assert(sizeof(ABP_AnimalFeeder_01_C) == 0x000338, "Wrong size on ABP_AnimalFeeder_01_C");
static_assert(offsetof(ABP_AnimalFeeder_01_C, BuildingBox) == 0x000330, "Member 'ABP_AnimalFeeder_01_C::BuildingBox' has a wrong offset!");

}

