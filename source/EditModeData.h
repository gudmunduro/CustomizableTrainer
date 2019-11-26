#pragma once
#include "pch.h"
/*
	Temporary solution for transfering data between submenus (from add option menu to submenu that was being edited)
*/

class EditModeData
{
public:
	static inline bool shouldAdd = false;
	static inline MenuOption optionToAdd;
};

