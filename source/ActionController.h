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

class ActionController
{
public:
	static void RegisterAction(string key, std::function<void(json params)> action);
	static void RegisterActions();
	static void RunActionForKey(string key, json params);
	static bool ActionExistsForKey(string key);
	static std::function<void (json params)> GetActionForKey(string key);
	static std::vector<string> Keys();
	static std::vector<MenuOptionParameter> GetParameterForKey(string key);
private:
	static inline std::map<string, std::function<void(json params)>> actions;
};

