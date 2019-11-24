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
	if (*Toggles::playerInvincible && !PLAYER::GET_PLAYER_INVINCIBLE(Game::playerId)) {
		PLAYER::SET_PLAYER_INVINCIBLE(Game::playerId, 1);
	}
	if (*Toggles::playerSuperRun) {
		if (ControlManager::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
			ENTITY::APPLY_FORCE_TO_ENTITY(Game::playerPedId, 1, 0.0, 3.4, 0.4, 0.0, 0.0, 0.0, 1, 1, 1, 1, 0, 1);
		}
		if (ControlManager::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
			ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, true);
			ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, false);
		}
	}
	if (*Toggles::playerSuperJump) {
		GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(Game::playerId);
	}
	if (*Toggles::weaponInfiniteAmmo) {
		Hash currentWeapon;
		WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, true, true, true);
		WEAPON::SET_PED_INFINITE_AMMO(Game::playerPedId, true, currentWeapon);
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