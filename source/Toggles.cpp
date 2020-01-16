#include "pch.h"
#include "Toggles.h"
#include "Player.h"
#include "PedSpawner.h"
#include "Controls.h"
#include "HorseFlyMode.h"
#include "BoatFlyMode.h"
#include "CustomBullets.h"
#include "VehicleWeapons.h"

#pragma region Variables used by toggles

BoatFlyMode* boatFlyModeController;
VehicleWeapons vehicleWeapons;

#pragma endregion

#pragma region Toggle event handlers

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
		boatFlyModeController = new BoatFlyMode();
	}
	else {
		if (boatFlyModeController != nullptr)
			delete boatFlyModeController;
		boatFlyModeController = nullptr;
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
	if (player.IsOnMount()) return;
		
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
	player.SetStamina(100.0);
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
	player.SetCanRagdoll(false);
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
	if (player.IsOnFoot())
		CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
}

#pragma endregion     

#pragma region Horse toggle loops

void Toggles::HorseInvincibleLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	player.Mount().SetInvincible(true);
}

void Toggles::HorseSuperRunLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	
	Ped horse = player.Mount();
	if (Controls::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
		horse.SetCanRagdoll(false);
		player.SetCanRagdoll(false);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 14.4, 0.0, /**/ -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 14.4, 0.0, /**/ 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 0.8, /**/ -0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 0.8, /**/ 0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
	}
	if (Controls::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
		ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), true);
		ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), false);
	}
}

void Toggles::HorseNoRagdollLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	
	player.Mount().SetCanRagdoll(false);
	player.Mount().SetCanRagdoll(false);
}

void Toggles::HorseSuperJumpLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	
	Ped horse = player.Mount();
	if (Controls::IsFunctionControlPressed(FunctionControl::HorseJump)) {
		horse.SetCanRagdoll(false);
		player.SetCanRagdoll(false);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ -0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ 0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
	}
}

void Toggles::HorseUnlimitedStaminaLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	
	player.Mount().SetStamina(100.0);
}

void Toggles::HorseFlyModeLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	
	/*
	if (horseFlyMode == nullptr) {
		horseFlyMode = new HorseFlyMode();
	}
	horseFlyMode->Tick();
	*/
}

void Toggles::ForceFirstPersonOnHorseLoop()
{
	Player player;
	if (!player.IsOnMount()) return;
	
	CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
}

#pragma endregion

#pragma region Vehicle toggle loops

void Toggles::VehicleInvincibleLoop()
{
	Player player;
	if (!player.IsInVehicle()) return;
	
	player.CurrentVehicle().SetInvincible(true);
}

void Toggles::VehicleVisibleLoop()
{
	Player player;
	if (!player.IsInVehicle()) return;

	player.CurrentVehicle().SetVisible(true);
}

void Toggles::VehicleCannonsLoop()
{
	// TODO: Add vehicle cannons
	Player player;
	if (!player.IsInVehicle()) return;

	vehicleWeapons.Tick();
}

void Toggles::VehicleBindBoostLoop()
{
	Player player;
	if (!player.IsInVehicle()) return;

	if (Controls::IsFunctionControlPressed(FunctionControl::BindBoost))
		player.CurrentVehicle().SetForwardSpeed(27.00);
}

void Toggles::ForceFirstPersonInVehicleLoop()
{
	Player player;
	if (!player.IsInVehicle()) return;

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
	auto currentVehicle = Player().CurrentVehicle();
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