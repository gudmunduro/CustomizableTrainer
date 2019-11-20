#pragma once
#include "pch.h"

class ActionManager
{
public:
	static void RegisterAction(string key, std::function<void()> action);
	static std::function<void ()> GetActionForKey(std::string key);
private:
	static inline std::map<string, std::function<void()>> actions;
};

