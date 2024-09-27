#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameMenu_AdvancedGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flame_structs.hpp"
#include "Struct_GameGuide_ListItem_structs.hpp"


namespace SDK::Params
{

// Function UI_GameMenu_AdvancedGuide.UI_GameMenu_AdvancedGuide_C.ExecuteUbergraph_UI_GameMenu_AdvancedGuide
// 0x0300 (0x0300 - 0x0000)
struct UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWindowModeBorderless_ReturnValue;       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMouseLockMode                                Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMouseLockMode                                Temp_byte_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GameGuide_PageButton_C*             CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameGuide_ExpandableCategory_C*     CallFunc_Create_ReturnValue_1;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 PlayerIndex, EInputMode InputMode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	EMouseLockMode                                K2Node_Select_Default;                             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float AxisValue)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_DisplayName;                    // 0x00B0(0x0018)()
	class FText                                   K2Node_CustomEvent_Description;                    // 0x00C8(0x0018)(ConstParm)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_BannerImage;                    // 0x00E0(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x2];                                      // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_AxisValue;                      // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_GameGuide_ListItem             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0130(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CallFunc_Array_Get_Item;                           // 0x0198(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AD[0x3];                                      // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_GameGuide_ListItem             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x01B0(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Join_Text_Array_ReturnValue;              // 0x0220(0x0018)()
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue_1;         // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue_2;         // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default_1;                           // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_272[0x6];                                      // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue_1;       // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PlayerIndex;                    // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputMode                                    K2Node_CustomEvent_InputMode;                      // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue_2;       // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           CallFunc_GetInputsFromText_ReturnValue;            // 0x0290(0x0010)(ReferenceParm)
	TArray<class FText>                           CallFunc_GetInputIconsText_InputIconsText;         // 0x02A0(0x0010)(ReferenceParm)
	TArray<class FText>                           CallFunc_GetInputsFromText_ReturnValue_1;          // 0x02B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_ReplaceTextWithControls_ReturnValue;      // 0x02C0(0x0018)()
	TArray<class FText>                           CallFunc_GetInputIconsText_InputIconsText_1;       // 0x02D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_ReplaceTextWithControls_ReturnValue_1;    // 0x02E8(0x0018)()
};
static_assert(alignof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide) == 0x000008, "Wrong alignment on UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide");
static_assert(sizeof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide) == 0x000300, "Wrong size on UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, EntryPoint) == 0x000000, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000008, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_IsWindowModeBorderless_ReturnValue) == 0x000014, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_IsWindowModeBorderless_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_bool_Variable) == 0x00001C, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_int_Array_Index_Variable) == 0x000020, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_byte_Variable) == 0x000024, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_object_Variable) == 0x000028, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_Event_IsDesignTime) == 0x000030, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetChildAt_ReturnValue) == 0x000038, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_Loaded) == 0x000040, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetFlameController_ReturnValue) == 0x000058, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetFlameController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_byte_Variable_1) == 0x000060, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Create_ReturnValue) == 0x000068, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Create_ReturnValue_1) == 0x000070, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_bool_Variable_1) == 0x000078, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_Select_Default) == 0x00008C, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CreateDelegate_OutputDelegate_2) == 0x000090, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_AddChild_ReturnValue_1) == 0x0000A8, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_DisplayName) == 0x0000B0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_DisplayName' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_Description) == 0x0000C8, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_Description' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_BannerImage) == 0x0000E0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_BannerImage' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000108, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000110, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_DynamicCast_AsTexture_2D) == 0x000118, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_AxisValue) == 0x000124, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_AxisValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000128, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetScrollOffset_ReturnValue) == 0x00012C, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetDataTableRowFromName_OutRow) == 0x000130, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000190, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Add_FloatFloat_ReturnValue) == 0x000194, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Array_Get_Item) == 0x000198, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Array_Length_ReturnValue) == 0x0001A8, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Less_IntInt_ReturnValue) == 0x0001AC, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0001B0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000210, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Array_Length_ReturnValue_1) == 0x000214, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Greater_IntInt_ReturnValue) == 0x000218, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Not_PreBool_ReturnValue) == 0x000219, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_Join_Text_Array_ReturnValue) == 0x000220, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_Join_Text_Array_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetFlameController_ReturnValue_1) == 0x000238, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetFlameController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000240, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetFlameController_ReturnValue_2) == 0x000248, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetFlameController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, Temp_bool_Variable_2) == 0x000250, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetOwningPlayer_ReturnValue) == 0x000258, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_Select_Default_1) == 0x000260, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_DynamicCast_AsTexture_2D_1) == 0x000268, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_DynamicCast_bSuccess_1) == 0x000270, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_IsValid_ReturnValue_1) == 0x000271, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetFlameGameInstance_ReturnValue_1) == 0x000278, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetFlameGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_PlayerIndex) == 0x000280, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_PlayerIndex' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, K2Node_CustomEvent_InputMode) == 0x000284, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::K2Node_CustomEvent_InputMode' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetFlameGameInstance_ReturnValue_2) == 0x000288, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetFlameGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetInputsFromText_ReturnValue) == 0x000290, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetInputsFromText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetInputIconsText_InputIconsText) == 0x0002A0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetInputIconsText_InputIconsText' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetInputsFromText_ReturnValue_1) == 0x0002B0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetInputsFromText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_ReplaceTextWithControls_ReturnValue) == 0x0002C0, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_ReplaceTextWithControls_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_GetInputIconsText_InputIconsText_1) == 0x0002D8, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_GetInputIconsText_InputIconsText_1' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide, CallFunc_ReplaceTextWithControls_ReturnValue_1) == 0x0002E8, "Member 'UI_GameMenu_AdvancedGuide_C_ExecuteUbergraph_UI_GameMenu_AdvancedGuide::CallFunc_ReplaceTextWithControls_ReturnValue_1' has a wrong offset!");

