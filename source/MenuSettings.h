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

namespace Settings {

#pragma region General

	namespace General {
		inline bool playUiSounds;
		inline std::vector<OptionToSave> optionsToSave;
		inline bool debug = true;
	}

#pragma endregion

#pragma region Colors

	namespace Colors {
		inline Color titleBarBorder;
		inline Color titleBarText;
		inline Color optionBg;
		inline Color optionText;
		inline Color optionSelectedBg;
		inline Color optionSelectedOutline;
		inline Color optionSelectedText;
		inline Color optionToggle;
		inline Color optionToggleToggled;
		inline Color optionNumber;
		inline Color menuScrollLine;
		inline Color menuBg;
		inline Color menuStatusText;
		inline Color menuOptionCount;
	}
	
#pragma endregion

#pragma region Controls

	namespace Controls {
		namespace Keyboard {
			inline int MenuOpen;
			inline int MenuOptionPress;
			inline int MenuUp;
			inline int MenuDown;
			inline int MenuBack;
			inline int MenuAdjustValueDown;
			inline int MenuAdjustValueUp;
			inline int MenuEditModeEnter;
			inline int MenuEditModeExit;
			inline int MenuEditModeExitAndSave;
			inline int MenuEditModeMoveOption;
			inline int MenuEditModeAddOption;
			inline int MenuEditModeEditOption;
			inline int MenuEditModeDeleteOption;
			inline int BindBoost;
			inline int BoatFlyModeAccelerate;
			inline int BoatFlyModeDecelerate;
			inline int BoatFlyModeFlyUp;
			inline int BoatFlyModeUp;
			inline int BoatFlyModeDown;
			inline int BoatFlyModeLeft;
			inline int BoatFlyModeRight;
			inline int BoatFlyModeYawLeft;
			inline int BoatFlyModeYawRight;
		}

		namespace Controller {
			inline Hash MenuOpen;
			inline Hash MenuOpenModifier;
			inline Hash MenuOptionPress;
			inline Hash MenuUp;
			inline Hash MenuDown;
			inline Hash MenuBack;
			inline Hash MenuAdjustValueDown;
			inline Hash MenuAdjustValueUp;
			inline Hash MenuEditModeEnter;
			inline Hash MenuEditModeExit;
			inline Hash MenuEditModeExitAndSave;
			inline Hash MenuEditModeMoveOption;
			inline Hash MenuEditModeAddOption;
			inline Hash MenuEditModeEditOption;
			inline Hash MenuEditModeDeleteOption;
			inline Hash BindBoost;
			inline Hash BoatFlyModeAccelerate;
			inline Hash BoatFlyModeDecelerate;
			inline Hash BoatFlyModeFlyUp;
			inline Hash BoatFlyModeYawLeft;
			inline Hash BoatFlyModeYawRight;
		}
	}

#pragma endregion

#pragma region Methods

	Color colorFromHex(std::string hexValue);
	Color colorFromJSON(json color);
	json jsonFromColor(Color color);

#pragma endregion

}
