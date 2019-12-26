#pragma once
#include "pch.h"

class ToggleController
{
public:
	static void RegisterToggle(string key, bool* toggle);
	static void RegisterToggleAction(string key, std::function<void(bool value)> toggleAction);
	static void RegisterToggles();
	static void Toggle(string key);
	static bool DoesToggleExistForKey(string key);
	static bool DoesToggleActionExistForKey(string key);
	static bool *GetToggleForKey(string key);
	static std::function<void(bool value)> GetToggleActionForKey(string key);
	static std::vector<string> GetKeys();
private:
	static inline std::map<string, bool*> toggles;
	static inline std::map <string, std::function<void(bool value)>> toggleActions;
};

