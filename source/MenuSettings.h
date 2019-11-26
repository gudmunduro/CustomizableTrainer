#pragma once
#include "pch.h"

class MenuSettings
{
public:
	static inline Color titleBarBgColor;
	static inline Color titleBarTextColor;
	static inline Color optionBgColor;
	static inline Color optionTextColor;
	static inline Color optionSelectedBgColor;
	static inline Color optionSelectedTextColor;
	static inline Color optionToggleColor;
	static inline Color optionToggleToggledColor;

	static Color colorFromHex(string hexValue);
	static Color colorFromJSON(json color);
};

