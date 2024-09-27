#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Teams

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Character_Script_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Teams.BP_Character_Teams_C
// 0x0080 (0x1240 - 0x11C0)
class ABP_Character_Teams_C : public ABP_Character_Script_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_Teams_C;               // 0x11C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_Teams_C*           Last_Controlling_Controller;                       // 0x11C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Print_debug_strings_over_character;                // 0x11D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D1[0x7];                                     // 0x11D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, class UClass*>            WaitingSkins;                                      // 0x11D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           CheckWeaponsSkinsHandle;                           // 0x1228(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                 CurrentController;                                 // 0x1230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadoutReceivedAfterRespawn;                       // 0x1238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Character_Teams(int32 EntryPoint);
	void DelayedCheckSkins();
	void CheckSkins(class UClass* Weapon, class UClass* Skin);
	void BndEvt__Inventory_K2Node_ComponentBoundEvent_0_OnStoredWeapon__DelegateSignature(class AWeapon* Weapon);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	bool OnPlayerDied(float DamageAmount, const struct FHitResult& HitResult, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem);
	void GetTeamMemberWidget(class UUI_TvT_PlayerWidget_C** TeamMemberWidget);
	class UClass* GetSkinForGun(class UClass* Weapon);
	void ApplySkinClients(class UClass* Weapon, class UClass* Skin);
	void Die(float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, TSubclassOf<class AItem> InstigatingItem, const struct FHitResult& HitResult);
	void ReceiveTick(float DeltaSeconds);

	void AreCharactersInSameTeam(class AHumanCharacter* OtherCharacter, bool* AreInSameTeam, bool* AreSameCharacter) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Teams_C">();
	}
	static class ABP_Character_Teams_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Teams_C>();
	}
};
static_assert(alignof(ABP_Character_Teams_C) == 0x000010, "Wrong alignment on ABP_Character_Teams_C");
static_assert(sizeof(ABP_Character_Teams_C) == 0x001240, "Wrong size on ABP_Character_Teams_C");
static_assert(offsetof(ABP_Character_Teams_C, UberGraphFrame_BP_Character_Teams_C) == 0x0011C0, "Member 'ABP_Character_Teams_C::UberGraphFrame_BP_Character_Teams_C' has a wrong offset!");
static_assert(offsetof(ABP_Character_Teams_C, Last_Controlling_Controller) == 0x0011C8, "Member 'ABP_Character_Teams_C::Last_Controlling_Controller' has a wrong offset!");
static_assert(offsetof(ABP_Character_Teams_C, Print_debug_strings_over_character) == 0x0011D0, "Member 'ABP_Character_Teams_C::Print_debug_strings_over_character' has a wrong offset!");
static_assert(offsetof(ABP_Character_Teams_C, WaitingSkins) == 0x0011D8, "Member 'ABP_Character_Teams_C::WaitingSkins' has a wrong offset!");
static_assert(offsetof(ABP_Character_Teams_C, CheckWeaponsSkinsHandle) == 0x001228, "Member 'ABP_Character_Teams_C::CheckWeaponsSkinsHandle' has a wrong offset!");
static_assert(offsetof(ABP_Character_Teams_C, CurrentController) == 0x001230, "Member 'ABP_Character_Teams_C::CurrentController' has a wrong offset!");
static_assert(offsetof(ABP_Character_Teams_C, LoadoutReceivedAfterRespawn) == 0x001238, "Member 'ABP_Character_Teams_C::LoadoutReceivedAfterRespawn' has a wrong offset!");

}

