#include "pch.h"
#include "Player.h"

Player::Player() : Ped(Game::playerPedId)
{
	playerId = Game::playerId;
}

// MARK: Manange
void Player::SetModel(Hash model)
{
	Game::RequestModel(model);
	PLAYER::SET_PLAYER_MODEL(playerId, model, false);
	Game::UpdateData();
}

void Player::SetInvincible(bool invincible)
{
	PLAYER::SET_PLAYER_INVINCIBLE(playerId, invincible);
}

void Player::RestoreStamina(float to)
{
	PLAYER::RESTORE_PLAYER_STAMINA(playerId, to);
}

void Player::ClearWantedLevel()
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(playerId);
}