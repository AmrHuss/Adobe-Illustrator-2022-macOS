#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Explosions

#include "Basic.hpp"

#include "BPI_Explosions_classes.hpp"
#include "BPI_Explosions_parameters.hpp"


namespace SDK
{

// Function BPI_Explosions.BPI_Explosions_C.ProccessExplosion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExplosionRadius                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatorController                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DamagingExplosion                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   EnviromentDamageMultiplier                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Explosions_C::ProccessExplosion(const struct FVector& Location, float ExplosionRadius, class AController* InstigatorController, class AActor* DamageCauser, bool DamagingExplosion, float EnviromentDamageMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Explosions_C", "ProccessExplosion");

	Params::BPI_Explosions_C_ProccessExplosion Parms{};

	Parms.Location = std::move(Location);
	Parms.ExplosionRadius = ExplosionRadius;
	Parms.InstigatorController = InstigatorController;
	Parms.DamageCauser = DamageCauser;
	Parms.DamagingExplosion = DamagingExplosion;
	Parms.EnviromentDamageMultiplier = EnviromentDamageMultiplier;

	UObject::ProcessEvent(Func, &Parms);
}

}

