#include "pch.h"
#include "Routine.h"
#include "Toggles.h"
#include "Player.h"
#include "Controls.h"
#include "HorseFlyMode.h"
#include "BoatFlyMode.h"
#include "Numbers.h"
#include "HotkeyController.h"
#include "Controls.h"
#include "keyboard.h"
#include "CustomBullets.h"

/*
// MARK: Variables
string bottomMesssageText;
DWORD drawBottomTextUntil;
HorseFlyMode* horseFlyMode;
BoatFlyMode* boatFlyMode;
DWORD vehicleCannonTimer = 0;
CustomBulletController customBulletController (CustomBulletType::Explosion);
VehicleWeapons vehicleWeapons;


// MARK: Start Routine
void Routine::StartDrawBottomMessage(string message, int time)
{
	bottomMesssageText = message;
	drawBottomTextUntil = GetTickCount() + time;
}

void Routine::StartBoatFlyMode()
{
	boatFlyMode = new BoatFlyMode();
}

void Routine::SetCustomBulletType(int type) 
{
	switch (type) {
	case 0:
		customBulletController.bulletType = CustomBulletType::Explosion;
		break;
	case 1:
		customBulletController.bulletType = CustomBulletType::LargeExplosion;
		break;
	case 2:
		customBulletController.bulletType = CustomBulletType::Fountain;
		break;
	case 3:
		customBulletController.bulletType = CustomBulletType::Gas;
		break;
	case 4:
		customBulletController.bulletType = CustomBulletType::Lightning;
		break;
	case 5:
		customBulletController.bulletType = CustomBulletType::Fire;
		break;
	case 6:
		customBulletController.bulletType = CustomBulletType::LargeFire;
		break;
	case 7:
		customBulletController.bulletType = CustomBulletType::Teleport;
		break;
	case 8:
		customBulletController.bulletType = CustomBulletType::Delete;
		break;
	case 9:
		customBulletController.bulletType = CustomBulletType::WaterHydrant;
		break;
	case 10:
		customBulletController.bulletType = CustomBulletType::Moonshine;
		break;
	}
}

void Routine::SetVehicleWeaponType(VehicleWeaponType weaponType)
{
	vehicleWeapons.weaponType = weaponType;
}

// MARK: Routines
void DrawBottomMessage()
{
	if (GetTickCount() < drawBottomTextUntil) {
		// Game::DrawText(bottomMesssageText, { 50.0f, 90.0f }, 45.0f, { 255, 255, 255, 255 }, true);
		UI::SET_TEXT_SCALE(1.0f, 45.0f / 100.0f);
		char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", "<FONT FACE='$catalog1' COLOR='#ff0000'><P ALIGN='CENTER'>Test</P></FONT>");
		// varString = GAMEPLAY::CREATE_STRING(0x2a, "COLOR_STRING", varString);
		varString = invoke<char*, int, char*, int, char*>(0xFA925AC00EB830B9, 0x2a, "COLOR_STRING", 0, varString);
		UI::DRAW_TEXT(varString, 50.0f / 100.0f, 90.0f / 100.0f);
	}
}


// MARK: Toggles

void RunSuperRunToggle()
{
	if (Controls::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
		ENTITY::APPLY_FORCE_TO_ENTITY(Game::playerPedId, 1, 0.0, 4.4, 0.2, 0.0, 0.0, 0.2, 1, 1, 1, 1, 0, 1);
	}
	if (Controls::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
		ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, true);
		ENTITY::FREEZE_ENTITY_POSITION(Game::playerPedId, false);
	}
}

void RunHorseSuperRunToggle()
{
	Player player;
	Ped horse = player.Mount();
	if (Controls::IsFunctionControlPressed(FunctionControl::PlayerRun)) {
		horse.SetCanRagdoll(false);
		player.SetCanRagdoll(false);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 14.4, 0.0, /**//* -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 14.4, 0.0, /**//* 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 0.8, /**//* -0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 0.8, /**//* 0.4, 3.8, 0.0, 1, 1, 1, 1, 0, 1);
	}
	if (Controls::IsFunctionControlJustReleased(FunctionControl::PlayerRun)) {
		ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), true);
		ENTITY::FREEZE_ENTITY_POSITION(horse.GetPedId(), false);
	}
}

void RunHorseSuperJumpToggle()
{
	Player player;
	Ped horse = player.Mount();
	if (Controls::IsFunctionControlPressed(FunctionControl::HorseJump)) {
		horse.SetCanRagdoll(false);
		player.SetCanRagdoll(false);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**//* -0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**//* 0.4, -0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**//* -0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
		ENTITY::APPLY_FORCE_TO_ENTITY(horse.GetPedId(), 1, 0.0, 0.0, 1.0, /**//* 0.4, 0.8, 0.0, 1, 1, 1, 1, 0, 1);
	}
}

void RunVehicleCannonsToggle()
{
	Player player;

	if ((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_LS) || IsKeyDown(VK_ADD)) && GetTickCount() > vehicleCannonTimer) {
		auto vehicle = player.CurrentVehicle();
		Vector3 weaponOriginR, weaponOriginL;
		Vector3 weaponTargetR, weaponTargetL;
		Vector3 dimMin, dimMax;
		GAMEPLAY::GET_MODEL_DIMENSIONS(vehicle.Model(), &dimMin, &dimMax);

		if (!STREAMING::HAS_MODEL_LOADED(String::Hash("S_CANNONBALL"))) {
			Game::RequestModel(String::Hash("S_CANNONBALL"));
		}

		weaponOriginR = vehicle.OffsetInWorldCoords({ dimMin.x - 0.22f, dimMin.y + 1.25f, 0.5f });
		weaponTargetR = vehicle.OffsetInWorldCoords({ dimMin.x - 0.22f, dimMin.y + 350.0f, 0.5f });

		weaponOriginL = vehicle.OffsetInWorldCoords({ 0.22f - dimMax.x, dimMin.y + 1.25f, 0.5f });
		weaponTargetL = vehicle.OffsetInWorldCoords({ 0.22f - dimMax.x, dimMin.y + 350.0f, 0.5f });

		GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(weaponOriginR.x, weaponOriginR.y, weaponOriginR.z,
			weaponTargetR.x, weaponTargetR.y, weaponTargetR.z,
			250, 1, String::Hash("WEAPON_TURRET_REVOLVING_CANNON"), player.GetPedId(), 1, 1, vehicle.Speed() + 20.0f, 0);
		GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(weaponOriginL.x, weaponOriginL.y, weaponOriginL.z,
			weaponTargetL.x, weaponTargetL.y, weaponTargetL.z,
			250, 1, String::Hash("WEAPON_TURRET_REVOLVING_CANNON"), player.GetPedId(), 1, 1, vehicle.Speed() + 20.0f, 0);

		vehicleCannonTimer = GetTickCount() + 50;
	}
}

void RunWeaponInfiniteAmmoToggle()
{
	Hash currentWeapon;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
	{
		int maxAmmo;
		if (WEAPON::GET_MAX_AMMO(Game::playerPedId, &maxAmmo, currentWeapon))
			WEAPON::SET_PED_AMMO(Game::playerPedId, currentWeapon, maxAmmo);
	}
}

void RunWeaponInfiniteAmmoInClipToggle()
{
	Hash currentWeapon;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Game::playerPedId, &currentWeapon, 0, 0, 0) && WEAPON::IS_WEAPON_VALID(currentWeapon))
	{
		int maxAmmoInClip = WEAPON::GET_MAX_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, 1);
		if (maxAmmoInClip > 0)
			WEAPON::SET_AMMO_IN_CLIP(Game::playerPedId, currentWeapon, maxAmmoInClip);
	}
}

void RunWeaponCustomBulletToggle() 
{
	customBulletController.Tick();
}

void RunLoopedToggles()
{
	Player player;

	if (Toggles::playerInvincible && !PLAYER::GET_PLAYER_INVINCIBLE(Game::playerId))
		PLAYER::SET_PLAYER_INVINCIBLE(Game::playerId, 1);

	if (Toggles::playerSuperRun && !player.IsOnMount())
		RunSuperRunToggle();

	if (Toggles::playerUnlStamina)
		player.SetStamina(100.0);

	if (Toggles::playerUnlSpecialAbility)
		player.RestoreSpecialAbility();

	if (Toggles::playerSuperJump)
		GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(Game::playerId);

	if (Toggles::playerNeverWanted) {
		player.StopPursuit();
		player.SetBounty(0);
		player.SetWantedLevelMultiplier(0.0);
	}

	if (Toggles::playerNoRagdoll)
		player.SetCanRagdoll(false);

	if (Toggles::playerExplosiveMelee) {}

	if (Toggles::playerEveryoneIgnore)
		player.SetEveryoneIgnore(true);

	if (Toggles::forceFirstPersonOnFoot && player.IsOnFoot())
		CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();

	// Horse
	if (Toggles::horseInvincible && player.IsOnMount())
		player.Mount().SetInvincible(true);

	if (Toggles::horseSuperRun && player.IsOnMount())
		RunHorseSuperRunToggle();

	if (Toggles::horseNoRagdoll && player.IsOnMount()) {
		player.Mount().SetCanRagdoll(false);
		player.Mount().SetCanRagdoll(false);
	}

	if (Toggles::horseSuperJump && player.IsOnMount())
		RunHorseSuperJumpToggle();

	if (Toggles::horseUnlimitedStamina && player.IsOnMount())
		player.Mount().SetStamina(100.0);

	if (Toggles::horseFlyMode) {
		if (horseFlyMode == nullptr) {
			horseFlyMode = new HorseFlyMode();
		}
		horseFlyMode->Tick();
	}

	if (Toggles::forceFirstPersonOnHorse && player.IsOnMount())
		CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();

	// Vehicle
	if (Toggles::vehicleInvincible && player.IsInVehicle())
		player.CurrentVehicle().SetInvincible(true);

	if (!Toggles::vehicleVisible && player.IsInVehicle())
		player.CurrentVehicle().SetVisible(true);

	if (Toggles::vehicleCannons && player.IsInVehicle())
		RunVehicleCannonsToggle();

	if (Toggles::vehicleBindBoost && player.IsInVehicle() && Controls::IsFunctionControlPressed(FunctionControl::BindBoost))
		player.CurrentVehicle().SetForwardSpeed(27.00);

	if (Toggles::forceFirstPersonInVehicle && player.IsInVehicle())
		CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();

	if (Toggles::boatFlyMode)
		boatFlyMode->Tick();

	// Weapons
	if (Toggles::weaponInfiniteAmmo)
		RunWeaponInfiniteAmmoToggle();

	if (Toggles::weaponInfiniteAmmoInClip)
		RunWeaponInfiniteAmmoInClipToggle();

	if (Toggles::weaponExtraDamage)
		player.SetWeaponDamageModifier(50.0);

	if (Toggles::weaponCustomBullets)
		RunWeaponCustomBulletToggle();

	// Time
	if (Toggles::systemClockSync) {
		time_t now = time(0);
		tm t;
		localtime_s(&t, &now);
		TIME::SET_CLOCK_TIME(t.tm_hour, t.tm_min, t.tm_sec);
	}

	// Weather
	if (Toggles::freezeWeather)
		GAMEPLAY::FREEZE_WEATHER(true);

	// Misc
	if (Toggles::hideHud)
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();

	// Test
	if (Toggles::horseEngineTest) {
		auto currentVehicle = Player().CurrentVehicle();
		if (currentVehicle.Exists()) {
			VEHICLE::SET_VEHICLE_UNDRIVEABLE(currentVehicle.GetVehicleId(), false);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(currentVehicle.GetVehicleId(), 100.0f);
			currentVehicle.SetVehicleEngineOn(true);
			currentVehicle.SetEnginePowerMultiplier(4000.0f);
			VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(currentVehicle.GetVehicleId(), true);
		}
	}

	if (Toggles::disableInvisibleSniper) {
		UINT64* counter = getMultilayerPointer<UINT64*>(getGlobalPtr(0x1CADEE), std::vector<DWORD>{44});
		*counter = GAMEPLAY::GET_GAME_TIMER();
	}

}

*/

