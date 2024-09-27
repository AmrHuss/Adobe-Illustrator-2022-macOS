#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_Tutorial

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_GameMode_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_Tutorial.BP_GameMode_Tutorial_C
// 0x0030 (0x0470 - 0x0440)
class ABP_GameMode_Tutorial_C : public ABP_GameMode_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameMode_Tutorial_C;             // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GMComponent_Radiation_C*            BP_GMComponent_Radiation;                          // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMatchInfoComponent*                    MatchInfo;                                         // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TimeUntilRadiation;                                // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadiationWaveSpeed;                                // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadToDamagePerSecond;                              // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Shelter_SaveGame_C*                 ShelterSaveGame;                                   // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GameMode_Tutorial(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnSaveSucceed_784D67F941A70CFF2AE4AC8F8016AA7E(const class FString& SlotName, const int32 UserIndex);
	void OnSaveFailed_784D67F941A70CFF2AE4AC8F8016AA7E(const class FString& SlotName, const int32 UserIndex);
	void OnLoadSucceed_973791334CC256FA81961790F36709DB(class USaveGame* SaveGame);
	void OnLoadFailed_973791334CC256FA81961790F36709DB(class USaveGame* SaveGame);
	void FinishAnalytics(class APlayerController* ExitingController);
	bool OnPlayerDied(class AHumanCharacter* Player, class AHumanCharacter* Killer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_Tutorial_C">();
	}
	static class ABP_GameMode_Tutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_Tutorial_C>();
	}
};
static_assert(alignof(ABP_GameMode_Tutorial_C) == 0x000008, "Wrong alignment on ABP_GameMode_Tutorial_C");
static_assert(sizeof(ABP_GameMode_Tutorial_C) == 0x000470, "Wrong size on ABP_GameMode_Tutorial_C");
static_assert(offsetof(ABP_GameMode_Tutorial_C, UberGraphFrame_BP_GameMode_Tutorial_C) == 0x000440, "Member 'ABP_GameMode_Tutorial_C::UberGraphFrame_BP_GameMode_Tutorial_C' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Tutorial_C, BP_GMComponent_Radiation) == 0x000448, "Member 'ABP_GameMode_Tutorial_C::BP_GMComponent_Radiation' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Tutorial_C, MatchInfo) == 0x000450, "Member 'ABP_GameMode_Tutorial_C::MatchInfo' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Tutorial_C, TimeUntilRadiation) == 0x000458, "Member 'ABP_GameMode_Tutorial_C::TimeUntilRadiation' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Tutorial_C, RadiationWaveSpeed) == 0x00045C, "Member 'ABP_GameMode_Tutorial_C::RadiationWaveSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Tutorial_C, RadToDamagePerSecond) == 0x000460, "Member 'ABP_GameMode_Tutorial_C::RadToDamagePerSecond' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_Tutorial_C, ShelterSaveGame) == 0x000468, "Member 'ABP_GameMode_Tutorial_C::ShelterSaveGame' has a wrong offset!");

}

