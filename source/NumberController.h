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
	static void RegisterNumber(string key, float* number, std::function<void(bool direction)> adjuster = nullptr);
	static void RegisterNumber(string key, int* number, std::function<void(bool direction)> adjuster = nullptr);
	static void RegisterNumberGetter(string key, std::function<string()> getter, std::function<void(bool direction)> adjuster = nullptr);
	static void SetNumberValueForKey(string key, string value);
	static void RegisterNumbers();
	static void Adjust(string key, bool direction);
	static bool DoesNumberExistForKey(string key);
	static bool DoesNumberVariableExistForKey(string key);
	static bool DoesNumberIntVariableExistForKey(string key);
	static bool DoesNumberFloatVariableExistForKey(string key);
	static bool DoesNumberGetterExistForKey(string key);
	static bool DoesNumberAdjusterExistForKey(string key);
	static string GetNumberStringValueForKey(string key);
	static std::function<void(bool direction)> GetNumberAdjusterForKey(string key);
	static std::vector<string> Keys();
private:
	static inline std::map<string, float*> numbersFloat;
	static inline std::map<string, int*> numbersInt;
	static inline std::map<string, std::function<string()>> numberGetters;
	static inline std::map <string, std::function<void(bool direction)>> numberAdjusters;
};