// Function UI_GameMenu_AdvancedGuide.UI_GameMenu_AdvancedGuide_C.OnInputModeChanged
// 0x0008 (0x0008 - 0x0000)
struct UI_GameMenu_AdvancedGuide_C_OnInputModeChanged final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputMode                                    InputMode;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameMenu_AdvancedGuide_C_OnInputModeChanged) == 0x000004, "Wrong alignment on UI_GameMenu_AdvancedGuide_C_OnInputModeChanged");
static_assert(sizeof(UI_GameMenu_AdvancedGuide_C_OnInputModeChanged) == 0x000008, "Wrong size on UI_GameMenu_AdvancedGuide_C_OnInputModeChanged");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_OnInputModeChanged, PlayerIndex) == 0x000000, "Member 'UI_GameMenu_AdvancedGuide_C_OnInputModeChanged::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_OnInputModeChanged, InputMode) == 0x000004, "Member 'UI_GameMenu_AdvancedGuide_C_OnInputModeChanged::InputMode' has a wrong offset!");

// Function UI_GameMenu_AdvancedGuide.UI_GameMenu_AdvancedGuide_C.ScrollDescription
// 0x0004 (0x0004 - 0x0000)
struct UI_GameMenu_AdvancedGuide_C_ScrollDescription final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameMenu_AdvancedGuide_C_ScrollDescription) == 0x000004, "Wrong alignment on UI_GameMenu_AdvancedGuide_C_ScrollDescription");
static_assert(sizeof(UI_GameMenu_AdvancedGuide_C_ScrollDescription) == 0x000004, "Wrong size on UI_GameMenu_AdvancedGuide_C_ScrollDescription");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_ScrollDescription, AxisValue) == 0x000000, "Member 'UI_GameMenu_AdvancedGuide_C_ScrollDescription::AxisValue' has a wrong offset!");

// Function UI_GameMenu_AdvancedGuide.UI_GameMenu_AdvancedGuide_C.DisplayGuidePage
// 0x0058 (0x0058 - 0x0000)
struct UI_GameMenu_AdvancedGuide_C_DisplayGuidePage final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Description;                                       // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSoftObjectPtr<class UTexture2D>              BannerImage;                                       // 0x0030(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameMenu_AdvancedGuide_C_DisplayGuidePage) == 0x000008, "Wrong alignment on UI_GameMenu_AdvancedGuide_C_DisplayGuidePage");
static_assert(sizeof(UI_GameMenu_AdvancedGuide_C_DisplayGuidePage) == 0x000058, "Wrong size on UI_GameMenu_AdvancedGuide_C_DisplayGuidePage");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_DisplayGuidePage, DisplayName) == 0x000000, "Member 'UI_GameMenu_AdvancedGuide_C_DisplayGuidePage::DisplayName' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_DisplayGuidePage, Description) == 0x000018, "Member 'UI_GameMenu_AdvancedGuide_C_DisplayGuidePage::Description' has a wrong offset!");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_DisplayGuidePage, BannerImage) == 0x000030, "Member 'UI_GameMenu_AdvancedGuide_C_DisplayGuidePage::BannerImage' has a wrong offset!");

// Function UI_GameMenu_AdvancedGuide.UI_GameMenu_AdvancedGuide_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GameMenu_AdvancedGuide_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GameMenu_AdvancedGuide_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GameMenu_AdvancedGuide_C_PreConstruct");
static_assert(sizeof(UI_GameMenu_AdvancedGuide_C_PreConstruct) == 0x000001, "Wrong size on UI_GameMenu_AdvancedGuide_C_PreConstruct");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GameMenu_AdvancedGuide_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_GameMenu_AdvancedGuide.UI_GameMenu_AdvancedGuide_C.OnLoaded_303A9E7341428F48F05BE78A79726921
// 0x0008 (0x0008 - 0x0000)
struct UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921) == 0x000008, "Wrong alignment on UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921");
static_assert(sizeof(UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921) == 0x000008, "Wrong size on UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921");
static_assert(offsetof(UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921, Loaded) == 0x000000, "Member 'UI_GameMenu_AdvancedGuide_C_OnLoaded_303A9E7341428F48F05BE78A79726921::Loaded' has a wrong offset!");

}

