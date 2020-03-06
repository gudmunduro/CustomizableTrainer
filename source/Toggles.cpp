/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "Toggles.h"
#include "Player.h"
#include "PedSpawner.h"
#include "Controls.h"
#include "BoatFlyMode.h"
#include "CustomBullets.h"
#include "VehicleWeapons.h"

#pragma region Variables used by toggles

std::optional<BoatFlyMode> boatFlyModeController;
VehicleWeapons vehicleWeapons;

#pragma endregion

#pragma region Toggle actions

void Toggles::OnPlayerInvincibleToggle(bool value)
{
	PLAYER::SET_PLAYER_INVINCIBLE(Game::playerPedId, value);
}

void Toggles::OnPlayerVisibleToggle(bool value)
{
	Player().ped.SetVisible(value);
}

void Toggles::OnPlayerNeverWantedToggle(bool value)
{
	if (!value)
		Player().SetWantedLevelMultiplier(1.0);
}

void Toggles::OnPlayerNoRagdollToggle(bool value)
{
	if (!value)
		Player().ped.SetCanRagdoll(true);
}

void Toggles::OnPlayerEveryoneIgnoreToggle(bool value)
{
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), value);
}

void Toggles::OnHorseInvincibleToggle(bool value)
{
	Player player;
	if (player.ped.IsOnMount())
		player.ped.Mount().SetInvincible(value);
}

void Toggles::OnHorseVisibleToggle(bool value)
{
	Player player;
	if (player.ped.IsOnMount())
		player.ped.Mount().SetVisible(value);
}

void Toggles::OnHorseNoRagdollToggle(bool value)
{
	Player player;
	if (player.ped.IsOnMount()) {
		player.ped.Mount().SetCanRagdoll(value);
		player.ped.SetCanRagdoll(value);
	}
}

void Toggles::OnHorseSuperJumpToggle(bool value)
{
	Player player;
	if (player.ped.IsOnMount())
		player.ped.Mount().SetCanRagdoll(value);
	player.ped.SetCanRagdoll(value);
}

void Toggles::OnSpawnedPedInvincibleToggle(bool value)
{
	if (!PedSpawner::IsAnyPedSelected()) {
		Game::PrintSubtitle("Error: No ped selected");
		return;
	}

	PedSpawner::CurrentPedData()->isInvincible = value;

	PedSpawner::CurrentPed().SetInvincible(value);
}

void Toggles::OnSpanwedPedBodyguardToggle(bool value)
{
	if (!PedSpawner::IsAnyPedSelected()) {
		Game::PrintSubtitle("Error: No ped selected");
		return;
	}

	PedSpawner::CurrentPedData()->isBodyGuard = value;

	if (value)
		PedSpawner::CurrentPed().SetAsGroupMember(Player().Group());
	else
		PedSpawner::CurrentPed().RemoveFromGroup();
}

void Toggles::OnAllSpawnedPedsInvincibleToggle(bool value)
{
	for (auto ped : PedSpawner::peds) {
		if (ped->isInvincible != value) {
			ped->ped.SetInvincible(value);
			ped->isInvincible = value;
		}
	}
}

void Toggles::OnAllSpanwedPedsBodyguardToggle(bool value)
{
	for (auto ped : PedSpawner::peds) {
		if (ped->isBodyGuard != value) {
			if (value)
				ped->ped.SetAsGroupMember(Player().Group());
			else
				ped->ped.RemoveFromGroup();
			ped->isBodyGuard = value;
		}
	}
}

void Toggles::OnVehicleInvincibleToggle(bool value)
{
	Player player;
	if (!player.ped.IsInVehicle()) return;
	player.ped.CurrentVehicle().SetVisible(value);
}

void Toggles::OnVehicleVisibleToggle(bool value)
{
	Player player;
	if (!player.ped.IsInVehicle()) return;
	player.ped.CurrentVehicle().SetInvincible(value);
}

void Toggles::OnBoatFlyModeToggle(bool value)
{
	if (value) {
		boatFlyModeController = std::make_optional(BoatFlyMode());
	}
	else {
		boatFlyModeController = std::nullopt;
		CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_RB, false);
		CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_ACCEPT, false);
		CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_X, false);
		CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_AXIS_Y, false);
		CONTROLS::DISABLE_CONTROL_ACTION(0, XboxControl::INPUT_FRONTEND_AXIS_X, false);
	}
}

