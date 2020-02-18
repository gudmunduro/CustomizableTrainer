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
		static inline bool playUiSounds;
		static inline std::vector<OptionToSave> optionsToSave;
	}

#pragma endregion

#pragma region Colors

	namespace Colors {
		static inline Color titleBarBorder;
		static inline Color titleBarText;
		static inline Color optionBg;
		static inline Color optionText;
		static inline Color optionSelectedBg;
		static inline Color optionSelectedOutline;
		static inline Color optionSelectedText;
		static inline Color optionToggle;
		static inline Color optionToggleToggled;
		static inline Color optionNumber;
		static inline Color menuScrollLine;
		static inline Color menuBg;
		static inline Color menuStatusText;
		static inline Color menuOptionCount;
	}
	
#pragma endregion

#pragma region Controls

	namespace Controls {
		namespace Keyboard {
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
		}

		namespace Controller {
			static inline Hash MenuOpen;
			static inline Hash MenuOpenModifier;
			static inline Hash MenuOptionPress;
			static inline Hash MenuUp;
			static inline Hash MenuDown;
			static inline Hash MenuBack;
			static inline Hash MenuAdjustValueDown;
			static inline Hash MenuAdjustValueUp;
			static inline Hash MenuEditModeEnter;
			static inline Hash MenuEditModeExit;
			static inline Hash MenuEditModeExitAndSave;
			static inline Hash MenuEditModeMoveOption;
			static inline Hash MenuEditModeAddOption;
			static inline Hash MenuEditModeEditOption;
			static inline Hash MenuEditModeDeleteOption;
			static inline Hash BindBoost;
			static inline Hash BoatFlyModeAccelerate;
			static inline Hash BoatFlyModeDecelerate;
			static inline Hash BoatFlyModeFlyUp;
			static inline Hash BoatFlyModeYawLeft;
			static inline Hash BoatFlyModeYawRight;
		}
	}

#pragma endregion

#pragma region Methods

	Color colorFromHex(std::string hexValue);
	Color colorFromJSON(json color);
	json jsonFromColor(Color color);

#pragma endregion

}
