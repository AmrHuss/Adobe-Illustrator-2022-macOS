#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_AlarmTrap_Object

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_CustomMapMarker_structs.hpp"
#include "S_CustomMapMarker_Fade_structs.hpp"


namespace SDK::Params
{

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.ExecuteUbergraph_BP_TC_AlarmTrap_Object
// 0x03B0 (0x03B0 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ObjectThatTriggeredTrap;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0010(0x0010)(ReferenceParm)
	class ABP_Character_Script_C*                 K2Node_DynamicCast_AsBP_Character_Script;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_Player_that_destroyed_the_trap;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0068(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_Script_C*                 K2Node_CustomEvent_Character_that_stepped_into_alarm_trap; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script;  // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x2];                                      // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x015C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0178(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script_1; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x3];                                      // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CustomMapMarker                     K2Node_MakeStruct_S_CustomMapMarker;               // 0x0198(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_CustomMapMarker                     K2Node_Copy_ReturnValue;                           // 0x01F8(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_CustomMapMarker                     K2Node_SetFieldsInStruct_StructOut;                // 0x0258(0x0050)(HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CustomMapMarker_Fade                K2Node_MakeStruct_S_CustomMapMarker_Fade;          // 0x02B0(0x00D8)(HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue_1;        // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue_1; // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script_2; // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x03A8(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object) == 0x0003B0, "Wrong size on BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, EntryPoint) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_Event_ObjectThatTriggeredTrap) == 0x000008, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_Event_ObjectThatTriggeredTrap' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000010, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_AsBP_Character_Script) == 0x000020, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_AsBP_Character_Script' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000031, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_Event_Player_that_destroyed_the_trap) == 0x000038, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_Event_Player_that_destroyed_the_trap' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000048, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_ComponentBoundEvent_OtherActor) == 0x000050, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_ComponentBoundEvent_OtherComp) == 0x000058, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000060, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_ComponentBoundEvent_bFromSweep) == 0x000064, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_ComponentBoundEvent_SweepResult) == 0x000068, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_CustomEvent_Character_that_stepped_into_alarm_trap) == 0x0000F8, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_CustomEvent_Character_that_stepped_into_alarm_trap' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetInstigatorController_ReturnValue) == 0x000110, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_AsBP_Player_Controller_Script) == 0x000118, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_AsBP_Player_Controller_Script' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_bSuccess_1) == 0x000120, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetInstigator_ReturnValue) == 0x000128, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Array_Contains_ReturnValue) == 0x000130, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Array_RemoveItem_ReturnValue) == 0x000131, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_CreateDelegate_OutputDelegate_1) == 0x000134, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000148, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Array_Get_Item) == 0x000150, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetUserControllerId_ReturnValue) == 0x000158, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_CreateDelegate_OutputDelegate_2) == 0x00015C, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000170, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000178, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_AsBP_Player_Controller_Script_1) == 0x000180, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_AsBP_Player_Controller_Script_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_bSuccess_2) == 0x000188, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00018C, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_MakeStruct_S_CustomMapMarker) == 0x000198, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_MakeStruct_S_CustomMapMarker' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Conv_VectorToString_ReturnValue) == 0x0001E8, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_Copy_ReturnValue) == 0x0001F8, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Concat_StrStr_ReturnValue) == 0x000248, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_SetFieldsInStruct_StructOut) == 0x000258, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_Conv_StringToName_ReturnValue) == 0x0002A8, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_MakeStruct_S_CustomMapMarker_Fade) == 0x0002B0, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_MakeStruct_S_CustomMapMarker_Fade' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetUserControllerId_ReturnValue_1) == 0x000388, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetUserControllerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue_1) == 0x000390, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_AsBP_Player_Controller_Script_2) == 0x000398, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_AsBP_Player_Controller_Script_2' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, K2Node_DynamicCast_bSuccess_3) == 0x0003A0, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x0003A8, "Member 'BP_TC_AlarmTrap_Object_C_ExecuteUbergraph_BP_TC_AlarmTrap_Object::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.Send other player stepped into alarm trap
// 0x0008 (0x0008 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap final
{
public:
	class ABP_Character_Script_C*                 Character_that_stepped_into_alarm_trap;            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap) == 0x000008, "Wrong size on BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap, Character_that_stepped_into_alarm_trap) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_Send_other_player_stepped_into_alarm_trap::Character_that_stepped_into_alarm_trap' has a wrong offset!");

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000B0, "Wrong size on BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_TC_AlarmTrap_Object_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.Trap_Break
// 0x0008 (0x0008 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_Trap_Break final
{
public:
	class UObject*                                Player_that_destroyed_the_trap;                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_Trap_Break) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_Object_C_Trap_Break");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_Trap_Break) == 0x000008, "Wrong size on BP_TC_AlarmTrap_Object_C_Trap_Break");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_Trap_Break, Player_that_destroyed_the_trap) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_Trap_Break::Player_that_destroyed_the_trap' has a wrong offset!");

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.Trap_Triggered
// 0x0008 (0x0008 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_Trap_Triggered final
{
public:
	class UObject*                                ObjectThatTriggeredTrap;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_Trap_Triggered) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_Object_C_Trap_Triggered");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_Trap_Triggered) == 0x000008, "Wrong size on BP_TC_AlarmTrap_Object_C_Trap_Triggered");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_Trap_Triggered, ObjectThatTriggeredTrap) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_Trap_Triggered::ObjectThatTriggeredTrap' has a wrong offset!");

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.AlarmTrap_SetUpVariablesFromTool
// 0x0004 (0x0004 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool final
{
public:
	float                                         Trap_Alarm_Duration_0;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool) == 0x000004, "Wrong alignment on BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool) == 0x000004, "Wrong size on BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool, Trap_Alarm_Duration_0) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_AlarmTrap_SetUpVariablesFromTool::Trap_Alarm_Duration_0' has a wrong offset!");

// Function BP_TC_AlarmTrap_Object.BP_TC_AlarmTrap_Object_C.SetupAudioConcurrency
// 0x00A0 (0x00A0 - 0x0000)
struct BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency final
{
public:
	TSet<class USoundConcurrency*>                AudioConcurrency;                                  // 0x0000(0x0050)(Edit, BlueprintVisible)
	TSet<class USoundConcurrency*>                K2Node_MakeVariable_MakeVariableOutput;            // 0x0050(0x0050)()
};
static_assert(alignof(BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency");
static_assert(sizeof(BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency) == 0x0000A0, "Wrong size on BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency, AudioConcurrency) == 0x000000, "Member 'BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency::AudioConcurrency' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency, K2Node_MakeVariable_MakeVariableOutput) == 0x000050, "Member 'BP_TC_AlarmTrap_Object_C_SetupAudioConcurrency::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");

}