void Toggles::OnPauseClockToggle(bool value)
{
	TIME::PAUSE_CLOCK(value, 0);
}

void Toggles::OnFreezeWeatherToggle(bool value)
{
	GAMEPLAY::FREEZE_WEATHER(value);
}

void Toggles::OnWeaponExtraDamageToggle(bool value)
{
	if (!value)
		Player().SetWeaponDamageModifier(1.0);
}

void Toggles::OnDisableInvisibleSniperToggle(bool value)
{
	if (value) {
		// UINT64* counter = getGlobalPtr(((DWORD)7 << 18) | 0x1CADEE) + 44;
		// UINT64* counter = getMultilayerPointer<UINT64*>(getGlobalPtr(((DWORD)7 << 18) | 0x1CADEE), std::vector<DWORD>{44});
		// *counter = 2000000000;
	}
	else {
		UINT64* counter = getGlobalPtr(((DWORD)7 << 18) | 0x1CADEE) + 44;
		*counter = 0;
	}
}

#pragma endregion

#pragma region Player toggle loops

void Toggles::PlayerInvincibleLoop()
{
	if (!PLAYER::GET_PLAYER_INVINCIBLE(Game::playerId))
		PLAYER::SET_PLAYER_INVINCIBLE(Game::playerId, 1);
}

void Toggles::PlayerSuperRunLoop()
{
	Player player;
	if (player.ped.IsOnMount()) return;
		
	if (Controls::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
		ENTITY::APPLY_FORCE_TO_ENTITY(Game::playerPedId, 1, 0.0, 4.4, 0.2, 0.0, 0.0, 0.2, 1, 1, 1, 1, 0, 1);
	}
	if (Controls::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
		ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, true);
		ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, false);
	}
}

void Toggles::PlayerUnlStaminaLoop()
{
	Player player;
	player.ped.SetStamina(100.0);
}

void Toggles::PlayerUnlSpecialAbilityLoop()
{
	Player player;
	player.RestoreSpecialAbility();
}

void Toggles::PlayerSuperJumpLoop()
{
	GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(Game::playerId);
}

void Toggles::PlayerNeverWantedLoop()
{
	Player player;

	player.StopPursuit();
	player.SetBounty(0);
	player.SetWantedLevelMultiplier(0.0);
}

void Toggles::PlayerNoRagdollLoop()
{
	Player player;
	player.ped.SetCanRagdoll(false);
}

void Toggles::PlayerExplosiveMeleeLoop()
{
}

void Toggles::PlayerEveryoneIgnoreLoop()
{
	Player player;
	player.SetEveryoneIgnore(true);
}

void Toggles::ForceFirstPersonOnFootLoop()
{
	Player player;
	if (player.ped.IsOnFoot())
		CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
}

#pragma endregion     

#pragma region Horse toggle loops

void Toggles::HorseInvincibleLoop()
{
	Player player;
	if (!player.ped.IsOnMount()) return;
	player.ped.Mount().SetInvincible(true);
}

void Toggles::HorseSuperRunLoop()
{
	Player player;
	if (!player.ped.IsOnMount()) return;
	
	Ped horse = player.ped.Mount();
	if (Controls::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
		horse.SetCanRagdoll(false);
		player.ped.SetCanRagdoll(false);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 14.4, 0.0, /**/ -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 14.4, 0.0, /**/ 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 0.0, 0.8, /**/ -0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 0.0, 0.8, /**/ 0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
	}
	if (Controls::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
		ENTITY::FREEZE_ENTITY_POSITION(horse.id, true);
		ENTITY::FREEZE_ENTITY_POSITION(horse.id, false);
	}
}

void Toggles::HorseNoRagdollLoop()
{
	Player player;
	if (!player.ped.IsOnMount()) return;
	
	player.ped.Mount().SetCanRagdoll(false);
	player.ped.Mount().SetCanRagdoll(false);
}

void Toggles::HorseSuperJumpLoop()
{
	Player player;
	if (!player.ped.IsOnMount()) return;
	
	Ped horse = player.ped.Mount();
	if (Controls::IsFunctionControlPressed(FunctionControl::HorseJump)) {
		horse.SetCanRagdoll(false);
		player.ped.SetCanRagdoll(false);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 0.0, 1.0, /**/ -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 0.0, 1.0, /**/ 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 0.0, 1.0, /**/ -0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.id, 1, 0.0, 0.0, 1.0, /**/ 0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
	}
}

