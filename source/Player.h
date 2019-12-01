#pragma once
#include "pch.h"
#include "Ped.h"

class Player :
	public Ped
{
public:
	Player();
	void SetModel(Hash model);
	void SetInvincible(bool invincible);
	void RestoreStamina(float to = 100.0f);
	void RestoreSpecialAbility();
	void StopPursuit();
	void SetBounty(int bounty);
	void SetWantedLevelMultiplier(float multiplier);
	void SetWeaponDamageModifier(float modifier);
	void AddCash(int cash);
private:
	PlayerId playerId;
};

