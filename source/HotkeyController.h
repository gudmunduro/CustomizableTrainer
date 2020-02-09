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

class HotkeyController
{
public:
	static void Setup();

	static void RunHotkey(Hotkey hotkey);

	static void Save();

	static void Tick();

	static inline std::vector<Hotkey> hotkeys;
private:

	static void RunHotkeyForAction(Hotkey hotkey);
	static void RunHotkeyForToggle(Hotkey hotkey);
	static void RunHotkeyForNumber(Hotkey hotkey);
};

