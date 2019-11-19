#include "pch.h"
#include "ToggleManager.h"

// MARK: Manage
void ToggleManager::RegisterToggle(string key, bool* toggle)
{
	if (toggles.count(key)) {
		// Key already registered
		// TODO: Implement logging
		return;
	}
	toggles[key] = toggle;
}


// MARK: Get
bool* ToggleManager::GetToggleForKey(string key)
{
	return toggles[key];
}