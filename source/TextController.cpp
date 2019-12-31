#include "TextController.h"
#include "Texts.h"

// MARK: Manage

void TextController::RegisterText(string key, string values[], std::function<void(int from, int to)> onChange)
{
	textValues[key] = values;
	textValueIndexes[key] = 0;
	textChangeEventHandlers[key] = onChange;
}

void TextController::SetTextValueForKey(string key, int value)
{
	textValueIndexes[key] = value;
}

void TextController::RegisterTexts()
{
	RegisterText("text_customBulletType", Texts::customBulletTypes, Texts::OnBulletTypeValueChange);
}

void TextController::Adjust(string key, bool direction)
{
	if (TextExistsForKey(key)) {
		int* index = &textValueIndexes[key];
		string* values = textValues[key];
		int lastIndex = *index;

		if (direction && *index + 1 > values->size() - 1)
			*index = 0;
		else if (!direction && *index - 1 < 0)
			*index = values->size() - 1;
		else
			textValueIndexes[key] += direction ? 1 : -1;
		
		if (TextChangeEventHandlerEventExistsForKey(key))
			GetTextChangEventHandlerForKey(key)(lastIndex, *index);
	}
}

// MARK: Booleans

bool TextController::TextExistsForKey(string key)
{
	return textValues.count(key) > 0;
}

bool TextController::TextChangeEventHandlerEventExistsForKey(string key)
{
	return textChangeEventHandlers.count(key) > 0;
}

// MARK: Getters

string TextController::GetTextValueForKey(string key)
{
	if (textValues[key]->size() - 1 < textValueIndexes[key] || textValueIndexes[key] < 0)
		return "Invalid";

	return textValues[key][textValueIndexes[key]];
}

std::function<void(int from, int to)> TextController::GetTextChangEventHandlerForKey(string key)
{
	return textChangeEventHandlers[key];
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
