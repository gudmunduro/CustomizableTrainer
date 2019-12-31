#pragma once
#include "pch.h"

class TextController
{
public:
	static void RegisterText(string key, string values[], std::function<void(int from, int to)> onChange = nullptr);
	static void RegisterTextGetter(string key, std::function<string(int index)> valueGetter, std::function<void(int from, int to)> onChange = nullptr);
	static void SetTextValueForKey(string key, int value);
	static void RegisterTexts();
	static void Adjust(string key, bool direction);
	static bool TextExistsForKey(string key);
	static bool TextVariableExistsForKey(string key);
	static bool TextGetterExistsForKey(string key);
	static bool TextChangeEventHandlerEventExistsForKey(string key);
	static string GetTextValueForKey(string key);
	static std::function<void(int from, int to)> GetTextChangEventHandlerForKey(string key);
	static std::vector<string> Keys();
private:
	static inline std::map<string, string*> textValues;
	static inline std::map<string, int> textValueIndexes;
	static inline std::map <string, std::function<void(int from, int to)>> textChangeEventHandlers;
};