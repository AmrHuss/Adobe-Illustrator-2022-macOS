#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_10

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PrimaryWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SniperRifle_10.BP_SniperRifle_10_C
// 0x0070 (0x2420 - 0x23B0)
class ABP_SniperRifle_10_C final : public ABP_PrimaryWeapon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SniperRifle_10_C;                // 0x23B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   DropMagazine;                                      // 0x23B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentFadeOut;                                    // 0x23C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutDuration;                                   // 0x23C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTickPeriod;                                 // 0x23C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23CC[0x4];                                     // 0x23CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           FadeOutTickTimer;                                  // 0x23D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FadeOutFunctionTimer;                              // 0x23D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutDelay;                                      // 0x23E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23E4[0x4];                                     // 0x23E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 LastMagSkin;                                       // 0x23E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             DroppedMagazineMeshSoftRef;                        // 0x23F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SniperRifle_10(int32 EntryPoint);
	void ResetTimer();
	void BeginFadeOut();
	void SimulateMagDrop();
	void ResetDroppedMagPosition();
	void MagInitiate();
	void CheckSkin(bool* IsTheSame);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SniperRifle_10_C">();
	}
	static class ABP_SniperRifle_10_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SniperRifle_10_C>();
	}
};
static_assert(alignof(ABP_SniperRifle_10_C) == 0x000010, "Wrong alignment on ABP_SniperRifle_10_C");
static_assert(sizeof(ABP_SniperRifle_10_C) == 0x002420, "Wrong size on ABP_SniperRifle_10_C");
static_assert(offsetof(ABP_SniperRifle_10_C, UberGraphFrame_BP_SniperRifle_10_C) == 0x0023B0, "Member 'ABP_SniperRifle_10_C::UberGraphFrame_BP_SniperRifle_10_C' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, DropMagazine) == 0x0023B8, "Member 'ABP_SniperRifle_10_C::DropMagazine' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, CurrentFadeOut) == 0x0023C0, "Member 'ABP_SniperRifle_10_C::CurrentFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, FadeOutDuration) == 0x0023C4, "Member 'ABP_SniperRifle_10_C::FadeOutDuration' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, FadeOutTickPeriod) == 0x0023C8, "Member 'ABP_SniperRifle_10_C::FadeOutTickPeriod' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, FadeOutTickTimer) == 0x0023D0, "Member 'ABP_SniperRifle_10_C::FadeOutTickTimer' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, FadeOutFunctionTimer) == 0x0023D8, "Member 'ABP_SniperRifle_10_C::FadeOutFunctionTimer' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, FadeOutDelay) == 0x0023E0, "Member 'ABP_SniperRifle_10_C::FadeOutDelay' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, LastMagSkin) == 0x0023E8, "Member 'ABP_SniperRifle_10_C::LastMagSkin' has a wrong offset!");
static_assert(offsetof(ABP_SniperRifle_10_C, DroppedMagazineMeshSoftRef) == 0x0023F0, "Member 'ABP_SniperRifle_10_C::DroppedMagazineMeshSoftRef' has a wrong offset!");

}

