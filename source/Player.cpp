/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "Player.h"
#include "Routine.h"

Player::Player(PlayerId id)
	: id(id), ped(Ped(PLAYER::GET_PLAYER_PED(id)))
{
}

#pragma region Setters

void Player::SetModel(Hash model)
{
	// Mostly copied from the Native trainer
	if (STREAMING::IS_MODEL_IN_CDIMAGE(model) && STREAMING::IS_MODEL_VALID(model))
	{
		UINT64* ptr1 = getGlobalPtr(0x28) + 0x27;
		UINT64* ptr2 = getGlobalPtr(((DWORD)7 << 18) | 0x1D890E) + 2;
		UINT64 bcp1 = *ptr1;
		UINT64 bcp2 = *ptr2;
		*ptr1 = *ptr2 = model;
		TaskQueue::Wait(1000);
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
	PLAYER::SET_PLAYER_INVINCIBLE(id, invincible);
}

void Player::SetBounty(int bounty)
{
	PURSUIT::SET_PLAYER_PRICE_ON_A_HEAD(id, bounty);
}

void Player::SetWantedLevelMultiplier(float multiplier)
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(multiplier);
}

void Player::SetWeaponDamageModifier(float modifier)
{
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(id, modifier);
}

void Player::SetMeleeDamageModifier(float modifier)
{
	PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(id, modifier);
}

void Player::SetEveryoneIgnore(bool ignore)
{
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(id, ignore);
}

void Player::SetNoiseMultiplier(float multiplier)
{
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(id, multiplier);
}

void Player::SetSneakingNoiseMultiplier(float multiplier)
{
	PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(id, multiplier);
}

#pragma endregion

#pragma region Booleans

bool Player::IsFreeAiming()
{
	return PLAYER::IS_PLAYER_FREE_AIMING(id) != 0;
}

bool Player::IsFreeAimingAt(EntityId entity)
{
	return PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(id, entity) != 0;
}

bool Player::IsTargetingAnything()
{
	return PLAYER::IS_PLAYER_TARGETTING_ANYTHING(id) != 0;
}

bool Player::IsTargetingAt(EntityId entity)
{
	return PLAYER::IS_PLAYER_TARGETTING_ENTITY(id, entity, false) != 0;
}

#pragma endregion

#pragma region Getters

int Player::Group()
{
	return PLAYER::GET_PLAYER_GROUP(id);
}

#pragma endregion

#pragma region Actions

void Player::RestoreStamina(float to)
{
	PLAYER::RESTORE_PLAYER_STAMINA(id, to);
}

void Player::RestoreSpecialAbility()
{
	PLAYER::RESTORE_SPECIAL_ABILITY(id, -1, false);
}

void Player::StopPursuit()
{
	PURSUIT::CLEAR_CURRENT_PURSUIT();
	PURSUIT::SET_PLAYER_WANTED_INTENSITY(id, 0);
}

void Player::AddCash(int cash)
{
	CASH::PLAYER_ADD_CASH(cash, 0x2cd419dc);
}

#pragma endregion
