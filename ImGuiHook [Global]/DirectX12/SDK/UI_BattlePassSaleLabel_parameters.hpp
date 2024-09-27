#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassSaleLabel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_BattlePassSaleLabel.UI_BattlePassSaleLabel_C.ExecuteUbergraph_UI_BattlePassSaleLabel
// 0x0004 (0x0004 - 0x0000)
struct UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel) == 0x000004, "Wrong alignment on UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel");
static_assert(sizeof(UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel) == 0x000004, "Wrong size on UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel");
static_assert(offsetof(UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel, EntryPoint) == 0x000000, "Member 'UI_BattlePassSaleLabel_C_ExecuteUbergraph_UI_BattlePassSaleLabel::EntryPoint' has a wrong offset!");

// Function UI_BattlePassSaleLabel.UI_BattlePassSaleLabel_C.AssignProductToLabel
// 0x0178 (0x0178 - 0x0000)
struct UI_BattlePassSaleLabel_C_AssignProductToLabel final
{
public:
	struct FGameStoreProductInfo                  PremiumBattlePassProduct;                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsProductValid_IsProductValid;            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0088(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	class UDataTable*                             CallFunc_DataProviderFindTableByAssetTable_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	struct FLabelsList                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x00F8(0x0040)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
	class UBattlePassSystem*                      CallFunc_GetBattlePassSystem_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BattlePassSystem_C*                 K2Node_DynamicCast_AsBP_Battle_Pass_System;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Get_Season_Name_Active_Season_Name;       // 0x016C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Premium_Status_Premium_Active;        // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BattlePassSaleLabel_C_AssignProductToLabel) == 0x000008, "Wrong alignment on UI_BattlePassSaleLabel_C_AssignProductToLabel");
static_assert(sizeof(UI_BattlePassSaleLabel_C_AssignProductToLabel) == 0x000178, "Wrong size on UI_BattlePassSaleLabel_C_AssignProductToLabel");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, PremiumBattlePassProduct) == 0x000000, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::PremiumBattlePassProduct' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_TextIsEmpty_ReturnValue) == 0x000051, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_IsProductValid_IsProductValid) == 0x000052, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_IsProductValid_IsProductValid' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_Conv_StringToName_ReturnValue) == 0x000054, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_DataProviderFindTableByAssetTable_ReturnValue) == 0x0000E0, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_DataProviderFindTableByAssetTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, K2Node_MakeArray_Array) == 0x0000E8, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000F8, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000138, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_Format_ReturnValue) == 0x000140, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_GetBattlePassSystem_ReturnValue) == 0x000158, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_GetBattlePassSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, K2Node_DynamicCast_AsBP_Battle_Pass_System) == 0x000160, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::K2Node_DynamicCast_AsBP_Battle_Pass_System' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_Get_Season_Name_Active_Season_Name) == 0x00016C, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_Get_Season_Name_Active_Season_Name' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_AssignProductToLabel, CallFunc_Get_Premium_Status_Premium_Active) == 0x000174, "Member 'UI_BattlePassSaleLabel_C_AssignProductToLabel::CallFunc_Get_Premium_Status_Premium_Active' has a wrong offset!");

