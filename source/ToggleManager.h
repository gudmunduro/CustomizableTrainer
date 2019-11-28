#pragma once
#include "pch.h"

class ToggleManager
{
public:
	static void RegisterToggle(string key, std::shared_ptr<bool> toggle);
	static void RegisterToggleAction(string key, std::function<void(bool value)> toggleAction);
	static void RegisterToggles();
	static void Toggle(string key);
	static bool DoesToggleExistForKey(string key);
	static bool DoesToggleActionExistForKey(string key);
	static std::shared_ptr<bool> GetToggleForKey(string key);
	static std::function<void(bool value)> GetToggleActionForKey(string key);
	static std::vector<string> GetKeys();
private:
	static inline std::map<string, std::shared_ptr<bool>> toggles;
	static inline std::map <string, std::function<void(bool value)>> toggleActions;
};

