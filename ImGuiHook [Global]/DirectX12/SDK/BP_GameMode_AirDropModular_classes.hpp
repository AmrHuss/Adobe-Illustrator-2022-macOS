#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_AirDropModular

#include "Basic.hpp"

#include "BP_GameMode_Matches_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_AirDropModular.BP_GameMode_AirDropModular_C
// 0x0178 (0x06F8 - 0x0580)
class ABP_GameMode_AirDropModular_C : public ABP_GameMode_Matches_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GameMode_AirDropModular_C;       // 0x0580(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ADM_ActorLocationsManager_C*        Locations_Manager;                                 // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_Debug_C*            GMC_Debug;                                         // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_Radiation_C*            Radiation_Component;                               // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GameModeComponent_AirDrop_C*        AirDrop_Component;                                 // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_GMComponent_ADM_CallIn_Base_C*> Call_In_Components;                                // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_GMComponent_ADM_Container_Base_C*> Container_Components;                              // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_GMComponent_ADM_PostDrop_Base_C*> Post_Drop_Components;                              // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_GMComponent_ADM_Radiation_Base_C*> Radiation_Components;                              // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_GMComponent_ADM_Reward_Base_C*> Reward_Components;                                 // 0x05E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             Container_Spawned;                                 // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Container_Touched_Down;                            // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UClass*>                         Container_Loot;                                    // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Reward_Loot;                                       // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             Drop_Zone_Determined;                              // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Spawn_Container;                                   // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UBP_GMComponent_ADM_Base_C*>     Other_Components;                                  // 0x0658(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBP_GMComponent_ADM_Debug_C*            Debug_Component;                                   // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialization_Complete;                           // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671[0x7];                                      // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Game_Mode_Toggled;                                 // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Radiation_Wave_Activated;                          // 0x0688(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Radiation_Wave_Determined;                         // 0x0698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_Game_Mode_Running;                              // 0x06A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A9[0x7];                                      // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Player_Opened_Debug_UI;                            // 0x06B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Player_Closed_Debug_UI;                            // 0x06C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ABP_PlayerController_AirDropModular_C*> Players_in_Debug_UI;                               // 0x06D0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Bindings_Initialization_Complete;                  // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Components_Initialization_Complete;                // 0x06E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E2[0x2];                                      // 0x06E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Module_IDs_Used;                                   // 0x06E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Airdrop_Timer_Notify;                              // 0x06E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Container_Spawned__DelegateSignature(class ABP_AirDropContainer_Base_C* Container);
	void Container_Touched_Down__DelegateSignature(class ABP_AirDropContainer_Base_C* Container);
	void Drop_Zone_Determined__DelegateSignature(class ABP_AirDropLocation_C* Drop_Zone_Actor);
	void Spawn_Container__DelegateSignature(class ABP_AirDropLocation_C* Drop_Zone_Actor);
	void Game_Mode_Toggled__DelegateSignature(bool Game_Mode_Is_Running);
	void Radiation_Wave_Activated__DelegateSignature();
	void Radiation_Wave_Determined__DelegateSignature();
	void Player_Opened_Debug_UI__DelegateSignature(class ABP_PlayerController_AirDropModular_C* Player_Controller);
	void Player_Closed_Debug_UI__DelegateSignature(class ABP_PlayerController_AirDropModular_C* Player_Controller);
	void Airdrop_Timer_Notify__DelegateSignature(const struct FTimerHandle& Airdrop_Timer, int32 Airdrop_Timer_Duration);
	void ExecuteUbergraph_BP_GameMode_AirDropModular(int32 EntryPoint);
	void Destroy_ADM_Component(class UBP_GMComponent_ADM_Base_C* ADM_GMComponent);
	void Add_ADM_Component(class UClass* Module_Type);
	void Deregister_Debug_UI(class ABP_PlayerController_AirDropModular_C* Player_Controller);
	void Register_Debug_UI(class ABP_PlayerController_AirDropModular_C* Player_Controller);
	void Container_Touched_Down_Event(class ABP_AirDropContainer_Base_C* Container);
	void Start_Analytics();
	void Get_All_ADM_Components(TArray<class UBP_GMComponent_ADM_Base_C*>* Components);
	void Register_ADM_Component(class UBP_GMComponent_ADM_Base_C* Component, int32* Assigned_ID);
	void Deregister_ADM_Component(class UBP_GMComponent_ADM_Base_C* Component, bool* Successful);
	void Print_Component_List();
	void Get_Game_Mode_Description(class FText* Game_Mode_Description);
	void Set_Game_Mode_Description(const class FText& New_Game_Mode_Description, bool* Duplicated_to_Game_State);
	void Get_Is_Game_Mode_Running(bool* Is_Game_Mode_Running_0);
	void Set_Is_Game_Mode_Running(bool Running);
	void Get_Module_Descriptions(TArray<class FText>* Module_Descriptions);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void SLM_DelayedOnPostLogin(class APlayerController* Object);
	void SubLevelsLoaded_DelayedBeginPlay(bool SLM_Load_Complete);
	void K2_OnLogout(class AController* ExitingController);
	void IsWinner(class APlayerController* PlayerController, bool* Param_IsWinner_0);
	void Get_Rewards_For_Player(class APlayerController* Controller, TArray<class FString>* Rewards);
	bool ReadyToStartMatch();

	void Get_Default_Game_Mode_Description(class FText* Game_Mode_Description) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_AirDropModular_C">();
	}
	static class ABP_GameMode_AirDropModular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_AirDropModular_C>();
	}
};
static_assert(alignof(ABP_GameMode_AirDropModular_C) == 0x000008, "Wrong alignment on ABP_GameMode_AirDropModular_C");
static_assert(sizeof(ABP_GameMode_AirDropModular_C) == 0x0006F8, "Wrong size on ABP_GameMode_AirDropModular_C");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, UberGraphFrame_BP_GameMode_AirDropModular_C) == 0x000580, "Member 'ABP_GameMode_AirDropModular_C::UberGraphFrame_BP_GameMode_AirDropModular_C' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Locations_Manager) == 0x000588, "Member 'ABP_GameMode_AirDropModular_C::Locations_Manager' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, GMC_Debug) == 0x000590, "Member 'ABP_GameMode_AirDropModular_C::GMC_Debug' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Radiation_Component) == 0x000598, "Member 'ABP_GameMode_AirDropModular_C::Radiation_Component' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, AirDrop_Component) == 0x0005A0, "Member 'ABP_GameMode_AirDropModular_C::AirDrop_Component' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Call_In_Components) == 0x0005A8, "Member 'ABP_GameMode_AirDropModular_C::Call_In_Components' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Container_Components) == 0x0005B8, "Member 'ABP_GameMode_AirDropModular_C::Container_Components' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Post_Drop_Components) == 0x0005C8, "Member 'ABP_GameMode_AirDropModular_C::Post_Drop_Components' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Radiation_Components) == 0x0005D8, "Member 'ABP_GameMode_AirDropModular_C::Radiation_Components' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Reward_Components) == 0x0005E8, "Member 'ABP_GameMode_AirDropModular_C::Reward_Components' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Container_Spawned) == 0x0005F8, "Member 'ABP_GameMode_AirDropModular_C::Container_Spawned' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Container_Touched_Down) == 0x000608, "Member 'ABP_GameMode_AirDropModular_C::Container_Touched_Down' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Container_Loot) == 0x000618, "Member 'ABP_GameMode_AirDropModular_C::Container_Loot' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Reward_Loot) == 0x000628, "Member 'ABP_GameMode_AirDropModular_C::Reward_Loot' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Drop_Zone_Determined) == 0x000638, "Member 'ABP_GameMode_AirDropModular_C::Drop_Zone_Determined' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Spawn_Container) == 0x000648, "Member 'ABP_GameMode_AirDropModular_C::Spawn_Container' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Other_Components) == 0x000658, "Member 'ABP_GameMode_AirDropModular_C::Other_Components' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Debug_Component) == 0x000668, "Member 'ABP_GameMode_AirDropModular_C::Debug_Component' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Initialization_Complete) == 0x000670, "Member 'ABP_GameMode_AirDropModular_C::Initialization_Complete' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Game_Mode_Toggled) == 0x000678, "Member 'ABP_GameMode_AirDropModular_C::Game_Mode_Toggled' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Radiation_Wave_Activated) == 0x000688, "Member 'ABP_GameMode_AirDropModular_C::Radiation_Wave_Activated' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Radiation_Wave_Determined) == 0x000698, "Member 'ABP_GameMode_AirDropModular_C::Radiation_Wave_Determined' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Is_Game_Mode_Running) == 0x0006A8, "Member 'ABP_GameMode_AirDropModular_C::Is_Game_Mode_Running' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Player_Opened_Debug_UI) == 0x0006B0, "Member 'ABP_GameMode_AirDropModular_C::Player_Opened_Debug_UI' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Player_Closed_Debug_UI) == 0x0006C0, "Member 'ABP_GameMode_AirDropModular_C::Player_Closed_Debug_UI' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Players_in_Debug_UI) == 0x0006D0, "Member 'ABP_GameMode_AirDropModular_C::Players_in_Debug_UI' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Bindings_Initialization_Complete) == 0x0006E0, "Member 'ABP_GameMode_AirDropModular_C::Bindings_Initialization_Complete' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Components_Initialization_Complete) == 0x0006E1, "Member 'ABP_GameMode_AirDropModular_C::Components_Initialization_Complete' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Module_IDs_Used) == 0x0006E4, "Member 'ABP_GameMode_AirDropModular_C::Module_IDs_Used' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_AirDropModular_C, Airdrop_Timer_Notify) == 0x0006E8, "Member 'ABP_GameMode_AirDropModular_C::Airdrop_Timer_Notify' has a wrong offset!");

}

