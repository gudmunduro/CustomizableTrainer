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
	static void RegisterToggle(string key, bool* toggle, std::function<void(bool value)> toggleAction = nullptr);
	static void RegisterLoopedToggle(string key, bool* toggle, std::function<void()> toggleLoop, std::function<void(bool value)> toggleAction = nullptr);
	static void RegisterToggleAction(string key, std::function<void(bool value)> toggleAction);
	static void RegisterToggleLoop(string key, std::function<void()> toggleLoop);
	static void RegisterToggles();
	static void Toggle(string key);
	static void SetToggleValueForKey(string key, bool value);
	static bool ToggleExistsForKey(string key);
	static bool ToggleActionExistsForKey(string key);
	static bool ToggleLoopExistsForKey(string key);
	static bool *GetToggleForKey(string key);
	static std::function<void(bool value)> GetToggleActionForKey(string key);
	static std::function<void()> GetToggleLoopForKey(string key);
	static std::vector<string> Keys();
private:
	static inline std::map<string, bool*> toggles;
	static inline std::map <string, std::function<void(bool value)>> toggleActions;
	static inline std::map <string, std::function<void()>> toggleLoops;
};

