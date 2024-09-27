#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_AirDropModular

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.ExecuteUbergraph_BP_GameState_AirDropModular
// 0x0050 (0x0050 - 0x0000)
struct BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_AirDropModular_C*          K2Node_DynamicCast_AsBP_Game_Mode_Air_Drop_Modular; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GSComponent_ADM_C*                  K2Node_CustomEvent_ADM_GSComponent;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           CallFunc_Get_Module_Descriptions_Module_Descriptions; // 0x0028(0x0010)(ReferenceParm)
	class FText                                   K2Node_Event_New_Game_Mode_Description;            // 0x0038(0x0018)()
};
static_assert(alignof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular) == 0x000008, "Wrong alignment on BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular");
static_assert(sizeof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular) == 0x000050, "Wrong size on BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, EntryPoint) == 0x000000, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, K2Node_DynamicCast_AsBP_Game_Mode_Air_Drop_Modular) == 0x000010, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::K2Node_DynamicCast_AsBP_Game_Mode_Air_Drop_Modular' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, K2Node_CustomEvent_ADM_GSComponent) == 0x000020, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::K2Node_CustomEvent_ADM_GSComponent' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, CallFunc_Get_Module_Descriptions_Module_Descriptions) == 0x000028, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::CallFunc_Get_Module_Descriptions_Module_Descriptions' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular, K2Node_Event_New_Game_Mode_Description) == 0x000038, "Member 'BP_GameState_AirDropModular_C_ExecuteUbergraph_BP_GameState_AirDropModular::K2Node_Event_New_Game_Mode_Description' has a wrong offset!");

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Destroy ADM Component
// 0x0008 (0x0008 - 0x0000)
struct BP_GameState_AirDropModular_C_Destroy_ADM_Component final
{
public:
	class UBP_GSComponent_ADM_C*                  ADM_GSComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_AirDropModular_C_Destroy_ADM_Component) == 0x000008, "Wrong alignment on BP_GameState_AirDropModular_C_Destroy_ADM_Component");
static_assert(sizeof(BP_GameState_AirDropModular_C_Destroy_ADM_Component) == 0x000008, "Wrong size on BP_GameState_AirDropModular_C_Destroy_ADM_Component");
static_assert(offsetof(BP_GameState_AirDropModular_C_Destroy_ADM_Component, ADM_GSComponent) == 0x000000, "Member 'BP_GameState_AirDropModular_C_Destroy_ADM_Component::ADM_GSComponent' has a wrong offset!");

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Print Component List
// 0x00E0 (0x00E0 - 0x0000)
struct BP_GameState_AirDropModular_C_Print_Component_List final
{
public:
	class FString                                 Text;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UBP_GSComponent_ADM_C*>          CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_AirDropModular_C_Print_Component_List) == 0x000008, "Wrong alignment on BP_GameState_AirDropModular_C_Print_Component_List");
static_assert(sizeof(BP_GameState_AirDropModular_C_Print_Component_List) == 0x0000E0, "Wrong size on BP_GameState_AirDropModular_C_Print_Component_List");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Text) == 0x000000, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Text' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_struct_Variable) == 0x000010, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_struct_Variable_1) == 0x000020, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_bool_Variable) == 0x000030, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_string_Variable) == 0x000038, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_string_Variable_1) == 0x000048, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_int_Array_Index_Variable) == 0x000058, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, Temp_bool_Variable_1) == 0x000064, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_IsDedicatedServer_ReturnValue) == 0x000065, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, K2Node_Select_Default) == 0x000078, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, K2Node_Select_Default_1) == 0x000088, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000098, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_Less_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_GetObjectName_ReturnValue) == 0x0000C0, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Print_Component_List, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'BP_GameState_AirDropModular_C_Print_Component_List::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Get Game Mode Description
// 0x00E8 (0x00E8 - 0x0000)
struct BP_GameState_AirDropModular_C_Get_Game_Mode_Description final
{
public:
	class FText                                   Game_Mode_Description_0;                           // 0x0000(0x0018)(Parm, OutParm)
	TArray<class FText>                           Accumulated_Text;                                  // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0018)()
	class FText                                   CallFunc_Join_Text_Array_ReturnValue;              // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description) == 0x000008, "Wrong alignment on BP_GameState_AirDropModular_C_Get_Game_Mode_Description");
static_assert(sizeof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description) == 0x0000E8, "Wrong size on BP_GameState_AirDropModular_C_Get_Game_Mode_Description");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, Game_Mode_Description_0) == 0x000000, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::Game_Mode_Description_0' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, Accumulated_Text) == 0x000018, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::Accumulated_Text' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Join_Text_Array_ReturnValue) == 0x000050, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Join_Text_Array_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, K2Node_MakeArray_Array) == 0x0000A8, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_TextIsEmpty_ReturnValue) == 0x0000B8, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Less_IntInt_ReturnValue) == 0x0000DC, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameState_AirDropModular_C_Get_Game_Mode_Description, CallFunc_Array_Add_ReturnValue) == 0x0000E0, "Member 'BP_GameState_AirDropModular_C_Get_Game_Mode_Description::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.Set Game Mode Description
// 0x0018 (0x0018 - 0x0000)
struct BP_GameState_AirDropModular_C_Set_Game_Mode_Description final
{
public:
	class FText                                   New_Game_Mode_Description;                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_GameState_AirDropModular_C_Set_Game_Mode_Description) == 0x000008, "Wrong alignment on BP_GameState_AirDropModular_C_Set_Game_Mode_Description");
static_assert(sizeof(BP_GameState_AirDropModular_C_Set_Game_Mode_Description) == 0x000018, "Wrong size on BP_GameState_AirDropModular_C_Set_Game_Mode_Description");
static_assert(offsetof(BP_GameState_AirDropModular_C_Set_Game_Mode_Description, New_Game_Mode_Description) == 0x000000, "Member 'BP_GameState_AirDropModular_C_Set_Game_Mode_Description::New_Game_Mode_Description' has a wrong offset!");

// Function BP_GameState_AirDropModular.BP_GameState_AirDropModular_C.GetGameModeStringName
// 0x0010 (0x0010 - 0x0000)
struct BP_GameState_AirDropModular_C_GetGameModeStringName final
{
public:
	class FString                                 StringName;                                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameState_AirDropModular_C_GetGameModeStringName) == 0x000008, "Wrong alignment on BP_GameState_AirDropModular_C_GetGameModeStringName");
static_assert(sizeof(BP_GameState_AirDropModular_C_GetGameModeStringName) == 0x000010, "Wrong size on BP_GameState_AirDropModular_C_GetGameModeStringName");
static_assert(offsetof(BP_GameState_AirDropModular_C_GetGameModeStringName, StringName) == 0x000000, "Member 'BP_GameState_AirDropModular_C_GetGameModeStringName::StringName' has a wrong offset!");

}

