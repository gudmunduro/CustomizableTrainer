/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"
#include "Ped.h"

class Player
{
public:
	Player(PlayerId id = Game::playerId);

#pragma region Setters

	void SetModel(Hash model);
	void SetInvincible(bool invincible);
	void SetBounty(int bounty);
	void SetWantedLevelMultiplier(float multiplier);
	void SetWeaponDamageModifier(float modifier);
	void SetMeleeDamageModifier(float modifier);
	void SetEveryoneIgnore(bool ignore);
	void SetNoiseMultiplier(float multiplier);
	void SetSneakingNoiseMultiplier(float multiplier);

#pragma endregion

#pragma region Booleans

	bool IsFreeAiming();
	bool IsFreeAimingAt(EntityId entity);
	bool IsTargetingAnything();
	bool IsTargetingAt(EntityId entity);

#pragma endregion

#pragma region Getters

	int Group();

#pragma endregion

#pragma region Actions

	void RestoreStamina(float to = 100.0f);
	void RestoreSpecialAbility();
	void StopPursuit();
	void AddCash(int cash);

#pragma endregion

#pragma region Variables

	Ped ped;
	PlayerId id;

#pragma endregion

};

