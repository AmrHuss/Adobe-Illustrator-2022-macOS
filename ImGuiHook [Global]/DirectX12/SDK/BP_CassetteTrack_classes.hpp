#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CassetteTrack

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "S_CassetteTrackInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CassetteTrack.BP_CassetteTrack_C
// 0x00D0 (0x00F8 - 0x0028)
class UBP_CassetteTrack_C final : public UObject
{
public:
	struct FS_CassetteTrackInfo                   CassetteInfo;                                      // 0x0028(0x00C8)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Unlocked;                                          // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsDefaultTrack;                                    // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          VisibleWhenLocked;                                 // 0x00F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CassetteTrack_C">();
	}
	static class UBP_CassetteTrack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CassetteTrack_C>();
	}
};
static_assert(alignof(UBP_CassetteTrack_C) == 0x000008, "Wrong alignment on UBP_CassetteTrack_C");
static_assert(sizeof(UBP_CassetteTrack_C) == 0x0000F8, "Wrong size on UBP_CassetteTrack_C");
static_assert(offsetof(UBP_CassetteTrack_C, CassetteInfo) == 0x000028, "Member 'UBP_CassetteTrack_C::CassetteInfo' has a wrong offset!");
static_assert(offsetof(UBP_CassetteTrack_C, Unlocked) == 0x0000F0, "Member 'UBP_CassetteTrack_C::Unlocked' has a wrong offset!");
static_assert(offsetof(UBP_CassetteTrack_C, IsDefaultTrack) == 0x0000F1, "Member 'UBP_CassetteTrack_C::IsDefaultTrack' has a wrong offset!");
static_assert(offsetof(UBP_CassetteTrack_C, VisibleWhenLocked) == 0x0000F2, "Member 'UBP_CassetteTrack_C::VisibleWhenLocked' has a wrong offset!");

}

