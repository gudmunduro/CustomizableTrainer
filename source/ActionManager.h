#pragma once
#include "pch.h"

class ActionManager
{
public:
	static void RegisterAction(string key, std::function<void()> action);
	static void RegisterActions();
	static bool DoesActionExistForKey(string key);
	static std::function<void ()> GetActionForKey(string key);
private:
	static inline std::map<string, std::function<void()>> actions;
};

