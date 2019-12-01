#pragma once
#include "pch.h"
#include "FixedSubmenu.h"

class AddOptionSetTypeSub :
	public FixedSubmenu
{
public:
	AddOptionSetTypeSub(Vector2 menuPos, std::function<void(std::string key)> setSubmenu, std::function<void(Submenu* submenu)> setFixedSubmenu, std::function<void(string messageKey, std::any messageValue)> goToLastSub);

	void OnOptionPress(int index) override;
};

