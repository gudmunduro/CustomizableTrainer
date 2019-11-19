#pragma once
#include "pch.h"

class ActionManager
{
public:
	static void RegisterAction(std::string key, std::function<void()> action);
	static std::function<void ()> GetActionForKey(std::string key);
private:
	static std::map<std::string, std::function<void()>> actions;
};

