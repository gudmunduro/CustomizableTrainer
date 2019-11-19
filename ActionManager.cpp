#include "pch.h"
#include "ActionManager.h"

// Manage
void ActionManager::RegisterAction(string key, std::function<void()> action)
{
	if (actions.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	actions[key] = action;
}


// Get
std::function<void()> ActionManager::GetActionForKey(string key)
{
	return actions[key];
}