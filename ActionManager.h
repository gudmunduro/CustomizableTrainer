#pragma once
#include "pch.h"

class ActionManager
{
public:
	static std::function<void ()> ActionForKey(std::string key);
};

