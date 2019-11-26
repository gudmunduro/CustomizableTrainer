#include "pch.h"
#include "MenuSettings.h"

Color MenuSettings::colorFromHex(string hexValue)
{
	int hexValueInt = std::stoi(hexValue);
	return {
		((hexValueInt >> 16) & 0xFF) / 255,
		((hexValueInt >> 8) & 0xFF) / 255,
		(hexValueInt & 0xFF) / 255,
		255
	};
}

Color MenuSettings::colorFromJSON(json color)
{
	return {
		color["r"].get<int>(),
		color["g"].get<int>(),
		color["b"].get<int>(),
		color["a"].get<int>()
	};
}