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
	// From Alexander Blade
	UINT64* ptr1 = getGlobalPtr(0x28) + 0x27;
	UINT64* ptr2 = getGlobalPtr(((DWORD)7 << 18) | 0x1890C) + 2;
	UINT64 bcp1 = *ptr1;
	UINT64 bcp2 = *ptr2;
	*ptr1 = *ptr2 = model;
	WAIT(1000);
	PED::SET_PED_VISIBLE(GetPedId(), true);
	if (ENTITY::GET_ENTITY_MODEL(GetPedId()) != model) 
	{
		*ptr1 = bcp1;
		*ptr2 = bcp2;
	}
	//
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

void Player::RestoreSpecialAbility()
{
	PLAYER::RESTORE_SPECIAL_ABILITY(playerId, -1, false);
}

void Player::StopPursuit()
{
	PURSUIT::CLEAR_CURRENT_PURSUIT();
	PURSUIT::SET_PLAYER_WANTED_INTENSITY(playerId, 0);
}

void Player::SetBounty(int bounty)
{
	PURSUIT::SET_PLAYER_PRICE_ON_A_HEAD(GetPedId(), bounty);
}