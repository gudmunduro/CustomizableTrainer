#pragma once
#include "pch.h"

class HotkeyController
{
public:
	HotkeyController();

	void RunHotkey(Hotkey hotkey);

	void Tick();

private:
	std::map<string, Hotkey> hotkeyMap;

	void RunHotkeyForAction(Hotkey hotkey);
	void RunHotkeyForToggle(Hotkey hotkey);
	void RunHotkeyForNumber(Hotkey hotkey);
};