// Function UI_BattlePassSaleLabel.UI_BattlePassSaleLabel_C.GetValidProduct
// 0x0188 (0x0188 - 0x0000)
struct UI_BattlePassSaleLabel_C_GetValidProduct final
{
public:
	bool                                          IsProductValid_0;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreProductInfo                  Product;                                           // 0x0008(0x0050)(Parm, OutParm)
	struct FGameStoreProductInfo                  ProductLocal;                                      // 0x0058(0x0050)(Edit, BlueprintVisible)
	class UGameStoreProducts*                     CallFunc_GetGameStoreProductsManager_ReturnValue;  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassSystem*                      CallFunc_GetBattlePassSystem_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BattlePassSystem_C*                 K2Node_DynamicCast_AsBP_Battle_Pass_System;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Get_Season_Name_Active_Season_Name;       // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Season_Tier1_Premium_Product_ID_Premium_Battle_Pass_Product_ID; // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameStoreProductInfoById_ProductFound; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreProductInfo                  CallFunc_GetGameStoreProductInfoById_ReturnValue;  // 0x00E8(0x0050)(ConstParm)
	bool                                          CallFunc_StringNotEmpty_ReturnValue;               // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13A[0x6];                                      // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreBundleInfo                   CallFunc_Array_Get_Item;                           // 0x0140(0x0028)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16A[0x6];                                      // 0x016A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreItemInfo                     CallFunc_Array_Get_Item_1;                         // 0x0170(0x0010)(NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BattlePassSaleLabel_C_GetValidProduct) == 0x000008, "Wrong alignment on UI_BattlePassSaleLabel_C_GetValidProduct");
static_assert(sizeof(UI_BattlePassSaleLabel_C_GetValidProduct) == 0x000188, "Wrong size on UI_BattlePassSaleLabel_C_GetValidProduct");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, IsProductValid_0) == 0x000000, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::IsProductValid_0' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, Product) == 0x000008, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::Product' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, ProductLocal) == 0x000058, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::ProductLocal' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_GetGameStoreProductsManager_ReturnValue) == 0x0000A8, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_GetGameStoreProductsManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_GetBattlePassSystem_ReturnValue) == 0x0000B0, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_GetBattlePassSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, K2Node_DynamicCast_AsBP_Battle_Pass_System) == 0x0000B8, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::K2Node_DynamicCast_AsBP_Battle_Pass_System' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_Get_Season_Name_Active_Season_Name) == 0x0000C4, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_Get_Season_Name_Active_Season_Name' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_Get_Season_Tier1_Premium_Product_ID_Premium_Battle_Pass_Product_ID) == 0x0000D0, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_Get_Season_Tier1_Premium_Product_ID_Premium_Battle_Pass_Product_ID' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_GetGameStoreProductInfoById_ProductFound) == 0x0000E0, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_GetGameStoreProductInfoById_ProductFound' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_GetGameStoreProductInfoById_ReturnValue) == 0x0000E8, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_GetGameStoreProductInfoById_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_StringNotEmpty_ReturnValue) == 0x000138, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_StringNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000139, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_Array_Get_Item) == 0x000140, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000168, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_BooleanAND_ReturnValue) == 0x000169, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_Array_Get_Item_1) == 0x000170, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000180, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_GetValidProduct, CallFunc_IsValidClass_ReturnValue) == 0x000181, "Member 'UI_BattlePassSaleLabel_C_GetValidProduct::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function UI_BattlePassSaleLabel.UI_BattlePassSaleLabel_C.IsProductValid
// 0x00F8 (0x00F8 - 0x0000)
struct UI_BattlePassSaleLabel_C_IsProductValid final
{
public:
	struct FGameStoreProductInfo                  Product;                                           // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsProductValid_0;                                  // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreProductInfo                  ProductLocal;                                      // 0x0058(0x0050)(Edit, BlueprintVisible)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreBundleInfo                   CallFunc_Array_Get_Item;                           // 0x00B0(0x0028)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameStoreItemInfo                     CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0010)(NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BattlePassSaleLabel_C_IsProductValid) == 0x000008, "Wrong alignment on UI_BattlePassSaleLabel_C_IsProductValid");
static_assert(sizeof(UI_BattlePassSaleLabel_C_IsProductValid) == 0x0000F8, "Wrong size on UI_BattlePassSaleLabel_C_IsProductValid");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, Product) == 0x000000, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::Product' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, IsProductValid_0) == 0x000050, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::IsProductValid_0' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, ProductLocal) == 0x000058, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::ProductLocal' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000D8, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_BooleanAND_ReturnValue) == 0x0000D9, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x0000F0, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassSaleLabel_C_IsProductValid, CallFunc_IsValidClass_ReturnValue) == 0x0000F1, "Member 'UI_BattlePassSaleLabel_C_IsProductValid::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

}

