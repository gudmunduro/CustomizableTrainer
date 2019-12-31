#include "pch.h"
#include "Toggles.h"
#include "Routine.h"
#include "Player.h"
#include "PedSpawner.h"
#include "Controls.h"

void Toggles::OnPlayerInvincibleToggle(bool value)
{
	PLAYER::SET_PLAYER_INVINCIBLE(Game::playerPedId, value);
}

void Toggles::OnPlayerVisibleToggle(bool value)
{
	Player().SetVisible(value);
}

void Toggles::OnPlayerNeverWantedToggle(bool value)
{
	if (!value)
		Player().SetWantedLevelMultiplier(1.0);
}

void Toggles::OnPlayerNoRagdollToggle(bool value)
{
	if (!value)
		Player().SetCanRagdoll(true);
}

void Toggles::OnPlayerEveryoneIgnoreToggle(bool value)
{
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), value);
}

void Toggles::OnHorseInvincibleToggle(bool value)
{
	Player player;
	if (player.IsOnMount())
		player.Mount().SetInvincible(value);
}

void Toggles::OnHorseVisibleToggle(bool value)
{
	Player player;
	if (player.IsOnMount())
		player.Mount().SetVisible(value);
}

void Toggles::OnHorseNoRagdollToggle(bool value)
{
	Player player;
	if (player.IsOnMount())
		player.Mount().SetCanRagdoll(value);
		player.SetCanRagdoll(value);
}

void Toggles::OnHorseSuperJumpToggle(bool value)
{
	Player player;
	if (player.IsOnMount())
		player.Mount().SetCanRagdoll(value);
	player.SetCanRagdoll(value);
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
	for each (auto ped in PedSpawner::peds) {
		if (ped->isInvincible != value) {
			ped->ped.SetInvincible(value);
			ped->isInvincible = value;
		}
	}
}

void Toggles::OnAllSpanwedPedsBodyguardToggle(bool value)
{
	for each (auto ped in PedSpawner::peds) {
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
	if (!player.IsInVehicle()) return;
	player.CurrentVehicle().SetVisible(value);
}

void Toggles::OnVehicleVisibleToggle(bool value)
{
	Player player;
	if (!player.IsInVehicle()) return;
	player.CurrentVehicle().SetInvincible(value);
}

void Toggles::OnBoatFlyModeToggle(bool value)
{
	if (value) {
		Routine::StartBoatFlyMode();
	}
	else {
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
		UINT64* counter = getMultilayerPointer<UINT64*>(getGlobalPtr(((DWORD)7 << 18) | 0x1CADEE), std::vector<DWORD>{44});
		UINT64* currentShootType = getMultilayerPointer<UINT64*>(getGlobalPtr(1879534), std::vector<DWORD>{45});
		Game::PrintSubtitle(std::to_string(*currentShootType));
		*currentShootType = 0;
		*counter = 2000000000;
	}
	else {
		UINT64* counter = getGlobalPtr(((DWORD)7 << 18) | 0x1CADEE) + 44;
		*counter = 0;
	}
}
