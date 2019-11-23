#include "pch.h"
#include "Toggles.h"
#include "Routine.h"

void Toggles::OnPlayerInvincibleToggle(bool value)
{
	PLAYER::SET_PLAYER_INVINCIBLE(Game::playerPedId, value);
}