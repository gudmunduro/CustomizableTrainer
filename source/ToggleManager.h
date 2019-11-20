#pragma once
#include "pch.h"

class ToggleManager
{
public:
	static void RegisterToggle(string key, std::shared_ptr<bool> toggle);
	static std::shared_ptr<bool> GetToggleForKey(string key);
private:
	static inline std::map<string, std::shared_ptr<bool>> toggles;
};

