#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FogOfWarComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_DiscoverPoint_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FogOfWarComponent.BP_FogOfWarComponent_C
// 0x0068 (0x0118 - 0x00B0)
class UBP_FogOfWarComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_MapTool_C*                          MapTool;                                           // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_DiscoverPoint>          DiscoverPoints;                                    // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               FogOfWarMaterial;                                  // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldMin;                                          // 0x00D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldMax;                                          // 0x00E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UVWorldSize;                                       // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasRenderTarget2D*                  RenderTarget;                                      // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanCharacter*                        TrackedCharacter;                                  // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrackCooldown;                                     // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerDiscoverRadius;                              // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFogOfWar;                                       // 0x0110(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FogOfWarComponent(int32 EntryPoint);
	void Try_Start_Tracking();
	void Track_Player();
	void ReceiveBeginPlay();
	void Draw_To_Render_Target(const struct FVector& Location, float Size);
	void Replicate_Discover_Point(const struct FStruct_DiscoverPoint& Discover_Point);
	void Replicate_Discover_Point_To_Teammates(const struct FStruct_DiscoverPoint& Discover_Point);
	void Is_Point_Already_Present(const struct FStruct_DiscoverPoint& Discover_Point, bool* Already_Present);
	void Add_Discover_Point(const struct FStruct_DiscoverPoint& Discover_Point, bool Replicate);
	void Is_Location_Discovered(const struct FVector& Location, bool* Discovered);
	void Get_World_Size();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FogOfWarComponent_C">();
	}
	static class UBP_FogOfWarComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FogOfWarComponent_C>();
	}
};
static_assert(alignof(UBP_FogOfWarComponent_C) == 0x000008, "Wrong alignment on UBP_FogOfWarComponent_C");
static_assert(sizeof(UBP_FogOfWarComponent_C) == 0x000118, "Wrong size on UBP_FogOfWarComponent_C");
static_assert(offsetof(UBP_FogOfWarComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_FogOfWarComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, MapTool) == 0x0000B8, "Member 'UBP_FogOfWarComponent_C::MapTool' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, DiscoverPoints) == 0x0000C0, "Member 'UBP_FogOfWarComponent_C::DiscoverPoints' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, FogOfWarMaterial) == 0x0000D0, "Member 'UBP_FogOfWarComponent_C::FogOfWarMaterial' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, WorldMin) == 0x0000D8, "Member 'UBP_FogOfWarComponent_C::WorldMin' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, WorldMax) == 0x0000E4, "Member 'UBP_FogOfWarComponent_C::WorldMax' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, UVWorldSize) == 0x0000F0, "Member 'UBP_FogOfWarComponent_C::UVWorldSize' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, RenderTarget) == 0x0000F8, "Member 'UBP_FogOfWarComponent_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, TrackedCharacter) == 0x000100, "Member 'UBP_FogOfWarComponent_C::TrackedCharacter' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, TrackCooldown) == 0x000108, "Member 'UBP_FogOfWarComponent_C::TrackCooldown' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, PlayerDiscoverRadius) == 0x00010C, "Member 'UBP_FogOfWarComponent_C::PlayerDiscoverRadius' has a wrong offset!");
static_assert(offsetof(UBP_FogOfWarComponent_C, UseFogOfWar) == 0x000110, "Member 'UBP_FogOfWarComponent_C::UseFogOfWar' has a wrong offset!");

}

