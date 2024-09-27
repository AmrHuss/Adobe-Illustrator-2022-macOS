#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayerController

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_PlayerController.BPI_PlayerController_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_PlayerController_C final : public IInterface
{
public:
	void AddUserMessage(const class FText& Message, TSoftObjectPtr<class USoundBase> Optional2D_Sound);
	void IncrementUsedAmmo();
	void IncrementShotsFired();
	void BPI_RegisterMapMarkedActor(class UBP_MapMarkerComponent_C* MarkerComponent, bool* bValid, class FName* UsedTag);
	void BPI_UnRegisterMapMarkedActor(class UBP_MapMarkerComponent_C* MarkerComponent, bool* Success);
	void GetLobbyStateAndTimes(bool* Valid, bool* HasMatchStarted, bool* DelayedMatchStartIsInEffect, int32* RemainingTimeToEncounter, int32* TotalTimeToEncounter);
	void GetGroupID(bool* Valid, class FString* GroupId);
	void GetLastRespawnTime(bool* Valid, struct FDateTime* LastRespawnTime);
	void GetLastMatchID_Info(bool* Valid, bool* LastMatchIDReset, class FString* MatchID_ToSave);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_PlayerController_C">();
	}
	static class IBPI_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_PlayerController_C>();
	}
};
static_assert(alignof(IBPI_PlayerController_C) == 0x000008, "Wrong alignment on IBPI_PlayerController_C");
static_assert(sizeof(IBPI_PlayerController_C) == 0x000028, "Wrong size on IBPI_PlayerController_C");

}

