#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChallengeSlot

#include "Basic.hpp"

#include "E_ChallengeManagerState_structs.hpp"
#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_ChallengeSlotState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChallengeSlot.BP_ChallengeSlot_C
// 0x01B0 (0x03D0 - 0x0220)
class ABP_ChallengeSlot_C final : public AChallengeSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Slot_ID;                                           // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Challenge_Name;                                    // 0x022C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Timestamp;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Current_Progress_During_Initialization;            // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeCondition_Base_C*          Challenge_Condition;                               // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FChallengeList                         Challenge_Settings;                                // 0x0250(0x0100)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_ChallengeSlotState                          State;                                             // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             State_Has_Changed;                                 // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Initialization_Is_Complete;                        // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Rewards_Claim_Reply;                               // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Challenge_Cancellation_Reply;                      // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Challenge_Progress_Updated;                        // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundWave*                             Voice_Line;                                        // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SlotCategory;                                      // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         ReRollPrice;                                       // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CompletedTimestamp;                                // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void State_Has_Changed__DelegateSignature(class ABP_ChallengeSlot_C* Slot);
	void Initialization_Is_Complete__DelegateSignature(class ABP_ChallengeSlot_C* Slot);
	void Rewards_Claim_Reply__DelegateSignature(bool Success, TArray<struct FCloudItemInfo>& Rewards);
	void Challenge_Cancellation_Reply__DelegateSignature(bool Success);
	void Challenge_Progress_Updated__DelegateSignature(class ABP_ChallengeSlot_C* Slot, int32 New_Progress);
	void ExecuteUbergraph_BP_ChallengeSlot(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Initialize_Slot(int32 SlotId, const class FString& SlotCategory_0, class FName Challenge_Name_0, const struct FDateTime& Timestamp_0, const struct FDateTime& Time_Completed, int32 Progress, int32 ReRollPrice_0);
	void OnLoaded_303A9E7341428F48F05BE78A27BD16A5(class UObject* Loaded);
	void OnLoaded_B08996E843B69641864BC48BCA5FB88E(TSubclassOf<class UObject> Loaded);
	void Get_Slot_ID(int32* Slot_ID_0);
	void Get_Slot_State(E_ChallengeSlotState* Slot_State);
	void Get_Challenge_Category(EChallengeCategory* Category);
	void Get_Current_Progress(int32* Current_Progress);
	void Get_Maximum_Progress(int32* Maximum_Progress);
	void Get_Title_Text(class FText* Title_Text);
	void Get_Condition_Text(class FText* Condition_Text);
	void Get_Description_Text(class FText* Description_Text);
	void Get_Rewards_List(TArray<struct FChallengeReward>* Rewards);
	void Request_Rewards_Claim();
	void Request_Challenge_Cancellation();
	void Claim_Rewards(bool Success, const struct FDateTime& Timestamp_0, TArray<struct FChallengeReward>& Rewards);
	void Cancel_Challenge(bool Success, const struct FDateTime& Timestamp_0);
	void Get_Timestamp(struct FDateTime* Timestamp_0);
	void Update_Progress(bool Success, int32 New_Progress);
	void Get_Challenge_Name(class FName* Challenge_Name_0);
	void Condition_Progress_Updated(int32 New_Progress);
	void Assign_Slot_ID(int32 Slot_ID_0);
	void Print_Status();
	void Get_Challenge_Condition_Type(class UClass** Challenge_Name_0);
	void Get_Challenge_Settings(struct FChallengeList* Challenge_Settings_0);
	void Get_Challenge_Voice_Line(class USoundWave** Voice_Line_0);
	void ResetAfterRerollFailed();
	void GetRelativeProgress(float* RelativeProgress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChallengeSlot_C">();
	}
	static class ABP_ChallengeSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ChallengeSlot_C>();
	}
};
static_assert(alignof(ABP_ChallengeSlot_C) == 0x000008, "Wrong alignment on ABP_ChallengeSlot_C");
static_assert(sizeof(ABP_ChallengeSlot_C) == 0x0003D0, "Wrong size on ABP_ChallengeSlot_C");
static_assert(offsetof(ABP_ChallengeSlot_C, UberGraphFrame) == 0x000220, "Member 'ABP_ChallengeSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Slot_ID) == 0x000228, "Member 'ABP_ChallengeSlot_C::Slot_ID' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Challenge_Name) == 0x00022C, "Member 'ABP_ChallengeSlot_C::Challenge_Name' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Timestamp) == 0x000238, "Member 'ABP_ChallengeSlot_C::Timestamp' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Current_Progress_During_Initialization) == 0x000240, "Member 'ABP_ChallengeSlot_C::Current_Progress_During_Initialization' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Challenge_Condition) == 0x000248, "Member 'ABP_ChallengeSlot_C::Challenge_Condition' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Challenge_Settings) == 0x000250, "Member 'ABP_ChallengeSlot_C::Challenge_Settings' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, State) == 0x000350, "Member 'ABP_ChallengeSlot_C::State' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, State_Has_Changed) == 0x000358, "Member 'ABP_ChallengeSlot_C::State_Has_Changed' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Initialization_Is_Complete) == 0x000368, "Member 'ABP_ChallengeSlot_C::Initialization_Is_Complete' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Rewards_Claim_Reply) == 0x000378, "Member 'ABP_ChallengeSlot_C::Rewards_Claim_Reply' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Challenge_Cancellation_Reply) == 0x000388, "Member 'ABP_ChallengeSlot_C::Challenge_Cancellation_Reply' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Challenge_Progress_Updated) == 0x000398, "Member 'ABP_ChallengeSlot_C::Challenge_Progress_Updated' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, Voice_Line) == 0x0003A8, "Member 'ABP_ChallengeSlot_C::Voice_Line' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, SlotCategory) == 0x0003B0, "Member 'ABP_ChallengeSlot_C::SlotCategory' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, ReRollPrice) == 0x0003C0, "Member 'ABP_ChallengeSlot_C::ReRollPrice' has a wrong offset!");
static_assert(offsetof(ABP_ChallengeSlot_C, CompletedTimestamp) == 0x0003C8, "Member 'ABP_ChallengeSlot_C::CompletedTimestamp' has a wrong offset!");

}

