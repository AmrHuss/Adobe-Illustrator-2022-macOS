#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PCComponent_ADM.BP_PCComponent_ADM_C
// 0x0038 (0x00E8 - 0x00B0)
class UBP_PCComponent_ADM_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GMComponent_ADM_Base_C*             Game_Mode_Component;                               // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GSComponent_ADM_C*                  Game_State_Component;                              // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ADM_Debug_Tab_C*                    Debug_UI_Tab;                                      // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Debug_UI_Screen_Class;                             // 0x00D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Module_ID;                                         // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Client_Initialization_Timeout;                     // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Elapsed_Client_Initialization_Time;                // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PCComponent_ADM(int32 EntryPoint);
	void Character_Possessed_on_Server(class ABP_Character_C* Possessed_Character);
	void Registration_on_Client_Failed();
	void Register_with_Game_State_Based_on_Module_ID();
	void Registration_on_Client_Completed();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void Register_with_Game_State_on_Client(class UBP_GSComponent_ADM_C* Game_State_Component_0, int32 Module_ID_0);
	void Flash_Debug_UI_Tab_Label(int32 Number_of_Flashes, const struct FLinearColor& Flash_Label_Color);
	void Get_Player_Controller(class ABP_PlayerController_AirDropModular_C** Player_Controller);
	void Get_Player_Character(class AHumanCharacter** Human_Character);
	void Get_Player_State(class APlayerState** PlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PCComponent_ADM_C">();
	}
	static class UBP_PCComponent_ADM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PCComponent_ADM_C>();
	}
};
static_assert(alignof(UBP_PCComponent_ADM_C) == 0x000008, "Wrong alignment on UBP_PCComponent_ADM_C");
static_assert(sizeof(UBP_PCComponent_ADM_C) == 0x0000E8, "Wrong size on UBP_PCComponent_ADM_C");
static_assert(offsetof(UBP_PCComponent_ADM_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_PCComponent_ADM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Game_Mode_Component) == 0x0000B8, "Member 'UBP_PCComponent_ADM_C::Game_Mode_Component' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Game_State_Component) == 0x0000C0, "Member 'UBP_PCComponent_ADM_C::Game_State_Component' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Debug_UI_Tab) == 0x0000C8, "Member 'UBP_PCComponent_ADM_C::Debug_UI_Tab' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Debug_UI_Screen_Class) == 0x0000D0, "Member 'UBP_PCComponent_ADM_C::Debug_UI_Screen_Class' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Module_ID) == 0x0000D8, "Member 'UBP_PCComponent_ADM_C::Module_ID' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Client_Initialization_Timeout) == 0x0000DC, "Member 'UBP_PCComponent_ADM_C::Client_Initialization_Timeout' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_C, Elapsed_Client_Initialization_Time) == 0x0000E0, "Member 'UBP_PCComponent_ADM_C::Elapsed_Client_Initialization_Time' has a wrong offset!");

}

