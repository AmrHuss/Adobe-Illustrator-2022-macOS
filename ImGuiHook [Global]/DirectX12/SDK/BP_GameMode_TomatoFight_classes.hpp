#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_TomatoFight

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_GameMode_Teams_classes.hpp"
#include "EFightVariant_structs.hpp"
#include "EGunFightRole_structs.hpp"
#include "EGunFightWinReason_structs.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_TomatoFight.BP_GameMode_TomatoFight_C
// 0x0128 (0x0600 - 0x04D8)
class ABP_GameMode_TomatoFight_C final : public ABP_GameMode_Teams_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameMode_TomatoFight_C;          // 0x04D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MatchInfoComponent_C*               BP_MatchInfoComponent;                             // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ObjectiveSpawnPoint_GunFight_C*> Objective_Spawn_Positions;                         // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Objective_TomatoFight_C*            Objective;                                         // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Round_Timer;                                       // 0x0500(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Round_Time;                                        // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Round_Active;                                      // 0x050C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Match_In_Progress;                              // 0x050D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50E[0x2];                                      // 0x050E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Players_Respawned_This_Round;                      // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514[0x4];                                      // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           PreRound_Timer;                                    // 0x0518(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Spawn_Objective_Time_From_End_Turn;                // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Spawn_Objective_Timer;                             // 0x0528(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedSettingID;                                 // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewSelectedSettingID;                              // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HighestSettingID;                                  // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_Barricade_GunFight_C*>       Barricades_On_Map;                                 // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Max_Allowed_Teamkills;                             // 0x0550(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_Allowed_Teamdamage;                            // 0x0554(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rounds_Someone_Won;                                // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55C[0x4];                                      // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ObjectiveSpawnPoint_GunFight_C*     This_Round_Objective_Spawn_Point;                  // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG_PRINT_TO_SCREEN;                             // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Player_Result_Sending_Started;                     // 0x0569(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56A[0x2];                                      // 0x056A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Expected_Player_Results_Sent_Count;                // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_PlayerController_TomatoFight_C*> Players_To_Register_When_Match_ID_Available;       // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         Remaining_Round_Time_At_Pause;                     // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584[0x4];                                      // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_PlayerState_TomatoFight_C*>  Players_Kicked_From_Match;                         // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Score_treshold_1;                                  // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Score_treshold_2;                                  // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Score_treshold_3;                                  // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class ABP_PlayerController_C*, class FName> PlayerRewardsTiers;                                // 0x05A8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Score_treshold_4;                                  // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GameMode_TomatoFight(int32 EntryPoint);
	void Report_Enemy_Hit(float Damage, class AHumanCharacter* Attacking_Character);
	void K2_OnLogout(class AController* ExitingController);
	void Kick_Player_For_Teamkilling(class ABP_PlayerState_TomatoFight_C* Player_State);
	void Report_Team_Damage(float Damage, class AHumanCharacter* Attacking_Character);
	void None_Won();
	void Objective_Used(class AHumanCharacter* Character);
	void Increment_Rounds_and_assign_sides_to_teams();
	void Second_On_Server_Passed();
	void Player_Connected_To_Match(class ABP_PlayerController_TomatoFight_C* Player_Controller);
	void Attackers_Won(EGunFightWinReason Win_Reason);
	void Defenders_Won(EGunFightWinReason Win_Reason);
	void Player_Died(class ABP_Character_TomatoFight_C* Victim_Character, class AHumanCharacter* Killer_Character, EDamageType DamageType, class UClass* Instigating_Item, bool IsHeadshot);
	void Move_To_Next_Phase();
	void Match_Finish();
	void Match_Cleanup();
	void Start_the_Round();
	void Spawn_Objective();
	void Initialize_New_Round();
	void Round_Timer_Expired();
	void Round_Cleanup();
	void Players_Result_Sent_To_Cloud(const struct FCloudRequestResult& RequestResult, class AHumanPlayerController* Player, const struct FUserMatchReward& Reward);
	void Match_ID_Available(const class FString& Match_ID);
	void Player_Cloud_Id_available(const class FString& Userid);
	void Register_Player_Match_ID(class ABP_PlayerController_TomatoFight_C* Player_Controller);
	void All_Player_Results_Sent();
	void Match_Unregistered_From_Cloud(const struct FCloudRequestResult& RequestResult);
	void Match_Registered_To_Cloud(const struct FCloudRequestResult& RequestResult, const class FString& MatchID);
	void User_Registered_To_Cloud(const struct FCloudRequestResult& RequestResult, class AHumanPlayerController* Player);
	void Cheat_SkipMatch(bool bAttackersWon);
	void Cheat_AddScore(class ABP_PlayerController_TomatoFight_C* Controller, class FName ScoreEvent);
	void Set_Pause_Match(bool Pause);
	void CheatEndMatch(int32 WinnerTeam);
	void SetSettingID(int32 Input);
	void Find_Objective_Spawn_Positions();
	void Spawn_Objective_On_Server();
	void Destroy_Objective_On_Server();
	void Check_for_Winner(bool* Winner_Found);
	void Get_Attacking_Team(class UBP_GSC_Team_Raid_C** Attacking_Team);
	void Get_Defending_Team(class UBP_GSC_Team_Raid_C** Defending_Team);
	void Spawn_All_Players();
	void Get_Round_Winner_by_Player_Elimination(class ABP_PlayerController_Teams_C* Killed_Player_Controller, bool* Attackers_Won, bool* Defenders_Won);
	void Get_All_Players(TArray<class ABP_PlayerController_TomatoFight_C*>* All_Players);
	void Spawn_Player(class AActor* Player_Start, class ABP_PlayerController_C* Player_Controller);
	void Get_Player_Spawn_Position(class ABP_PlayerController_TomatoFight_C* Player_Controller, class AActor** Spawn_Position);
	void Remove_Objective_Markers();
	void Clean_Map_Of_Corpse_Containers();
	void Get_Player_Statistics(class AHumanPlayerController* Player_Controller, bool* Found, struct FStruct_GunFightStatistics* Statistic);
	void Teleport_All_Players_To_Random_Spawn();
	void Get_Random_Spawn_Position(class AActor** Spawn_Position);
	void Set_All_Players_Invicibility(bool Set_Invincible, bool bLockMovement);
	void Are_Teams_Full(bool* Teams_Full);
	void Player_Died_Update_Statistic(class AHumanCharacter* Victim_Character, class AHumanCharacter* Killer_Character, bool Is_Headshot);
	void Increase_Objective_Statistic(class AHumanCharacter* Character);
	void Get_Team_With_More_Health(class UBP_GSC_Team_Raid_C** Team_With_More_Health);
	void Assign_New_Setting_ID();
	void Replicate_Players_Kill_Feed(class AHumanCharacter* Victim, class AHumanCharacter* Killer, EDamageType Damage_Type, class UClass* Instigating_Item, bool Is_Headshot);
	void Evaluate_Score(const struct FStruct_GunFightStatistics& Statistic, struct FStruct_GunFightStatistics* Evaluated_Statistic);
	void Get_Score_Value_From_Table(class FName Score_Type, int32* Score);
	void Find_Barricades();
	void Set_Barricades_Active_State(bool Is_active);
	void Get_Survivor_Count(int32* Attacker_Survivors, int32* Defender_Survivors);
	void Increase_TeamDamage_Statistic(float Damage, class AHumanCharacter* Character);
	void Assign_Roles_To_Players();
	void Select_Objective_Spawn_Point();
	void Show_Players_Objective_Spawn_Position();
	void Increase_EnemyHit_Statistic(float Damage, class AHumanCharacter* Character);
	void Process_All_Player_Results_on_Match_End();
	void Process_Single_Player_Result(class ABP_PlayerState_TomatoFight_C* Player_State, bool Is_Winner, bool End_Of_Match);
	bool OnPlayerDied(class AHumanCharacter* Player, class AHumanCharacter* Killer);
	void GetTeammates(class AHumanPlayerController* Player, TArray<class AHumanPlayerController*>* OutControllerList);
	void ResetAllSpawns();
	void GetSpawnForTeam(TArray<class ABP_PlayerStart_Raid_C*>& PlayerStarts_0, class ABP_PlayerController_TomatoFight_C* PlayerController, class AActor** Random_Secondary_Start);
	void GetPlayerTierOfReward(class ABP_PlayerController_C* Player, class FName* Tier);
	void CheatIncreaseScore(class ABP_PlayerController_TomatoFight_C* Controller, class FName ScoreEvent);
	void GetGameModeVariant(EFightVariant* Variant);
	void TomatoFightRewardsDecision(bool IsWinner, int32 Score, TArray<class FString>* Rewards);
	void SnowballFightRewardsDecision(bool IsWinner, int32 Score, TArray<class FString>* Rewards);
	void SendRoundFinishAnalytics();
	void PumpkinFightRewardsDecision(bool IsWinner, int32 Score, TArray<class FString>* Rewards);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Match_Initialization();
	void Round_In_Progress();
	void Round_Start();
	void Round_Finish();
	void Round_Initialization();
	bool PlayerCanRestart(class APlayerController* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_TomatoFight_C">();
	}
	static class ABP_GameMode_TomatoFight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_TomatoFight_C>();
	}
};
static_assert(alignof(ABP_GameMode_TomatoFight_C) == 0x000008, "Wrong alignment on ABP_GameMode_TomatoFight_C");
static_assert(sizeof(ABP_GameMode_TomatoFight_C) == 0x000600, "Wrong size on ABP_GameMode_TomatoFight_C");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, UberGraphFrame_BP_GameMode_TomatoFight_C) == 0x0004D8, "Member 'ABP_GameMode_TomatoFight_C::UberGraphFrame_BP_GameMode_TomatoFight_C' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, BP_MatchInfoComponent) == 0x0004E0, "Member 'ABP_GameMode_TomatoFight_C::BP_MatchInfoComponent' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Objective_Spawn_Positions) == 0x0004E8, "Member 'ABP_GameMode_TomatoFight_C::Objective_Spawn_Positions' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Objective) == 0x0004F8, "Member 'ABP_GameMode_TomatoFight_C::Objective' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Round_Timer) == 0x000500, "Member 'ABP_GameMode_TomatoFight_C::Round_Timer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Round_Time) == 0x000508, "Member 'ABP_GameMode_TomatoFight_C::Round_Time' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Round_Active) == 0x00050C, "Member 'ABP_GameMode_TomatoFight_C::Round_Active' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Is_Match_In_Progress) == 0x00050D, "Member 'ABP_GameMode_TomatoFight_C::Is_Match_In_Progress' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Players_Respawned_This_Round) == 0x000510, "Member 'ABP_GameMode_TomatoFight_C::Players_Respawned_This_Round' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, PreRound_Timer) == 0x000518, "Member 'ABP_GameMode_TomatoFight_C::PreRound_Timer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Spawn_Objective_Time_From_End_Turn) == 0x000520, "Member 'ABP_GameMode_TomatoFight_C::Spawn_Objective_Time_From_End_Turn' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Spawn_Objective_Timer) == 0x000528, "Member 'ABP_GameMode_TomatoFight_C::Spawn_Objective_Timer' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, SelectedSettingID) == 0x000530, "Member 'ABP_GameMode_TomatoFight_C::SelectedSettingID' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, NewSelectedSettingID) == 0x000534, "Member 'ABP_GameMode_TomatoFight_C::NewSelectedSettingID' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, HighestSettingID) == 0x000538, "Member 'ABP_GameMode_TomatoFight_C::HighestSettingID' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Barricades_On_Map) == 0x000540, "Member 'ABP_GameMode_TomatoFight_C::Barricades_On_Map' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Max_Allowed_Teamkills) == 0x000550, "Member 'ABP_GameMode_TomatoFight_C::Max_Allowed_Teamkills' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Max_Allowed_Teamdamage) == 0x000554, "Member 'ABP_GameMode_TomatoFight_C::Max_Allowed_Teamdamage' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Rounds_Someone_Won) == 0x000558, "Member 'ABP_GameMode_TomatoFight_C::Rounds_Someone_Won' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, This_Round_Objective_Spawn_Point) == 0x000560, "Member 'ABP_GameMode_TomatoFight_C::This_Round_Objective_Spawn_Point' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, DEBUG_PRINT_TO_SCREEN) == 0x000568, "Member 'ABP_GameMode_TomatoFight_C::DEBUG_PRINT_TO_SCREEN' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Player_Result_Sending_Started) == 0x000569, "Member 'ABP_GameMode_TomatoFight_C::Player_Result_Sending_Started' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Expected_Player_Results_Sent_Count) == 0x00056C, "Member 'ABP_GameMode_TomatoFight_C::Expected_Player_Results_Sent_Count' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Players_To_Register_When_Match_ID_Available) == 0x000570, "Member 'ABP_GameMode_TomatoFight_C::Players_To_Register_When_Match_ID_Available' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Remaining_Round_Time_At_Pause) == 0x000580, "Member 'ABP_GameMode_TomatoFight_C::Remaining_Round_Time_At_Pause' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Players_Kicked_From_Match) == 0x000588, "Member 'ABP_GameMode_TomatoFight_C::Players_Kicked_From_Match' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Score_treshold_1) == 0x000598, "Member 'ABP_GameMode_TomatoFight_C::Score_treshold_1' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Score_treshold_2) == 0x00059C, "Member 'ABP_GameMode_TomatoFight_C::Score_treshold_2' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Score_treshold_3) == 0x0005A0, "Member 'ABP_GameMode_TomatoFight_C::Score_treshold_3' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, PlayerRewardsTiers) == 0x0005A8, "Member 'ABP_GameMode_TomatoFight_C::PlayerRewardsTiers' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_TomatoFight_C, Score_treshold_4) == 0x0005F8, "Member 'ABP_GameMode_TomatoFight_C::Score_treshold_4' has a wrong offset!");

}

