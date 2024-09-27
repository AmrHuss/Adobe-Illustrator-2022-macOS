#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerController_AirDropModular

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerController_Matches_classes.hpp"
#include "E_PlayerMarkedStates_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerController_AirDropModular.BP_PlayerController_AirDropModular_C
// 0x0048 (0x0DD8 - 0x0D90)
class ABP_PlayerController_AirDropModular_C final : public ABP_PlayerController_Matches_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerController_AirDropModular_C; // 0x0D90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MatchMusicComponent_C*              Match_Music;                                       // 0x0D98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_AirDropModular_Debug_C*             Game_Mode_Debug_UI;                                // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Debug_Events_Sent;                                 // 0x0DA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DAC[0x4];                                      // 0x0DAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Debug_Events_Failed;                               // 0x0DB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Debug_Event_ID;                                    // 0x0DC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCarryingRewardItem;                              // 0x0DC4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DC5[0x3];                                      // 0x0DC5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           LookForRewardItemTimer;                            // 0x0DC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DoesShowPlayerPosition;                            // 0x0DD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerController_AirDropModular(int32 EntryPoint);
	void StopLookingForRewardItem();
	void Client_OtherPlayerLootedAirdrop();
	void Client_PriorTo_Airdrop();
	void Client_PlayerLootedAirdrop();
	void TriggerPlayerMarkedBlink(E_PlayerMarkedStates PlayerMarkedState);
	void HidePlayerMarkedStatus(E_PlayerMarkedStates Player_Marked_State);
	void Show_Player_Marked_Status(E_PlayerMarkedStates Player_Marked_State);
	void Match_Has_Started();
	void StartLookingForRewardItem();
	void LookForRewardItem();
	void Destroy_ADM_Component(class UBP_PCComponent_ADM_C* ADM_PCComponent);
	void Deregister_Debug_UI();
	void Register_Debug_UI();
	void Print_Component_List();
	void PossessedServer(class ABP_Character_C* Possessed_Character);
	void LeaveSession(class FName MapToReturnTo_0);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerController_AirDropModular_C">();
	}
	static class ABP_PlayerController_AirDropModular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_AirDropModular_C>();
	}
};
static_assert(alignof(ABP_PlayerController_AirDropModular_C) == 0x000008, "Wrong alignment on ABP_PlayerController_AirDropModular_C");
static_assert(sizeof(ABP_PlayerController_AirDropModular_C) == 0x000DD8, "Wrong size on ABP_PlayerController_AirDropModular_C");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, UberGraphFrame_BP_PlayerController_AirDropModular_C) == 0x000D90, "Member 'ABP_PlayerController_AirDropModular_C::UberGraphFrame_BP_PlayerController_AirDropModular_C' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, Match_Music) == 0x000D98, "Member 'ABP_PlayerController_AirDropModular_C::Match_Music' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, Game_Mode_Debug_UI) == 0x000DA0, "Member 'ABP_PlayerController_AirDropModular_C::Game_Mode_Debug_UI' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, Debug_Events_Sent) == 0x000DA8, "Member 'ABP_PlayerController_AirDropModular_C::Debug_Events_Sent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, Debug_Events_Failed) == 0x000DB0, "Member 'ABP_PlayerController_AirDropModular_C::Debug_Events_Failed' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, Debug_Event_ID) == 0x000DC0, "Member 'ABP_PlayerController_AirDropModular_C::Debug_Event_ID' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, IsCarryingRewardItem) == 0x000DC4, "Member 'ABP_PlayerController_AirDropModular_C::IsCarryingRewardItem' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, LookForRewardItemTimer) == 0x000DC8, "Member 'ABP_PlayerController_AirDropModular_C::LookForRewardItemTimer' has a wrong offset!");
static_assert(offsetof(ABP_PlayerController_AirDropModular_C, DoesShowPlayerPosition) == 0x000DD0, "Member 'ABP_PlayerController_AirDropModular_C::DoesShowPlayerPosition' has a wrong offset!");

}