//	MARK: Numbers

void RunLoopedNumbers()
{
	Player player;

	if (Numbers::playerNoiseMultiplier != 1.0f) {
		player.SetNoiseMultiplier(Numbers::playerNoiseMultiplier);
		player.SetSneakingNoiseMultiplier(Numbers::playerNoiseMultiplier);
	}

	if (Numbers::enginePowerMultiplier && player.IsInVehicle() && player.CurrentVehicle().IsBoat())
		player.CurrentVehicle().SetEnginePowerMultiplier(Numbers::enginePowerMultiplier);

	if (Numbers::timeScale != 1.0f)
		GAMEPLAY::SET_TIME_SCALE(Numbers::timeScale);

	if (Numbers::weaponDamageLevel != 1.0f)
		player.SetWeaponDamageModifier(Numbers::weaponDamageLevel);

	if (Numbers::meleeDamageLevel != 1.0f)
		player.SetMeleeDamageModifier(Numbers::meleeDamageLevel);

	if (Numbers::windSpeed != 1.0f)
		GAMEPLAY::SET_WIND_SPEED(Numbers::windSpeed);

	if (Numbers::timeCycleStrength != 1.0f)
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(Numbers::timeCycleStrength);
}

void Routine::RunAll()
{
	RunLoopedNumbers();
}