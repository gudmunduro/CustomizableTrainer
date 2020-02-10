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
	static void RegisterText(std::string key, std::vector<std::string> values, std::function<void(int from, int to)> onChange = nullptr);
	static void SetTextValueForKey(std::string key, int value);
	static void RegisterTexts();
	static void Adjust(std::string key, bool direction);
	static bool TextExistsForKey(std::string key);
	static bool OnTextChangeActionExistsForKey(std::string key);
	static std::string GetTextValueForKey(std::string key);
	static int GetTextValueIndexForKey(std::string key);
	static std::function<void(int from, int to)> GetTextChangActionForKey(std::string key);
	static std::vector<std::string> Keys();
private:
	static inline std::map<std::string, std::vector<std::string>> textValues;
	static inline std::map<std::string, int> textValueIndexes;
	static inline std::map <std::string, std::function<void(int from, int to)>> onTextChangeActions;
};
