#pragma once
#include "pch.h"

class HotkeyController
{
public:
	static void Setup();

	static void RunHotkey(Hotkey hotkey);

	static void Tick();

	static inline std::vector<Hotkey> hotkeys;
private:

	static void RunHotkeyForAction(Hotkey hotkey);
	static void RunHotkeyForToggle(Hotkey hotkey);
	static void RunHotkeyForNumber(Hotkey hotkey);
};

