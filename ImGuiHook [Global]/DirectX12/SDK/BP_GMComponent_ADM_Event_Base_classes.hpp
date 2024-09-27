#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_ADM_Event_Base

#include "Basic.hpp"

#include "FEventPrerequisite_Asset_structs.hpp"
#include "S_CustomMapMarker_structs.hpp"
#include "E_ADM_EventTypes_structs.hpp"
#include "BP_GMComponent_ADM_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GMComponent_ADM_Event_Base.BP_GMComponent_ADM_Event_Base_C
// 0x00A0 (0x01D8 - 0x0138)
class UBP_GMComponent_ADM_Event_Base_C : public UBP_GMComponent_ADM_Base_C
{
public:
	bool                                          Unique_Event;                                      // 0x0134(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Blacklisted_Levels;                                // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFEventPrerequisite_Asset>      Required_Assets;                                   // 0x0148(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_CustomMapMarker                     Map_Icon;                                          // 0x0158(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Module_Initialization_Successful;                  // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         Blacklisted_Modules;                               // 0x01B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Required_Modules;                                  // 0x01C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_ADM_EventTypes                              Event_type;                                        // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Is_Initialization_Successful(bool* IsInitialized);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GMComponent_ADM_Event_Base_C">();
	}
	static class UBP_GMComponent_ADM_Event_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GMComponent_ADM_Event_Base_C>();
	}
};
static_assert(alignof(UBP_GMComponent_ADM_Event_Base_C) == 0x000008, "Wrong alignment on UBP_GMComponent_ADM_Event_Base_C");
static_assert(sizeof(UBP_GMComponent_ADM_Event_Base_C) == 0x0001D8, "Wrong size on UBP_GMComponent_ADM_Event_Base_C");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Unique_Event) == 0x000134, "Member 'UBP_GMComponent_ADM_Event_Base_C::Unique_Event' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Blacklisted_Levels) == 0x000138, "Member 'UBP_GMComponent_ADM_Event_Base_C::Blacklisted_Levels' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Required_Assets) == 0x000148, "Member 'UBP_GMComponent_ADM_Event_Base_C::Required_Assets' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Map_Icon) == 0x000158, "Member 'UBP_GMComponent_ADM_Event_Base_C::Map_Icon' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Module_Initialization_Successful) == 0x0001A8, "Member 'UBP_GMComponent_ADM_Event_Base_C::Module_Initialization_Successful' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Blacklisted_Modules) == 0x0001B0, "Member 'UBP_GMComponent_ADM_Event_Base_C::Blacklisted_Modules' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Required_Modules) == 0x0001C0, "Member 'UBP_GMComponent_ADM_Event_Base_C::Required_Modules' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_Event_Base_C, Event_type) == 0x0001D0, "Member 'UBP_GMComponent_ADM_Event_Base_C::Event_type' has a wrong offset!");

}

