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
	void SetMeleeDamageModifier(float modifier);
	void SetEveryoneIgnore(bool ignore);
	void SetNoiseMultiplier(float multiplier);
	void SetSneakingNoiseMultiplier(float multiplier);
	void AddCash(int cash);
	bool IsFreeAiming();
	bool IsFreeAimingAt(EntityId entity);
	bool IsTargetingAnything();
	bool IsTargetingAt(EntityId entity);
	PlayerId Id();
	int Group();
private:
	PlayerId playerId;
};

