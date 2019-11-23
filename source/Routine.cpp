#include "pch.h"
#include "Routine.h"
#include "Toggles.h"
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
	if (*Toggles::weaponInfiniteAmmo) {
		Hash currentWeapon;
		WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, true, true, true);
		WEAPON::SET_PED_INFINITE_AMMO(Game::playerPedId, true, currentWeapon);
	}
}

void Routine::RunAll()
{
	Game::UpdateData();
	DrawBottomMessage();
	RunLoopedToggles();
}