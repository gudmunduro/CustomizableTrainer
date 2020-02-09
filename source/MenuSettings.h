/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#pragma once
#include "pch.h"

class MenuSettings
{
public:

#pragma region General

	static inline bool playUiSounds;
	static inline std::vector<OptionToSave> optionsToSave;

#pragma endregion

#pragma region Colors

	static inline Color titleBarBorderColor;
	static inline Color titleBarTextColor;
	static inline Color optionBgColor;
	static inline Color optionTextColor;
	static inline Color optionSelectedBgColor;
	static inline Color optionSelectedOutlineColor;
	static inline Color optionSelectedTextColor;
	static inline Color optionToggleColor;
	static inline Color optionToggleToggledColor;
	static inline Color optionNumberColor;
	static inline Color menuScrollLineColor;
	static inline Color menuBgColor;
	static inline Color menuStatusTextColor;
	static inline Color menuOptionCountColor;

#pragma endregion

#pragma region Keyboard controls

	static inline int MenuOpen;
	static inline int MenuOptionPress;
	static inline int MenuUp;
	static inline int MenuDown;
	static inline int MenuBack;
	static inline int MenuAdjustValueDown;
	static inline int MenuAdjustValueUp;
	static inline int MenuEditModeEnter;
	static inline int MenuEditModeExit;
	static inline int MenuEditModeExitAndSave;
	static inline int MenuEditModeMoveOption;
	static inline int MenuEditModeAddOption;
	static inline int MenuEditModeEditOption;
	static inline int MenuEditModeDeleteOption;
	static inline int BindBoost;
	static inline int BoatFlyModeAccelerate;
	static inline int BoatFlyModeDecelerate;
	static inline int BoatFlyModeFlyUp;
	static inline int BoatFlyModeUp;
	static inline int BoatFlyModeDown;
	static inline int BoatFlyModeLeft;
	static inline int BoatFlyModeRight;
	static inline int BoatFlyModeYawLeft;
	static inline int BoatFlyModeYawRight;

#pragma endregion

#pragma region Controller controls

	static inline Hash ControllerMenuOpen;
	static inline Hash ControllerMenuOpenModifier;
	static inline Hash ControllerMenuOptionPress;
	static inline Hash ControllerMenuUp;
	static inline Hash ControllerMenuDown;
	static inline Hash ControllerMenuBack;
	static inline Hash ControllerMenuAdjustValueDown;
	static inline Hash ControllerMenuAdjustValueUp;
	static inline Hash ControllerMenuEditModeEnter;
	static inline Hash ControllerMenuEditModeExit;
	static inline Hash ControllerMenuEditModeExitAndSave;
	static inline Hash ControllerMenuEditModeMoveOption;
	static inline Hash ControllerMenuEditModeAddOption;
	static inline Hash ControllerMenuEditModeEditOption;
	static inline Hash ControllerMenuEditModeDeleteOption;
	static inline Hash ControllerBindBoost;
	static inline Hash ControllerBoatFlyModeAccelerate;
	static inline Hash ControllerBoatFlyModeDecelerate;
	static inline Hash ControllerBoatFlyModeFlyUp;
	static inline Hash ControllerBoatFlyModeYawLeft;
	static inline Hash ControllerBoatFlyModeYawRight;

#pragma endregion

#pragma region Methods

	static Color colorFromHex(string hexValue);
	static Color colorFromJSON(json color);
	static json jsonFromColor(Color color);

#pragma endregion

};

