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

class TextController
{
public:
	static void RegisterText(string key, std::vector<string> values, std::function<void(int from, int to)> onChange = nullptr);
	static void SetTextValueForKey(string key, int value);
	static void RegisterTexts();
	static void Adjust(string key, bool direction);
	static bool TextExistsForKey(string key);
	static bool OnTextChangeActionExistsForKey(string key);
	static string GetTextValueForKey(string key);
	static int GetTextValueIndexForKey(string key);
	static std::function<void(int from, int to)> GetTextChangActionForKey(string key);
	static std::vector<string> Keys();
private:
	static inline std::map<string, std::vector<string>> textValues;
	static inline std::map<string, int> textValueIndexes;
	static inline std::map <string, std::function<void(int from, int to)>> onTextChangeActions;
};
