#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSC_TeamManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GameStateComponent_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GSC_TeamManager.BP_GSC_TeamManager_C
// 0x0090 (0x0140 - 0x00B0)
class UBP_GSC_TeamManager_C : public UBP_GameStateComponent_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UBP_GSC_Team_C*>                 Teams;                                             // 0x00B8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                 Team_Class;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Player_Joined_Team;                                // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Player_Left_Team;                                  // 0x00E0(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class UBP_GSC_Team_C*>      SidesMinusTeams;                                   // 0x00F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Player_Joined_Team__DelegateSignature(class UBP_GSC_Team_C* Team, class ABP_PlayerState_Teams_C* Player_State);
	void Player_Left_Team__DelegateSignature(class UBP_GSC_Team_C* Team, class ABP_PlayerState_Teams_C* Player_State);
	void ExecuteUbergraph_BP_GSC_TeamManager(int32 EntryPoint);
	void SetupTeams_Server();
	void Assign_Sides_to_Teams(int32 Round);
	void Player_Leaving(class ABP_PlayerController_Teams_C* Leaving_Player);
	void New_Player_Joining(class ABP_PlayerController_Teams_C* New_Player);
	void ReceiveBeginPlay();
	void Add_Team(int32 Size, class UBP_GSC_Team_C** Team);
	void Find_Team_for_Player(class ABP_PlayerController_Teams_C* Player, class UBP_GSC_Team_C** Team);
	void Are_Teams_Set_and_Full(bool* Teams_Set_and_Full);
	void Get_Teams(TArray<class UBP_GSC_Team_C*>* Teams_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GSC_TeamManager_C">();
	}
	static class UBP_GSC_TeamManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GSC_TeamManager_C>();
	}
};
static_assert(alignof(UBP_GSC_TeamManager_C) == 0x000008, "Wrong alignment on UBP_GSC_TeamManager_C");
static_assert(sizeof(UBP_GSC_TeamManager_C) == 0x000140, "Wrong size on UBP_GSC_TeamManager_C");
static_assert(offsetof(UBP_GSC_TeamManager_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_GSC_TeamManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GSC_TeamManager_C, Teams) == 0x0000B8, "Member 'UBP_GSC_TeamManager_C::Teams' has a wrong offset!");
static_assert(offsetof(UBP_GSC_TeamManager_C, Team_Class) == 0x0000C8, "Member 'UBP_GSC_TeamManager_C::Team_Class' has a wrong offset!");
static_assert(offsetof(UBP_GSC_TeamManager_C, Player_Joined_Team) == 0x0000D0, "Member 'UBP_GSC_TeamManager_C::Player_Joined_Team' has a wrong offset!");
static_assert(offsetof(UBP_GSC_TeamManager_C, Player_Left_Team) == 0x0000E0, "Member 'UBP_GSC_TeamManager_C::Player_Left_Team' has a wrong offset!");
static_assert(offsetof(UBP_GSC_TeamManager_C, SidesMinusTeams) == 0x0000F0, "Member 'UBP_GSC_TeamManager_C::SidesMinusTeams' has a wrong offset!");

}

