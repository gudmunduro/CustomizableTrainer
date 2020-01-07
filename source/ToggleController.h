#pragma once
#include "pch.h"

class ToggleController
{
public:
	static void RegisterToggle(string key, bool* toggle, std::function<void(bool value)> toggleEventHandler = nullptr);
	static void RegisterLoopedToggle(string key, bool* toggle, std::function<void()> toggleLoop, std::function<void(bool value)> toggleEventHandler = nullptr);
	static void RegisterToggleEventHandler(string key, std::function<void(bool value)> toggleAction);
	static void RegisterToggleLoop(string key, std::function<void()> toggleLoop);
	static void RegisterToggles();
	static void Toggle(string key);
	static void SetToggleValueForKey(string key, bool value);
	static bool ToggleExistsForKey(string key);
	static bool ToggleEventHandlerExistsForKey(string key);
	static bool ToggleLoopExistsForKey(string key);
	static bool *GetToggleForKey(string key);
	static std::function<void(bool value)> GetToggleEventHandlerForKey(string key);
	static std::function<void()> GetToggleLoopForKey(string key);
	static std::vector<string> Keys();
private:
	static inline std::map<string, bool*> toggles;
	static inline std::map <string, std::function<void(bool value)>> toggleActions;
	static inline std::map <string, std::function<void()>> toggleLoops;
};

