#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_ADM_CallIn_Timed

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_GMComponent_ADM_CallIn_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GMComponent_ADM_CallIn_Timed.BP_GMComponent_ADM_CallIn_Timed_C
// 0x0050 (0x0188 - 0x0138)
class UBP_GMComponent_ADM_CallIn_Timed_C final : public UBP_GMComponent_ADM_CallIn_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GMComponent_ADM_CallIn_Timed_C;  // 0x0138(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Air_Drop_Delay;                                    // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AirDropLocation_C*                  Air_Drop_Location;                                 // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Air_Drop_Timer;                                    // 0x0150(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Player_Count_for_Premature_Air_Drop;               // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Air_Drop_Called_In;                                // 0x015C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Drop_Zone_Marker_Draw_Radius;                      // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Drop_Zone_Marker_Error_Radius;                     // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Drop_Zone_Marker_Location;                         // 0x0168(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PriorToDrop_TimerSubtrahend;                       // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Minute_To_Airdrop_Left;                            // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Minute_To_Airdrop_Left__DelegateSignature();
	void ExecuteUbergraph_BP_GMComponent_ADM_CallIn_Timed(int32 EntryPoint);
	void One_Minute_To_Airdrop_Left();
	void PriorToAirdrop_CallEventSystemDispatcher();
	void Update_Airdrop_Location(class ABP_AirDropLocation_C* Drop_Zone_Actor);
	void Player_Logged_In(class ABP_PlayerController_AirDropModular_C* New_Controller);
	void Check_for_Premature_Air_Drop();
	void Player_Logging_Out(class ABP_PlayerController_AirDropModular_C* Exiting_Controller);
	void Coundown_Expired();
	void Match_Has_Started();
	void Initialize_Component();
	void Hide_Passive_UI();
	void Show_Passive_UI();
	void Adjust_Player_Count_for_Premature_Air_Drop(int32 Delta);
	void Game_Mode_Toggled(bool Game_Mode_Is_Running);
	void Initialize_Bindings(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GMComponent_ADM_CallIn_Timed_C">();
	}
	static class UBP_GMComponent_ADM_CallIn_Timed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GMComponent_ADM_CallIn_Timed_C>();
	}
};
static_assert(alignof(UBP_GMComponent_ADM_CallIn_Timed_C) == 0x000008, "Wrong alignment on UBP_GMComponent_ADM_CallIn_Timed_C");
static_assert(sizeof(UBP_GMComponent_ADM_CallIn_Timed_C) == 0x000188, "Wrong size on UBP_GMComponent_ADM_CallIn_Timed_C");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, UberGraphFrame_BP_GMComponent_ADM_CallIn_Timed_C) == 0x000138, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::UberGraphFrame_BP_GMComponent_ADM_CallIn_Timed_C' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Air_Drop_Delay) == 0x000140, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Air_Drop_Delay' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Air_Drop_Location) == 0x000148, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Air_Drop_Location' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Air_Drop_Timer) == 0x000150, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Air_Drop_Timer' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Player_Count_for_Premature_Air_Drop) == 0x000158, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Player_Count_for_Premature_Air_Drop' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Air_Drop_Called_In) == 0x00015C, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Air_Drop_Called_In' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Drop_Zone_Marker_Draw_Radius) == 0x000160, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Drop_Zone_Marker_Draw_Radius' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Drop_Zone_Marker_Error_Radius) == 0x000164, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Drop_Zone_Marker_Error_Radius' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Drop_Zone_Marker_Location) == 0x000168, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Drop_Zone_Marker_Location' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, PriorToDrop_TimerSubtrahend) == 0x000174, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::PriorToDrop_TimerSubtrahend' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_CallIn_Timed_C, Minute_To_Airdrop_Left) == 0x000178, "Member 'UBP_GMComponent_ADM_CallIn_Timed_C::Minute_To_Airdrop_Left' has a wrong offset!");

}

