#pragma once
#include "pch.h"

class MenuSettings
{
public:
	// MARK: Colors
	static inline Color titleBarBgColor;
	static inline Color titleBarTextColor;
	static inline Color optionBgColor;
	static inline Color optionTextColor;
	static inline Color optionSelectedBgColor;
	static inline Color optionSelectedTextColor;
	static inline Color optionToggleColor;
	static inline Color optionToggleToggledColor;

	// MARK: Keyboard controls
	static inline int MenuOpen;
	static inline int MenuOptionPress;
	static inline int MenuUp;
	static inline int MenuDown;
	static inline int MenuBack;
	static inline int MenuEditModeEnter;
	static inline int MenuEditModeExit;
	static inline int MenuEditModeExitAndSave;
	static inline int MenuEditModeMoveOption;
	static inline int MenuEditModeAddOption;
	static inline int MenuEditModeDeleteOption;
	static inline int BindBoost;

	// MARK: Controller controls
	static inline Hash ControllerMenuOpen;
	static inline Hash ControllerMenuOpenModifier;
	static inline Hash ControllerMenuOptionPress;
	static inline Hash ControllerMenuUp;
	static inline Hash ControllerMenuDown;
	static inline Hash ControllerMenuBack;
	static inline Hash ControllerMenuEditModeEnter;
	static inline Hash ControllerMenuEditModeExit;
	static inline Hash ControllerMenuEditModeExitAndSave;
	static inline Hash ControllerMenuEditModeMoveOption;
	static inline Hash ControllerMenuEditModeAddOption;
	static inline Hash ControllerMenuEditModeDeleteOption;
	static inline Hash ControllerBindBoost;

	static Color colorFromHex(string hexValue);
	static Color colorFromJSON(json color);
};

