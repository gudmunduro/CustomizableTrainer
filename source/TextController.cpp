/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "TextController.h"
#include "Texts.h"

#pragma region Manage

void TextController::RegisterText(string key, std::vector<string> values, std::function<void(int from, int to)> onChange)
{
	textValues[key] = values;
	textValueIndexes[key] = 0;
	onTextChangeActions[key] = onChange;
}

void TextController::SetTextValueForKey(string key, int value)
{
	textValueIndexes[key] = value;
}

void TextController::RegisterTexts()
{
	RegisterText("text_customBulletType", Texts::customBulletTypes, Texts::OnBulletTypeValueChange);
	RegisterText("text_snowCoverageType", Texts::snowCoverageType, Texts::OnSnowCoverageTypeChange);
}

void TextController::Adjust(string key, bool direction)
{
	if (TextExistsForKey(key)) {
		int* index = &textValueIndexes[key];
		auto values = textValues[key];
		int lastIndex = *index;

		if (direction && (*index) + 1 > values.size() - 1)
			*index = 0;
		else if (!direction && *index - 1 < 0)
			*index = values.size() - 1;
		else
			textValueIndexes[key] += direction ? 1 : -1;
		
		if (OnTextChangeActionExistsForKey(key))
			GetTextChangActionForKey(key)(lastIndex, *index);
	}
}

#pragma endregion

#pragma region Booleans

bool TextController::TextExistsForKey(string key)
{
	return textValues.count(key) > 0;
}

bool TextController::OnTextChangeActionExistsForKey(string key)
{
	return onTextChangeActions.count(key) > 0;
}

#pragma endregion

#pragma region Getters

string TextController::GetTextValueForKey(string key)
{
	if (textValues[key].size() - 1 < textValueIndexes[key] || textValueIndexes[key] < 0)
		return "Invalid";

	return textValues[key][textValueIndexes[key]];
}

int TextController::GetTextValueIndexForKey(string key)
{
	if (textValues[key].size() - 1 < textValueIndexes[key] || textValueIndexes[key] < 0)
		return 0;

	return textValueIndexes[key];
}

std::function<void(int from, int to)> TextController::GetTextChangActionForKey(string key)
{
	return onTextChangeActions[key];
}

std::vector<string> TextController::Keys()
{
	std::vector<string> keys;
	std::transform(std::begin(textValues), std::end(textValues), std::back_inserter(keys),
		[](auto const& pair) {
			return pair.first;
		});

	return keys;
}

#pragma endregion
