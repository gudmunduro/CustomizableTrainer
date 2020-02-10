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
	static void RegisterAction(std::string key, std::function<void(json params)> action);
	static void RegisterActions();
	static void RunActionForKey(std::string key, json params);
	static bool ActionExistsForKey(std::string key);
	static std::function<void (json params)> GetActionForKey(std::string key);
	static std::vector<std::string> Keys();
	static std::vector<MenuOptionParameter> GetParameterForKey(std::string key);
private:
	static inline std::map<std::string, std::function<void(json params)>> actions;
};

