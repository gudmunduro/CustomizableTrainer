/*
* Customizable Trainer
* Copyright (C) 2020  Guğmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "NumberController.h"
#include "Numbers.h"
#include "Routine.h"

#pragma region Manage

void NumberController::RegisterNumber(std::string key, int* number, std::optional<std::function<void(bool direction)>> adjuster)
{
	numbersInt[key] = number;
	if (adjuster)
		numberAdjusters[key] = *adjuster;
}

void NumberController::RegisterNumber(std::string key, float* number, std::optional<std::function<void(bool direction)>> adjuster)
{
	numbersFloat[key] = number;
	if (adjuster)
		numberAdjusters[key] = *adjuster;
}

void NumberController::RegisterNumberGetter(std::string key, std::function<std::string()> getter, std::optional<std::function<void(bool direction)>> adjuster)
{
	numberGetters[key] = getter;
	if (adjuster) 
		numberAdjusters[key] = *adjuster;
}

void NumberController::Adjust(std::string key, bool direction)
{
	if (auto adjuster = GetNumberAdjusterForKey(key); adjuster) {
		adjuster.value()(direction);
	}
}

void NumberController::SetNumberValueForKey(std::string key, std::string value)
{
	try {
		if (NumberFloatVariableExistsForKey(key)) {
			*numbersFloat[key] = std::stof(value);
			Adjust(key, true);
			Adjust(key, false);
			*numbersFloat[key] = std::stof(value);
		}
		else if (NumberIntVariableExistsForKey(key)) {
			*numbersInt[key] = std::stoi(value);
			Adjust(key, true);
			Adjust(key, false);
			*numbersInt[key] = std::stoi(value);
		}
		else if (NumberIntVariableExistsForKey(key)) {
			Game::PrintSubtitle("Cannot set value for this number");
		}
	}
	catch (std::exception e) {
		Game::PrintSubtitle("Failed to set number value for '" + key + "'");
	}
}

#pragma endregion

#pragma region Setup

void NumberController::RegisterNumbers()
{
	// Variables
	RegisterNumber("number_playerNoiseMultiplier", &Numbers::playerNoiseMultiplier, Numbers::AdjustPlayerNoiseMultiplier);
	RegisterNumber("number_playerScale", &Numbers::playerScale, Numbers::AdjustPlayerScale);
	RegisterNumber("number_horseScale", &Numbers::horseScale, Numbers::AdjustHorseScale);
	RegisterNumber("number_enginePowerMultiplier", &Numbers::enginePowerMultiplier, Numbers::AdjustEnginePowerMultiplier);
	RegisterNumber("number_weaponDamageLevel", &Numbers::weaponDamageLevel, Numbers::AdjustWeaponDamageLavel);
	RegisterNumber("number_meleeDamageLevel", &Numbers::meleeDamageLevel, Numbers::AdjustMeleeDamageLavel);
	RegisterNumber("number_timeScale", &Numbers::timeScale, Numbers::AdjustTimeScale);
	RegisterNumber("number_timeCycleStrength", &Numbers::timeCycleStrength, Numbers::AdjustTimeCycleStrength);
	RegisterNumber("number_windSpeed", &Numbers::windSpeed, Numbers::AdjustWindSpeed);

	// Getters
	RegisterNumberGetter("number_currentHour", Numbers::GetCurrentHour, Numbers::AdjustCurrentHour);
	RegisterNumberGetter("number_currentMinute", Numbers::GetCurrentMinute, Numbers::AdjustCurrentMinute);
}

#pragma endregion

#pragma region Booleans

bool NumberController::NumberExistsForKey(std::string key)
{
	return NumberVariableExistsForKey(key) || NumberGetterExistsForKey(key);
}

bool NumberController::NumberVariableExistsForKey(std::string key)
{
	return NumberFloatVariableExistsForKey(key) || NumberIntVariableExistsForKey(key);
}

bool NumberController::NumberIntVariableExistsForKey(std::string key)
{
	return numbersInt.count(key) > 0;
}

bool NumberController::NumberFloatVariableExistsForKey(std::string key)
{
	return numbersFloat.count(key) > 0;
}

bool NumberController::NumberGetterExistsForKey(std::string key)
{
	return numberGetters.count(key) > 0;
}

bool NumberController::NumberAdjusterExistsForKey(std::string key)
{
	return numberAdjusters.count(key) > 0;
}

#pragma endregion

#pragma region Getters

std::optional<std::string> NumberController::GetNumberStringValueForKey(std::string key)
{
	std::optional<std::string> returnValue;

	if (NumberFloatVariableExistsForKey(key)) {
		std::stringstream stream;
		stream << std::fixed << std::setprecision(2) << *numbersFloat[key];
		returnValue = stream.str();
	}
	else if (NumberIntVariableExistsForKey(key)) {
		returnValue = std::to_string(*numbersInt[key]);
	}
	else if (NumberGetterExistsForKey(key)) {
		returnValue = numberGetters[key]();
	}
	else {
		returnValue = std::nullopt;
	}

	return returnValue;
}

std::optional<std::function<void(bool direction)>> NumberController::GetNumberAdjusterForKey(std::string key)
{
	if (!NumberAdjusterExistsForKey(key))
		return std::nullopt;

	return numberAdjusters[key];
}

std::vector<std::string> NumberController::Keys()
{
	std::vector<std::string> keys;
	
	// Keys for float numbers
	std::transform(std::begin(numbersFloat), std::end(numbersFloat), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});

	// Keys for int numbers
	std::transform(std::begin(numbersInt), std::end(numbersInt), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});

	// Keys for getters
	std::transform(std::begin(numberGetters), std::end(numberGetters), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

#pragma endregion
