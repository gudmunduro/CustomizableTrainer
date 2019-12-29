#pragma once
#include "pch.h"

class MenuSettings
{
public:
	// MARK: General

	static inline bool playUiSounds;


	// MARK: Colors

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


	// MARK: Keyboard controls

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

	// MARK: Controller controls

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

	// MARK: Methods

	static Color colorFromHex(string hexValue);
	static Color colorFromJSON(json color);
	static json jsonFromColor(Color color);
};

