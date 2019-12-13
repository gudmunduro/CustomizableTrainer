#pragma once
#include "pch.h"

class HotkeyController
{
public:
	HotkeyController();

	void Tick();

private:
	std::map<string, Hotkey> hotkeyMap;
};

