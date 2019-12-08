#include "pch.h"
#include "Routine.h"
#include "Toggles.h"
#include "Player.h"
#include "ControlManager.h"
#include "HorseFlyMode.h"
#include "Numbers.h"

// MARK: Variables
string bottomMesssageText;
DWORD drawBottomTextUntil;
HorseFlyMode* horseFlyMode;


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

	/*
	
		Toggles
	
	*/

	// Player
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

	if (*Toggles::playerNeverWanted) {
		player.StopPursuit();
		player.SetBounty(0);
		player.SetWantedLevelMultiplier(0.0);
	}

	if (*Toggles::playerNoRagdoll) {
		player.SetCanRagdoll(false);
	}

	if (*Toggles::playerExplosiveMelee) {

	}

	if (*Toggles::playerEveryoneIgnore) {
		player.SetEveryoneIgnore(true);
	}

	// Horse
	if (*Toggles::horseInvincible && player.IsOnMount()) {
		player.GetMount().SetInvincible(true);
	}

	if (*Toggles::horseSuperRun && player.IsOnMount()) {
		Ped horse = Player().GetMount();
		if (ControlManager::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
			horse.SetCanRagdoll(false);
			player.SetCanRagdoll(false);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 14.4, 0.0, /**/ -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 14.4, 0.0, /**/ 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 0.8, /**/ -0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 0.8, /**/ 0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
		}
		if (ControlManager::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
			ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), true);
			ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), false);
		}
	}

	if (*Toggles::horseNoRagdoll && player.IsOnMount()) {
		player.GetMount().SetCanRagdoll(false);
		player.GetMount().SetCanRagdoll(false);
	}

	if (*Toggles::horseSuperJump && player.IsOnMount()) {
		Ped horse = player.GetMount();
		if (ControlManager::IsFunctionControlPressed(FunctionControl::HorseJump)) {
			horse.SetCanRagdoll(false);
			player.SetCanRagdoll(false);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ -0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**/ 0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
		}
	}

	if (*Toggles::horseUnlimitedStamina && player.IsOnMount()) {
		player.GetMount().SetStamina(100.0);
	}

	if (*Toggles::horseFlyMode) {
		if (horseFlyMode == nullptr) {
			horseFlyMode = new HorseFlyMode();
		}
		horseFlyMode->Tick();
	}
	
	// Vehicle
	if (*Toggles::vehicleBindBoost && player.IsInVehicle()) {
		if (ControlManager::IsFunctionControlPressed(FunctionControl::BindBoost)) {
			player.GetCurrentVehicle().SetForwardSpeed(27.00);
		}
	}

	// Weapons
	if (*Toggles::weaponInfiniteAmmo) {
		Hash currentWeapon;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
		{
			int maxAmmo;
			if (WEAPON::GET_MAX_AMMO(Game::playerPedId, &maxAmmo, currentWeapon))
				WEAPON::SET_PED_AMMO(Game::playerPedId, currentWeapon, maxAmmo);
		}
	}

	if (*Toggles::weaponInfiniteAmmoInClip) {
		Hash currentWeapon;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
		{
			int maxAmmoInClip = WEAPON::GET_MAX_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, 1);
			if (maxAmmoInClip > 0)
				WEAPON::SET_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, maxAmmoInClip);
		}
	}

	if (*Toggles::weaponExtraDamage) {
		player.SetWeaponDamageModifier(50.0);
	}

	if (*Toggles::weaponExplosiveAmmo) {
		if (player.IsTargetingAnything() || player.IsFreeAiming())
		{
			EntityId target;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(player.GetPlayerId(), &target))
			{
				Vector3 position = ENTITY::GET_ENTITY_COORDS(target, false, false);
				FIRE::ADD_EXPLOSION(position.x, position.y, position.z, 0, 100.0f, true, false, true);
			}
		}
	}

	// Time
	if (*Toggles::systemClockSync) {
		time_t now = time(0);
		tm t;
		localtime_s(&t, &now);
		TIME::SET_CLOCK_TIME(t.tm_hour, t.tm_min, t.tm_sec);
	}

	// Weather
	if (*Toggles::freezeWeather) {
		GAMEPLAY::FREEZE_WEATHER(true);
	}

	// Misc
	if (*Toggles::hideHud) {
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}

	// Test
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

	/*

		Numbers

	*/

	if (Numbers::playerNoiseMultiplier != 1.0f) {
		player.SetNoiseMultiplier(Numbers::playerNoiseMultiplier);
		player.SetSneakingNoiseMultiplier(Numbers::playerNoiseMultiplier);
	}
	
	if (Numbers::timeScale != 1.0f) { // Timescale modified
		GAMEPLAY::SET_TIME_SCALE(Numbers::timeScale);
	}

	if (Numbers::weaponDamageLevel != 1.0f) {
		player.SetWeaponDamageModifier(Numbers::weaponDamageLevel);
	}

	if (Numbers::meleeDamageLevel != 1.0f) {
		player.SetMeleeDamageModifier(Numbers::meleeDamageLevel);
	}

	if (Numbers::windSpeed != 1.0f) {
		GAMEPLAY::SET_WIND_SPEED(Numbers::windSpeed);
	}

	if (Numbers::timeCycleStrength != 1.0f) {
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(Numbers::timeCycleStrength);
	}
}

void Routine::RunAll()
{
	Game::UpdateData();
	DrawBottomMessage();
	RunLoopedToggles();
}