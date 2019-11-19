#pragma once
#include "pch.h"

class ToggleManager
{
public:
	static void RegisterToggle(string key, bool* toggle);
	static bool* GetToggleForKey(string key);
private:
	static std::map<string, bool*> toggles;
};

