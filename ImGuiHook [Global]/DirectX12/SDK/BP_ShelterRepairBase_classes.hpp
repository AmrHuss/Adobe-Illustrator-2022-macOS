#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterRepairBase

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ShelterRepairBase.BP_ShelterRepairBase_C
// 0x0020 (0x0430 - 0x0410)
class ABP_ShelterRepairBase_C : public AShelterImprovement
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         CloudLevel;                                        // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayLevel;                                      // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempPreviewLevel;                                  // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ShelterRepairBase(int32 EntryPoint);
	void OnPersistentShelterSaveFileLoaded();
	void UnloadPreviewLevel();
	void OnShelterLevelChanged_Event_0(int32 NewLevel);
	void LoadLevel(int32 NewLevel);
	void ReceiveBeginPlay();
	void UpdateDisplayLevel();
	void LoadLevels(int32 CloudLevel_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ShelterRepairBase_C">();
	}
	static class ABP_ShelterRepairBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ShelterRepairBase_C>();
	}
};
static_assert(alignof(ABP_ShelterRepairBase_C) == 0x000008, "Wrong alignment on ABP_ShelterRepairBase_C");
static_assert(sizeof(ABP_ShelterRepairBase_C) == 0x000430, "Wrong size on ABP_ShelterRepairBase_C");
static_assert(offsetof(ABP_ShelterRepairBase_C, UberGraphFrame) == 0x000410, "Member 'ABP_ShelterRepairBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ShelterRepairBase_C, DefaultSceneRoot) == 0x000418, "Member 'ABP_ShelterRepairBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ShelterRepairBase_C, CloudLevel) == 0x000420, "Member 'ABP_ShelterRepairBase_C::CloudLevel' has a wrong offset!");
static_assert(offsetof(ABP_ShelterRepairBase_C, DisplayLevel) == 0x000424, "Member 'ABP_ShelterRepairBase_C::DisplayLevel' has a wrong offset!");
static_assert(offsetof(ABP_ShelterRepairBase_C, TempPreviewLevel) == 0x000428, "Member 'ABP_ShelterRepairBase_C::TempPreviewLevel' has a wrong offset!");

}

