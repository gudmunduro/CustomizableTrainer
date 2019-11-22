#include "pch.h"
#include "ActionManager.h"
#include "Actions.h"

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

void ActionManager::RegisterActions()
{
	RegisterAction("action_setPlayerMaxHealth", Actions::SetPlayerMaxHealth);
}

// Getters
bool ActionManager::DoesActionExistForKey(string key)
{
	return actions.count(key) != 0;
}
std::function<void()> ActionManager::GetActionForKey(string key)
{
	return actions[key];
}