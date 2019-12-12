#include "pch.h"
#include "Player.h"
#include "Routine.h"
#include "NativeEngine.h"

Player::Player() : Ped(Game::playerPedId)
{
	playerId = Game::playerId;
}

// MARK: Manange
void Player::SetModel(Hash model)
{
	// Mostly copied from the Native trainer
	if (STREAMING::IS_MODEL_IN_CDIMAGE(model) && STREAMING::IS_MODEL_VALID(model))
	{
		UINT64* ptr1 = (UINT64*) getGlobalPtr(0x28) + 0x27;
		UINT64* ptr2 = (UINT64*) getGlobalPtr(((DWORD)7 << 18) | 0x1890C) + 2;
		UINT64 bcp1 = *ptr1;
		UINT64 bcp2 = *ptr2;
		*ptr1 = *ptr2 = model;
		SYSTEM::WAIT(1000);
		PedId playerPed = PLAYER::PLAYER_PED_ID();
		PED::SET_PED_VISIBLE(playerPed, TRUE);
		if (ENTITY::GET_ENTITY_MODEL(playerPed) != model)
		{
			*ptr1 = bcp1;
			*ptr2 = bcp2;
		}
	}

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
	PURSUIT::SET_PLAYER_PRICE_ON_A_HEAD(playerId, bounty);
}

void Player::SetWantedLevelMultiplier(float multiplier)
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(multiplier);
}

void Player::SetWeaponDamageModifier(float modifier)
{
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(playerId, modifier);
}

void Player::SetMeleeDamageModifier(float modifier)
{
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(playerId, modifier);
}

void Player::SetEveryoneIgnore(bool ignore)
{
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerId, ignore);
}

void Player::SetNoiseMultiplier(float multiplier)
{
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(playerId, multiplier);
}

void Player::SetSneakingNoiseMultiplier(float multiplier)
{
	PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(playerId, multiplier);
}

void Player::AddCash(int cash)
{
	CASH::PLAYER_ADD_CASH(cash, 0x2cd419dc);
}

bool Player::IsFreeAiming()
{
	return PLAYER::IS_PLAYER_FREE_AIMING(playerId) != 0;
}

bool Player::IsFreeAimingAt(EntityId entity)
{
	return PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerId, entity) != 0;
}

bool Player::IsTargetingAnything()
{
	return PLAYER::IS_PLAYER_TARGETTING_ANYTHING(playerId) != 0;
}

bool Player::IsTargetingAt(EntityId entity)
{
	return PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerId, entity, false) != 0;
}

PlayerId Player::Id()
{
	return playerId;
}

int Player::Group()
{
	return PLAYER::GET_PLAYER_GROUP(Id());
}