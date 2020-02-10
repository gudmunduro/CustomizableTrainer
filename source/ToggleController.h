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

class ToggleController
{
public:
	static void RegisterToggle(std::string key, bool* toggle, std::optional<std::function<void(bool value)>> toggleAction = std::nullopt);
	static void RegisterLoopedToggle(std::string key, bool* toggle, std::function<void()> toggleLoop, std::optional<std::function<void(bool value)>> toggleAction = std::nullopt);
	static void RegisterToggleAction(std::string key, std::function<void(bool value)> toggleAction);
	static void RegisterToggleLoop(std::string key, std::function<void()> toggleLoop);
	static void RegisterToggles();
	static void Toggle(std::string key);
	static void SetToggleValueForKey(std::string key, bool value);
	static bool ToggleExistsForKey(std::string key);
	static std::optional<bool*> GetToggleForKey(std::string key);
	static std::optional<std::function<void(bool value)>> GetToggleActionForKey(std::string key);
	static std::optional<std::function<void()>> GetToggleLoopForKey(std::string key);
	static std::vector<std::string> Keys();
private:
	static bool ToggleActionExistsForKey(std::string key);
	static bool ToggleLoopExistsForKey(std::string key);

	static inline std::map<std::string, bool*> toggles;
	static inline std::map <std::string, std::function<void(bool value)>> toggleActions;
	static inline std::map <std::string, std::function<void()>> toggleLoops;
};

