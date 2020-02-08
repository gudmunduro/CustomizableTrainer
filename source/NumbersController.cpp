#include "pch.h"
#include "NumberController.h"
#include "Numbers.h"
#include "Routine.h"

#pragma region Manange

void NumberController::RegisterNumber(string key, int* number, std::function<void(bool direction)> adjuster)
{
	numbersInt[key] = number;
	if (adjuster != nullptr) numberAdjusters[key] = adjuster;
}

void NumberController::RegisterNumber(string key, float* number, std::function<void(bool direction)> adjuster)
{
	numbersFloat[key] = number;
	if (adjuster != nullptr) numberAdjusters[key] = adjuster;
}

void NumberController::RegisterNumberGetter(string key, std::function<string()> getter, std::function<void(bool direction)> adjuster)
{
	numberGetters[key] = getter;
	if (adjuster != nullptr) numberAdjusters[key] = adjuster;
}

void NumberController::Adjust(string key, bool direction)
{
	if (DoesNumberAdjusterExistForKey(key)) {
		GetNumberAdjusterForKey(key)(direction);
	}
}

void NumberController::SetNumberValueForKey(string key, string value)
{
	try {
		if (DoesNumberFloatVariableExistForKey(key)) {
			*numbersFloat[key] = std::stof(value);
			Adjust(key, true);
			Adjust(key, false);
			*numbersFloat[key] = std::stof(value);
		}
		else if (DoesNumberIntVariableExistForKey(key)) {
			*numbersInt[key] = std::stoi(value);
			Adjust(key, true);
			Adjust(key, false);
			*numbersInt[key] = std::stoi(value);
		}
		else if (DoesNumberIntVariableExistForKey(key)) {
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

bool NumberController::DoesNumberExistForKey(string key)
{
	return DoesNumberVariableExistForKey(key) || DoesNumberGetterExistForKey(key);
}

bool NumberController::DoesNumberVariableExistForKey(string key)
{
	return DoesNumberFloatVariableExistForKey(key) || DoesNumberIntVariableExistForKey(key);
}

bool NumberController::DoesNumberIntVariableExistForKey(string key)
{
	return numbersInt.count(key) > 0;
}

bool NumberController::DoesNumberFloatVariableExistForKey(string key)
{
	return numbersFloat.count(key) > 0;
}

bool NumberController::DoesNumberGetterExistForKey(string key)
{
	return numberGetters.count(key) > 0;
}

bool NumberController::DoesNumberAdjusterExistForKey(string key)
{
	return numberAdjusters.count(key) > 0;
}

#pragma endregion

#pragma region Getters

string NumberController::GetNumberStringValueForKey(string key)
{
	string value;

	if (DoesNumberFloatVariableExistForKey(key)) {
		std::stringstream stream;
		stream << std::fixed << std::setprecision(2) << *numbersFloat[key];
		value = stream.str();
	}
	else if (DoesNumberIntVariableExistForKey(key)) {
		value = std::to_string(*numbersInt[key]);
	}
	else if (DoesNumberGetterExistForKey(key)) {
		value = numberGetters[key]();
	}
	else {
		value = "Error";
	}

	return value;
}

std::function<void(bool direction)> NumberController::GetNumberAdjusterForKey(string key)
{
	return numberAdjusters[key];
}

std::vector<string> NumberController::Keys()
{
	std::vector<string> keys;
	std::transform(std::begin(numbersFloat), std::end(numbersFloat), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	std::transform(std::begin(numbersInt), std::end(numbersInt), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
		});
	std::transform(std::begin(numberGetters), std::end(numberGetters), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
	});
	return keys;
}

#pragma endregion
