#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_Radiation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GameModeComponent_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GMComponent_Radiation.BP_GMComponent_Radiation_C
// 0x0050 (0x0108 - 0x00B8)
class UBP_GMComponent_Radiation_C final : public UBP_GameModeComponent_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GMComponent_Radiation_C;         // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_RadiationWave_C*                    RadiationWave;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultWaveDelay;                                  // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           WaveTimerHandle;                                   // 0x00D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RadToDamagePerSecond;                              // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Script_C*                 CurrentCharacter;                                  // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerMaxRads;                                     // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinLocalRadsForDamage;                             // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalRads;                                         // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Radiation_Wave_Activated;                          // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Radiation_Wave_Activated__DelegateSignature();
	void ExecuteUbergraph_BP_GMComponent_Radiation(int32 EntryPoint);
	void EventBeginRadiationWave();
	void ScheduleRadiationWave(float TimeUntilWave, struct FTimerHandle* TimerHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GMComponent_Radiation_C">();
	}
	static class UBP_GMComponent_Radiation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GMComponent_Radiation_C>();
	}
};
static_assert(alignof(UBP_GMComponent_Radiation_C) == 0x000008, "Wrong alignment on UBP_GMComponent_Radiation_C");
static_assert(sizeof(UBP_GMComponent_Radiation_C) == 0x000108, "Wrong size on UBP_GMComponent_Radiation_C");
static_assert(offsetof(UBP_GMComponent_Radiation_C, UberGraphFrame_BP_GMComponent_Radiation_C) == 0x0000B8, "Member 'UBP_GMComponent_Radiation_C::UberGraphFrame_BP_GMComponent_Radiation_C' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, RadiationWave) == 0x0000C0, "Member 'UBP_GMComponent_Radiation_C::RadiationWave' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, DefaultWaveDelay) == 0x0000C8, "Member 'UBP_GMComponent_Radiation_C::DefaultWaveDelay' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, WaveTimerHandle) == 0x0000D0, "Member 'UBP_GMComponent_Radiation_C::WaveTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, RadToDamagePerSecond) == 0x0000D8, "Member 'UBP_GMComponent_Radiation_C::RadToDamagePerSecond' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, DeltaSeconds) == 0x0000DC, "Member 'UBP_GMComponent_Radiation_C::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, CurrentCharacter) == 0x0000E0, "Member 'UBP_GMComponent_Radiation_C::CurrentCharacter' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, PlayerMaxRads) == 0x0000E8, "Member 'UBP_GMComponent_Radiation_C::PlayerMaxRads' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, MinLocalRadsForDamage) == 0x0000EC, "Member 'UBP_GMComponent_Radiation_C::MinLocalRadsForDamage' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, LocalRads) == 0x0000F0, "Member 'UBP_GMComponent_Radiation_C::LocalRads' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_Radiation_C, Radiation_Wave_Activated) == 0x0000F8, "Member 'UBP_GMComponent_Radiation_C::Radiation_Wave_Activated' has a wrong offset!");

}

