#include "pch.h"
#include "Numbers.h"
#include "Player.h"

// MARK: Getters

string Numbers::GetCurrentHour()
{
	return std::to_string(TIME::GET_CLOCK_HOURS());
}

string Numbers::GetCurrentMinute()
{
	return std::to_string(TIME::GET_CLOCK_MINUTES());
}

// MARK: Adjusters

void Numbers::AdjustPlayerNoiseMultiplier(bool direction)
{
	playerNoiseMultiplier += direction ? 0.1 : -0.1;
}

void Numbers::AdjustPlayerScale(bool direction)
{
	if (playerScale == 0.1f && !direction) return;
	playerScale += direction ? 0.1 : -0.1;
	Player player;
	PED::_SET_PED_SCALE(player.GetPedId(), playerScale);
}

void Numbers::AdjustHorseScale(bool direction)
{
	if (horseScale == 0.1f && !direction) return;
	horseScale += direction ? 0.1 : -0.1;
	if (Player().IsOnMount())
		PED::_SET_PED_SCALE(Player().Mount().GetPedId(), horseScale);
}

void Numbers::AdjustWeaponDamageLavel(bool direction)
{
	weaponDamageLevel += direction ? 1.0 : -1.0;
}

void Numbers::AdjustMeleeDamageLavel(bool direction)
{
	meleeDamageLevel += direction ? 1.0 : -1.0;
}

void Numbers::AdjustCurrentHour(bool direction) 
{
	TIME::ADD_TO_CLOCK_TIME(direction ? 1 : -1, 0, 0);
}

void Numbers::AdjustCurrentMinute(bool direction)
{
	TIME::ADD_TO_CLOCK_TIME(0, direction ? 1 : -1, 0);
}

void Numbers::AdjustTimeScale(bool direction)
{
	if (timeScale >= 1.0 && direction || timeScale <= 0.0 && !direction) return;
	timeScale += direction ? 0.1 : -0.1;
}

void Numbers::AdjustTimeCycleStrength(bool direction)
{
	if (timeCycleStrength <= 0.0 && !direction) return;
	timeCycleStrength += direction ? 0.1 : -0.1;
}

void Numbers::AdjustWindSpeed(bool direction)
{
	if (windSpeed <= 0 && !direction) return;
	windSpeed += direction ? 1.0 : -1.0;
}
