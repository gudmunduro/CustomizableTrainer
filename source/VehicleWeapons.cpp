#include "pch.h"
#include "VehicleWeapons.h"
#include "Controls.h"
#include "keyboard.h"

VehicleWeapons::VehicleWeapons()
{
	weaponType = VehicleWeaponType::Cannons;
	shootDelayTimer = 0;
}

#pragma region Shoot bullets

void VehicleWeapons::ShootCannonShells(Player player, Vehicle vehicle, Vector3 dimMin, Vector3 dimMax)
{
	Vector3 weaponOriginR, weaponOriginL;
	Vector3 weaponTargetR, weaponTargetL;

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
}

#pragma endregion

#pragma region Events

void VehicleWeapons::PlayerDidPressShootButton()
{
	Player player;
	auto vehicle = player.CurrentVehicle();
	Vector3 dimMin, dimMax;
	GAMEPLAY::GET_MODEL_DIMENSIONS(vehicle.Model(), &dimMin, &dimMax);

	if (!STREAMING::HAS_MODEL_LOADED(String::Hash("S_CANNONBALL"))) {
		Game::RequestModel(String::Hash("S_CANNONBALL"));
	}

	switch (weaponType) {
		case VehicleWeaponType::Cannons:
			ShootCannonShells(player, vehicle, dimMin, dimMax);
			break;
	}

	shootDelayTimer = GetTickCount() + 50;
}

#pragma endregion

#pragma region Controls

void VehicleWeapons::RespondToControls()
{
	if ((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, XboxControl::INPUT_FRONTEND_LS) || IsKeyDown(VK_ADD)) && GetTickCount() > shootDelayTimer) {
		PlayerDidPressShootButton();
	}
}

#pragma endregion

#pragma region Tick

void VehicleWeapons::Tick()
{
	RespondToControls();
}

#pragma endregion