void Toggles::HorseUnlimitedStaminaLoop()
{
	Player player;
	if (!player.ped.IsOnMount()) return;
	
	player.ped.Mount().SetStamina(100.0);
}

void Toggles::ForceFirstPersonOnHorseLoop()
{
	Player player;
	if (!player.ped.IsOnMount()) return;
	
	CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
}

#pragma endregion

#pragma region Vehicle toggle loops

void Toggles::VehicleInvincibleLoop()
{
	Player player;
	if (!player.ped.IsInVehicle()) return;
	
	player.ped.CurrentVehicle().SetInvincible(true);
}

void Toggles::VehicleVisibleLoop()
{
	Player player;
	if (!player.ped.IsInVehicle()) return;

	player.ped.CurrentVehicle().SetVisible(true);
}

void Toggles::VehicleCannonsLoop()
{
	// TODO: Add vehicle cannons
	Player player;
	if (!player.ped.IsInVehicle()) return;

	vehicleWeapons.Tick();
}

void Toggles::VehicleBindBoostLoop()
{
	Player player;
	if (!player.ped.IsInVehicle()) return;

	if (Controls::IsFunctionControlPressed(FunctionControl::BindBoost))
		player.ped.CurrentVehicle().SetForwardSpeed(27.00);
}

void Toggles::ForceFirstPersonInVehicleLoop()
{
	Player player;
	if (!player.ped.IsInVehicle()) return;

	CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
}

void Toggles::BoatFlyModeLoop()
{
	boatFlyModeController->Tick();
}

#pragma endregion

#pragma region Weapon toggle loops

void Toggles::WeaponInfiniteAmmoLoop()
{
	Hash currentWeapon;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
	{
		int maxAmmo;
		if (WEAPON::GET_MAX_AMMO(Game::playerPedId, &maxAmmo, currentWeapon))
			WEAPON::SET_PED_AMMO(Game::playerPedId, currentWeapon, maxAmmo);
	}
}

void Toggles::WeaponInfiniteAmmoInClipLoop()
{
	Hash currentWeapon;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
	{
		int maxAmmoInClip = WEAPON::GET_MAX_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, 1);
		if (maxAmmoInClip > 0)
			WEAPON::SET_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, maxAmmoInClip);
	}
}

void Toggles::WeaponExtraDamageLoop()
{
	Player player;
	player.SetWeaponDamageModifier(50.0);
}

void Toggles::WeaponCustomBulletsLoop()
{
	CustomBulletController::Tick();
}

#pragma endregion

#pragma region Time toggle loops

void Toggles::SystemClockSyncLoop()
{
	time_t now = time(0);
	tm t;
	localtime_s(&t, &now);
	TIME::SET_CLOCK_TIME(t.tm_hour, t.tm_min, t.tm_sec);
}

#pragma endregion

#pragma region Weather toggle loops

void Toggles::FreezeWeatherLoop()
{
	GAMEPLAY::FREEZE_WEATHER(true);
}

#pragma endregion

#pragma region Misc toggle loops

void Toggles::HideHudLoop()
{
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
}

// MAKR: Test toggle loops

void Toggles::HorseEngineTestLoop()
{
	auto currentVehicle = Player().ped.CurrentVehicle();
	if (currentVehicle.Exists()) {
		//VEHICLE::SET_VEHICLE_UNDRIVEABLE(currentVehicle.GetVehicleId(), false);
		//VEHICLE::SET_VEHICLE_ENGINE_HEALTH(currentVehicle.GetVehicleId(), 100.0f);
		//currentVehicle.SetVehicleEngineOn(true);
		currentVehicle.SetEnginePowerMultiplier(1000.0f);
		//VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(currentVehicle.GetVehicleId(), true);
	}
}

void Toggles::DisableInvisibleSniperLoop()
{
	UINT64* counter = getMultilayerPointer<UINT64*>(getGlobalPtr(0x1CADEE), std::vector<DWORD>{44});
	*counter = GAMEPLAY::GET_GAME_TIMER();
}

#pragma endregion