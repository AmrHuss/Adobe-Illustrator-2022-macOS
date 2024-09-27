#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LobbyCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SceneCapture_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LobbyCapture.BP_LobbyCapture_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_LobbyCapture_C final : public ABP_SceneCapture_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LobbyCapture_C;                  // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Mannequin_Lobby_C*                  Mannequin;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LobbyCapture(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void CenterZRotationOnFace();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LobbyCapture_C">();
	}
	static class ABP_LobbyCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LobbyCapture_C>();
	}
};
static_assert(alignof(ABP_LobbyCapture_C) == 0x000008, "Wrong alignment on ABP_LobbyCapture_C");
static_assert(sizeof(ABP_LobbyCapture_C) == 0x0002A0, "Wrong size on ABP_LobbyCapture_C");
static_assert(offsetof(ABP_LobbyCapture_C, UberGraphFrame_BP_LobbyCapture_C) == 0x000290, "Member 'ABP_LobbyCapture_C::UberGraphFrame_BP_LobbyCapture_C' has a wrong offset!");
static_assert(offsetof(ABP_LobbyCapture_C, Mannequin) == 0x000298, "Member 'ABP_LobbyCapture_C::Mannequin' has a wrong offset!");

}

