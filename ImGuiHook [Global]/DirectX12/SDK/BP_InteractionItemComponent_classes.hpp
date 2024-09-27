#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractionItemComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractionItemComponent.BP_InteractionItemComponent_C
// 0x0098 (0x0210 - 0x0178)
class UBP_InteractionItemComponent_C final : public UInteractionItemComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0178(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             PreInteraction_Start_on_Server;                    // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PreInteraction_Start_on_Client;                    // 0x0190(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PreInteraction_End_on_Server;                      // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PreInteraction_End_on_Client;                      // 0x01B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Interaction_Start_on_Server;                       // 0x01C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Interaction_Start_On_Client;                       // 0x01D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Interaction_End_on_Server;                         // 0x01E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Interaction_End_on_Client;                         // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_InteractionDot_C*                   Marker_Widget;                                     // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 UI_InteractionMarker_Class;                        // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void PreInteraction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void PreInteraction_Start_on_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void PreInteraction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor, bool Canceled);
	void PreInteraction_End_on_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor, bool Canceled);
	void Interaction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void Interaction_Start_On_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void Interaction_End_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void Interaction_End_on_Client__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);
	void ExecuteUbergraph_BP_InteractionItemComponent(int32 EntryPoint);
	void OnHideMarker(class UInteractionItemComponent* Sender);
	void OnUpdateMarker(class UInteractionItemComponent* Sender, const struct FVector& MarkerPosition);
	void OnShowMarker(class UInteractionItemComponent* Sender, const struct FVector& MarkerPosition);
	void OnPreInteractionEnd(class UInteractionItemComponent* Sender, class AActor* InteractingActor, bool Canceled);
	void OnPreInteractionStart(class UInteractionItemComponent* Sender, class AActor* InteractingActor);
	void OnInteractionEnd(class UInteractionItemComponent* Sender, class AActor* InteractingActor);
	void OnInteractionStart(class UInteractionItemComponent* Sender, class AActor* InteractingActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractionItemComponent_C">();
	}
	static class UBP_InteractionItemComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractionItemComponent_C>();
	}
};
static_assert(alignof(UBP_InteractionItemComponent_C) == 0x000008, "Wrong alignment on UBP_InteractionItemComponent_C");
static_assert(sizeof(UBP_InteractionItemComponent_C) == 0x000210, "Wrong size on UBP_InteractionItemComponent_C");
static_assert(offsetof(UBP_InteractionItemComponent_C, UberGraphFrame) == 0x000178, "Member 'UBP_InteractionItemComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, PreInteraction_Start_on_Server) == 0x000180, "Member 'UBP_InteractionItemComponent_C::PreInteraction_Start_on_Server' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, PreInteraction_Start_on_Client) == 0x000190, "Member 'UBP_InteractionItemComponent_C::PreInteraction_Start_on_Client' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, PreInteraction_End_on_Server) == 0x0001A0, "Member 'UBP_InteractionItemComponent_C::PreInteraction_End_on_Server' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, PreInteraction_End_on_Client) == 0x0001B0, "Member 'UBP_InteractionItemComponent_C::PreInteraction_End_on_Client' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, Interaction_Start_on_Server) == 0x0001C0, "Member 'UBP_InteractionItemComponent_C::Interaction_Start_on_Server' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, Interaction_Start_On_Client) == 0x0001D0, "Member 'UBP_InteractionItemComponent_C::Interaction_Start_On_Client' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, Interaction_End_on_Server) == 0x0001E0, "Member 'UBP_InteractionItemComponent_C::Interaction_End_on_Server' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, Interaction_End_on_Client) == 0x0001F0, "Member 'UBP_InteractionItemComponent_C::Interaction_End_on_Client' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, Marker_Widget) == 0x000200, "Member 'UBP_InteractionItemComponent_C::Marker_Widget' has a wrong offset!");
static_assert(offsetof(UBP_InteractionItemComponent_C, UI_InteractionMarker_Class) == 0x000208, "Member 'UBP_InteractionItemComponent_C::UI_InteractionMarker_Class' has a wrong offset!");

}

