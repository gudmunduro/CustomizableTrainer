#pragma once
#include "pch.h"

namespace Actions {
	void SetPlayerMaxHealth(json params);
	void ClearPlayerWantedLevel(json params);
	void SpawnVehicle(json params);
	void DeleteCurrentVehicle(json params);
}
