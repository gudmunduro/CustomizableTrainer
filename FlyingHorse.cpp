#include "pch.h"
#include "FlyingHorse.h"
#include "alt-log.h"

FlyingHorse::FlyingHorse()
{
	
}

void FlyingHorse::Tick()
{
	if (PAD::IS_CONTROL_PRESSED(0, String::Hash("input_frontend_lb"))) {
		Player playerId = PLAYER::PLAYER_ID();

		PLAYER::SET_PLAYER_INVINCIBLE(playerId, true);
	}
	if (PAD::IS_CONTROL_PRESSED(0, String::Hash("input_frontend_rb"))) {
		Ped pedId = PLAYER::PLAYER_PED_ID();

		Vector3 playerLocation = ENTITY::GET_ENTITY_COORDS(pedId, false, false); // Have no idea what the third parameter is
		Vehicle closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(playerLocation.x, playerLocation.y, playerLocation.z, 100.0f, 0, 70);

		if (closestVehicle != 0) {
			PED::SET_PED_INTO_VEHICLE(pedId, closestVehicle, -1);
		}
	}
	if (PAD::IS_CONTROL_PRESSED(0, String::Hash("input_frontend_x"))) {
		Ped pedId = PLAYER::PLAYER_PED_ID();

		if (PED::IS_PED_IN_ANY_VEHICLE(pedId, true)) {
			Vehicle currentVehicle = PED::GET_VEHICLE_PED_IS_USING(pedId);

			ENTITY::APPLY_FORCE_TO_ENTITY(currentVehicle, 1, 0, 0, 3.6f, 0, 100.0f, 0, true, false, true, true, true, true);
		}
	}
	if (PAD::IS_CONTROL_PRESSED(0, String::Hash("input_frontend_cancel"))) {
		Ped pedId = PLAYER::PLAYER_PED_ID();

		if (PED::IS_PED_IN_ANY_VEHICLE(pedId, true)) {
			Vehicle currentVehicle = PED::GET_VEHICLE_PED_IS_USING(pedId);

			VEHICLE::SET_VEHICLE_FORWARD_SPEED(currentVehicle, 100.0f);
			// Native::Invoke<void, int, int, float, float, float, bool, bool, bool, bool>(N::APPLY_FORCE_TO_ENTITY, currentVehicle, 1, 0, 100.0f, 0, 0, 0, 0, true, true, true, true, false, true);
		}
	}
	if (PAD::IS_CONTROL_PRESSED(0, String::Hash("input_frontend_accept"))) {
		Ped pedId = PLAYER::PLAYER_PED_ID();

		ENTITY::APPLY_FORCE_TO_ENTITY(pedId, 1, 0, 3.0f, 0, 0, 0, 0, true, true, true, true, false, true);
	}
}
