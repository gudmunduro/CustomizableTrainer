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

class NumberController
{
public:
	static void RegisterNumber(std::string key, float* number, std::function<void(bool direction)> adjuster = nullptr);
	static void RegisterNumber(std::string key, int* number, std::function<void(bool direction)> adjuster = nullptr);
	static void RegisterNumberGetter(std::string key, std::function<std::string()> getter, std::function<void(bool direction)> adjuster = nullptr);
	static void SetNumberValueForKey(std::string key, std::string value);
	static void RegisterNumbers();
	static void Adjust(std::string key, bool direction);
	static bool DoesNumberExistForKey(std::string key);
	static bool DoesNumberVariableExistForKey(std::string key);
	static bool DoesNumberIntVariableExistForKey(std::string key);
	static bool DoesNumberFloatVariableExistForKey(std::string key);
	static bool DoesNumberGetterExistForKey(std::string key);
	static bool DoesNumberAdjusterExistForKey(std::string key);
	static std::string GetNumberStringValueForKey(std::string key);
	static std::function<void(bool direction)> GetNumberAdjusterForKey(std::string key);
	static std::vector<std::string> Keys();
private:
	static inline std::map<std::string, float*> numbersFloat;
	static inline std::map<std::string, int*> numbersInt;
	static inline std::map<std::string, std::function<std::string()>> numberGetters;
	static inline std::map <std::string, std::function<void(bool direction)>> numberAdjusters;
};
