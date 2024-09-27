#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_AirdropModular

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "E_Mutator_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Character_Matches_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_AirdropModular.BP_Character_AirdropModular_C
// 0x0040 (0x1230 - 0x11F0)
class ABP_Character_AirdropModular_C final : public ABP_Character_Matches_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_AirdropModular_C;      // 0x11F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_RadiationComponent_C*               BP_RadiationComponent;                             // 0x11F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AirdropRadiationExposureValue;                     // 0x1200(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1204[0x4];                                     // 0x1204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EquipFirstValidWeaponHandle;                       // 0x1208(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUI_Mutators_Debug_C*                   MutatorsDebugWidget;                               // 0x1210(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           AffectedByMutators;                                // 0x1218(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                          BlizzardMutator;                                   // 0x1228(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AllThreatMutator;                                  // 0x1229(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MoreEventsMutator;                                 // 0x122A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AdditionalAirdropsMutator;                         // 0x122B(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HardcoreMutator;                                   // 0x122C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RadiationCloudsMutator;                            // 0x122D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Character_AirdropModular(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Equip_First_Valid_Weapon();
	void Item_Destroyed(class UClass* BagItemClass, int32 Count);
	void Use_Oversized_Stamina_Effect();
	void Airdrop_Oversized_Modifier_Activated();
	void Add_Airdrop_Radiation_Exposure();
	void Airdrop_Radioactive_Modifier_Activated();
	void Event_OpenMutators_on_Client(E_Mutator Mutator);
	void Event_OpenMutators_on_Server(E_Mutator Mutator);
	void Event_OpenMutatorsMenu(E_Mutator Mutator);
	void Event_AddMoreEventsMutatorHUD_on_Client(const struct FS_MoreEventsMutatorParameters& More_Events_Data);
	void Event_AddRadiationCloudsMutatorHUD_on_Client(int32 Minimum_Ammount_Of_Radiation_Clouds, int32 Maximum_Ammount_Of_Radiation_Clouds, int32 CloudsInTheMap, int32 SpawnedClouds);
	void Event_SetMutatorHUDVisibility(bool Visibility);
	void Event_SetMutatorHUDVisilty_on_Client(bool Visibility);
	void Event_SetMutatorHUDVisibilty_on_Server(bool Visibility);
	void Event_ShowMutatorHUD_on_Client(E_Mutator Mutator, class UPrimaryDataAsset* Mutator_Data);
	void Event_AddMutatorHUD(E_Mutator MutatorName, class UPrimaryDataAsset* Mutator_Data);
	void Player_Carries_Airdrop(bool* Carrying_Airdrop);
	void OnRep_BlizzardMutator();
	void Die(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_AirdropModular_C">();
	}
	static class ABP_Character_AirdropModular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_AirdropModular_C>();
	}
};
static_assert(alignof(ABP_Character_AirdropModular_C) == 0x000010, "Wrong alignment on ABP_Character_AirdropModular_C");
static_assert(sizeof(ABP_Character_AirdropModular_C) == 0x001230, "Wrong size on ABP_Character_AirdropModular_C");
static_assert(offsetof(ABP_Character_AirdropModular_C, UberGraphFrame_BP_Character_AirdropModular_C) == 0x0011F0, "Member 'ABP_Character_AirdropModular_C::UberGraphFrame_BP_Character_AirdropModular_C' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, BP_RadiationComponent) == 0x0011F8, "Member 'ABP_Character_AirdropModular_C::BP_RadiationComponent' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, AirdropRadiationExposureValue) == 0x001200, "Member 'ABP_Character_AirdropModular_C::AirdropRadiationExposureValue' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, EquipFirstValidWeaponHandle) == 0x001208, "Member 'ABP_Character_AirdropModular_C::EquipFirstValidWeaponHandle' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, MutatorsDebugWidget) == 0x001210, "Member 'ABP_Character_AirdropModular_C::MutatorsDebugWidget' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, AffectedByMutators) == 0x001218, "Member 'ABP_Character_AirdropModular_C::AffectedByMutators' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, BlizzardMutator) == 0x001228, "Member 'ABP_Character_AirdropModular_C::BlizzardMutator' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, AllThreatMutator) == 0x001229, "Member 'ABP_Character_AirdropModular_C::AllThreatMutator' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, MoreEventsMutator) == 0x00122A, "Member 'ABP_Character_AirdropModular_C::MoreEventsMutator' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, AdditionalAirdropsMutator) == 0x00122B, "Member 'ABP_Character_AirdropModular_C::AdditionalAirdropsMutator' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, HardcoreMutator) == 0x00122C, "Member 'ABP_Character_AirdropModular_C::HardcoreMutator' has a wrong offset!");
static_assert(offsetof(ABP_Character_AirdropModular_C, RadiationCloudsMutator) == 0x00122D, "Member 'ABP_Character_AirdropModular_C::RadiationCloudsMutator' has a wrong offset!");

}

