#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GestureGridSlot

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.OnFocused__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_GestureGridSlot_C_OnFocused__DelegateSignature final
{
public:
	class UClass*                                 Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_OnFocused__DelegateSignature) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_OnFocused__DelegateSignature");
static_assert(sizeof(UI_GestureGridSlot_C_OnFocused__DelegateSignature) == 0x000008, "Wrong size on UI_GestureGridSlot_C_OnFocused__DelegateSignature");
static_assert(offsetof(UI_GestureGridSlot_C_OnFocused__DelegateSignature, Slot_0) == 0x000000, "Member 'UI_GestureGridSlot_C_OnFocused__DelegateSignature::Slot_0' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.ExecuteUbergraph_UI_GestureGridSlot
// 0x0188 (0x0188 - 0x0000)
struct UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_CustomEvent_Sender;                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryCustomizationComponent*       K2Node_CustomEvent_Inventory;                      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        K2Node_DynamicCast_AsHuman_Character;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00A0(0x0028)()
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x00C8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x00E8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_2;     // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_106[0x2];                                      // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_3;     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EInputMode                                    CallFunc_GetLastInputMode_ReturnValue;             // 0x0111(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113[0x1];                                      // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0114(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_GestureGridSlot_C*>          CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x0150(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_GestureGridSlot_C*                  CallFunc_Array_Get_Item_2;                         // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AHumanCharacter* Sender, class UInventoryCustomizationComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot");
static_assert(sizeof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot) == 0x000188, "Wrong size on UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, EntryPoint) == 0x000000, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, Temp_int_Variable) == 0x000004, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, Temp_int_Variable_1) == 0x00000C, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, Temp_int_Array_Index_Variable) == 0x000024, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_Event_IsDesignTime) == 0x000028, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_ComponentBoundEvent_Sender_2) == 0x000030, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000038, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_CustomEvent_Sender) == 0x000040, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_CustomEvent_Inventory) == 0x000048, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_DynamicCast_AsHuman_Character) == 0x000050, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_DynamicCast_AsHuman_Character' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_ComponentBoundEvent_Sender_1) == 0x000060, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_ComponentBoundEvent_Sender) == 0x000068, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000070, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x000071, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_MakeStruct_SlateColor) == 0x000078, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_MakeStruct_SlateColor_1) == 0x0000A0, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x0000C8, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x0000E8, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Array_Get_Item_1) == 0x0000F8, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Array_Length_ReturnValue_1) == 0x000100, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Less_IntInt_ReturnValue_1) == 0x000104, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue_2) == 0x000105, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000108, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_IsPlatformGroupDesktop_ReturnValue_3) == 0x000110, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_IsPlatformGroupDesktop_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_GetLastInputMode_ReturnValue) == 0x000111, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_GetLastInputMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000112, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_Event_MyGeometry) == 0x000114, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_Event_InDeltaTime) == 0x00014C, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_GetAllWidgetsOfClass_FoundWidgets_2) == 0x000150, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_GetAllWidgetsOfClass_FoundWidgets_2' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Array_Get_Item_2) == 0x000160, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Array_Length_ReturnValue_2) == 0x000168, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, K2Node_CreateDelegate_OutputDelegate_1) == 0x00016C, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, Temp_int_Loop_Counter_Variable) == 0x00017C, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Less_IntInt_ReturnValue_2) == 0x000180, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot, CallFunc_Add_IntInt_ReturnValue_2) == 0x000184, "Member 'UI_GestureGridSlot_C_ExecuteUbergraph_UI_GestureGridSlot::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_GestureGridSlot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_Tick) == 0x000004, "Wrong alignment on UI_GestureGridSlot_C_Tick");
static_assert(sizeof(UI_GestureGridSlot_C_Tick) == 0x00003C, "Wrong size on UI_GestureGridSlot_C_Tick");
static_assert(offsetof(UI_GestureGridSlot_C_Tick, MyGeometry) == 0x000000, "Member 'UI_GestureGridSlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_GestureGridSlot_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_GestureGridSlot_C_BndEvt__UI_GestureGridSlot_InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.OnCustomizationLoaded
// 0x0010 (0x0010 - 0x0000)
struct UI_GestureGridSlot_C_OnCustomizationLoaded final
{
public:
	class AHumanCharacter*                        Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryCustomizationComponent*       Inventory;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_OnCustomizationLoaded) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_OnCustomizationLoaded");
static_assert(sizeof(UI_GestureGridSlot_C_OnCustomizationLoaded) == 0x000010, "Wrong size on UI_GestureGridSlot_C_OnCustomizationLoaded");
static_assert(offsetof(UI_GestureGridSlot_C_OnCustomizationLoaded, Sender) == 0x000000, "Member 'UI_GestureGridSlot_C_OnCustomizationLoaded::Sender' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_OnCustomizationLoaded, Inventory) == 0x000008, "Member 'UI_GestureGridSlot_C_OnCustomizationLoaded::Inventory' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_GestureGridSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GestureGridSlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GestureGridSlot_C_PreConstruct) == 0x000001, "Wrong alignment on UI_GestureGridSlot_C_PreConstruct");
static_assert(sizeof(UI_GestureGridSlot_C_PreConstruct) == 0x000001, "Wrong size on UI_GestureGridSlot_C_PreConstruct");
static_assert(offsetof(UI_GestureGridSlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_GestureGridSlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.UpdateItem
// 0x0018 (0x0018 - 0x0000)
struct UI_GestureGridSlot_C_UpdateItem final
{
public:
	class ACustomizationGestureVariant*           CallFunc_GetGestureVariantInSlot_GestureVariant;   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GestureGridSlot_C_UpdateItem) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_UpdateItem");
static_assert(sizeof(UI_GestureGridSlot_C_UpdateItem) == 0x000018, "Wrong size on UI_GestureGridSlot_C_UpdateItem");
static_assert(offsetof(UI_GestureGridSlot_C_UpdateItem, CallFunc_GetGestureVariantInSlot_GestureVariant) == 0x000000, "Member 'UI_GestureGridSlot_C_UpdateItem::CallFunc_GetGestureVariantInSlot_GestureVariant' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_UpdateItem, CallFunc_GetObjectClass_ReturnValue) == 0x000008, "Member 'UI_GestureGridSlot_C_UpdateItem::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_UpdateItem, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UI_GestureGridSlot_C_UpdateItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.GetGestureVariantInSlot
// 0x0060 (0x0060 - 0x0000)
struct UI_GestureGridSlot_C_GetGestureVariantInSlot final
{
public:
	class UClass*                                 GestureSlotType;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomizationGestureVariant*           GestureVariant;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCustomizationPair                     CallFunc_GetCustomizationInSlot_ReturnValue;       // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue_1;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACustomizationVariant*                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomizationGestureVariant*           K2Node_DynamicCast_AsCustomization_Gesture_Variant; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GestureGridSlot_C_GetGestureVariantInSlot) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_GetGestureVariantInSlot");
static_assert(sizeof(UI_GestureGridSlot_C_GetGestureVariantInSlot) == 0x000060, "Wrong size on UI_GestureGridSlot_C_GetGestureVariantInSlot");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, GestureSlotType) == 0x000000, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::GestureSlotType' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, GestureVariant) == 0x000008, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::GestureVariant' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000020, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, CallFunc_GetCustomizationInSlot_ReturnValue) == 0x000030, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::CallFunc_GetCustomizationInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, CallFunc_IsValidClass_ReturnValue_1) == 0x000040, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000048, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, K2Node_DynamicCast_AsCustomization_Gesture_Variant) == 0x000050, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::K2Node_DynamicCast_AsCustomization_Gesture_Variant' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_GetGestureVariantInSlot, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'UI_GestureGridSlot_C_GetGestureVariantInSlot::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UI_GestureGridSlot.UI_GestureGridSlot_C.UpdateGestureName
// 0x0028 (0x0028 - 0x0000)
struct UI_GestureGridSlot_C_UpdateGestureName final
{
public:
	class ACustomizationGestureVariant*           CallFunc_GetGestureVariantInSlot_GestureVariant;   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0010(0x0018)()
};
static_assert(alignof(UI_GestureGridSlot_C_UpdateGestureName) == 0x000008, "Wrong alignment on UI_GestureGridSlot_C_UpdateGestureName");
static_assert(sizeof(UI_GestureGridSlot_C_UpdateGestureName) == 0x000028, "Wrong size on UI_GestureGridSlot_C_UpdateGestureName");
static_assert(offsetof(UI_GestureGridSlot_C_UpdateGestureName, CallFunc_GetGestureVariantInSlot_GestureVariant) == 0x000000, "Member 'UI_GestureGridSlot_C_UpdateGestureName::CallFunc_GetGestureVariantInSlot_GestureVariant' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_UpdateGestureName, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UI_GestureGridSlot_C_UpdateGestureName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GestureGridSlot_C_UpdateGestureName, CallFunc_GetItemName_ReturnValue) == 0x000010, "Member 'UI_GestureGridSlot_C_UpdateGestureName::CallFunc_GetItemName_ReturnValue' has a wrong offset!");

}

