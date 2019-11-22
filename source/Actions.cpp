#include "pch.h"
#include "Actions.h"
#include "PedManager.h"
#include "Routine.h"

namespace Actions {
	void SetPlayerMaxHealth()
	{
		auto player = PedManager::WithPlayerPed();
		player.SetHealth(player.GetMaxHealth());
		Routine::StartDrawBottomMessage("Player health filled");
	}
}