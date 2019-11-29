#include "pch.h"
#include "Routine.h"
#include "Toggles.h"
#include "Player.h"
#include "ControlManager.h"

// MARK: Variables
string bottomMesssageText;
DWORD drawBottomTextUntil;

// MARK: Start Routine
void Routine::StartDrawBottomMessage(string message, int time)
{
	bottomMesssageText = message;
	drawBottomTextUntil = GetTickCount() + time;
}

// MARK: Routines
void DrawBottomMessage()
{
	if (GetTickCount() < drawBottomTextUntil) {
		Game::DrawText(bottomMesssageText, { 0.5, 0.9 }, 0.45, 0.45, { 255, 255, 255, 255 }, true);
	}
}

void RunLoopedToggles()
{
	Player player;
	if (*Toggles::playerInvincible && !PLAYER::GET_PLAYER_INVINCIBLE(Game::playerId)) {
		PLAYER::SET_PLAYER_INVINCIBLE(Game::playerId, 1);
	}
	if (*Toggles::playerSuperRun && !player.IsOnMount()) {
		if (ControlManager::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
			ENTITY::APPLY_FORCE_TO_ENTITY(Game::playerPedId, 1, 0.0, 4.4, 0.2, 0.0, 0.0, 0.2, 1, 1, 1, 1, 0, 1);
		}
		if (ControlManager::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
			ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, true);
			ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, false);
		}
	}
	if (*Toggles::playerUnlStamina) {
		player.SetStamina(100.0);
	}
	if (*Toggles::playerUnlSpecialAbility) {
		player.RestoreSpecialAbility();
	}
	if (*Toggles::playerSuperJump) {
		GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(Game::playerId);
	}
	if (*Toggles::horseInvincible && player.IsOnMount()) {
		player.GetMount().SetInvincible(true);
	}
	if (*Toggles::horseSuperRun && player.IsOnMount()) {
		Ped horse = Player().GetMount();
		if (ControlManager::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 4.4, 0.2, 0.0, 0.0, -0.2, 1, 1, 1, 1, 0, 1);
		}
		if (ControlManager::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
			ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), true);
			ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), false);
		}
	}
	if (*Toggles::horseUnlimitedStamina && player.IsOnMount()) {
		player.GetMount().SetStamina(100.0);
	}
	if (*Toggles::weaponInfiniteAmmo) {
		Hash currentWeapon;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
		{
			int maxAmmo;
			if (WEAPON::GET_MAX_AMMO(Game::playerPedId, &maxAmmo, currentWeapon))
				WEAPON::SET_PED_AMMO(Game::playerPedId, currentWeapon, maxAmmo);
			int maxAmmoInClip = WEAPON::GET_MAX_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, 1);
			if (maxAmmoInClip > 0)
				WEAPON::SET_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, maxAmmoInClip);
		}
	}
	if (*Toggles::horseEngineTest) {
		auto currentVehicle = Player().GetCurrentVehicle();
		if (currentVehicle.Exists()) {
			VEHICLE::SET_VEHICLE_UNDRIVEABLE(currentVehicle.GetVehicleId(), false);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(currentVehicle.GetVehicleId(), 100.0f);
			currentVehicle.SetVehicleEngineOn(true);
			currentVehicle.SetEnginePowerMultiplier(4000.0f);
			VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(currentVehicle.GetVehicleId(), true);
		}
	}
}

void Routine::RunAll()
{
	Game::UpdateData();
	DrawBottomMessage();
	RunLoopedToggles();
}