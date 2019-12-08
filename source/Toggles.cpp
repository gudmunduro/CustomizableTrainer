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
