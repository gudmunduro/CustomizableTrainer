/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"

namespace Actions {
	void SetPlayerMaxHealth(json params);
	void StopPlayerPursuit(json params);
	void ClearPlayerBounty(json params);
	void ChangeModel(json params);
	void ChangeFromInput(json params);
	void RestorePlayerStamina(json params);
	void AddCashFromKeyboard(json params);
	void PlayAnimOnPlayer(json params);
	void PlayScenarioOnPlayer(json params);
	void SpawnPed(json params);
	void SpawnPedFromInput(json params);
	void GiveSpawnedPedWeapon(json params);
	void TeleportSpawnedPedToPlayer(json params);
	void TeleportPlayerToSpawnedPed(json params);
	void DeleteSpawnedPed(json params);
	void GiveAllSpawnedPedsWeapon(json params);
	void TeleportAllSpawnedPedsToPlayer(json params);
	void DeleteAllSpawnedPeds(json params);
	void ReviveNearestHorse(json params);
	void SetHorseMaxHealth(json params);
	void SpawnHorse(json params);
	void SpawnHorseFromInput(json params);
	void SpawnVehicle(json params);
	void SpawnVehicleFromInput(json params);
	void TeleportIntoClosestVehicle(json params);
	void RepairVehicle(json params);
	void BoostVehicle(json params);
	void DeleteCurrentVehicle(json params);
	void RepairEngine(json params);
	void GivePlayerAllWeapons(json params);
	void RemoveAllWeaponsFromPlayer(json params);
	void GivePlayerWeapon(json params);
	void EquipSelectedWeapon(json params);
	void RemoveSelectedWeapon(json params);
	void FillAmmoInSelectedWeapon(json params);
	void GivePlayerMaxAmmo(json params);
	void GivePlayerMAaxAmmoOfType(json params);
	void SetWeather(json params);
	void AddToClockTime(json params);
	void TeleportPlayerForward(json params);
	void TeleportPlayerToWaypoint(json params);
	void TeleportPlayerToCoords(json params);
	void RevealFullMap(json params);
	void KillEveryoneNearby(json params);
	void TestAction(json params);
}
