#include "pch.h"
#include "Toggles.h"
#include "Routine.h"
#include "Player.h"

void Toggles::OnPlayerInvincibleToggle(bool value)
{
	PLAYER::SET_PLAYER_INVINCIBLE(Game::playerPedId, value);
}

void Toggles::OnPlayerVisibleToggle(bool value)
{
	Player().SetVisible(value);
}