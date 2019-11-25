#include "pch.h"
#include "Game.h"
#include "Routine.h"

void Game::DrawText(string text, Vector2 position, float scale1, float scale2, Color color, bool center) {
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_SCALE(scale1, scale2);
	UI::SET_TEXT_COLOR_RGBA(color.r, color.g, color.b, color.a);
	char* varString = GAMEPLAY::CREATE_STRING(10, "LITERAL_STRING", (char*) text.c_str());
	UI::DRAW_TEXT(varString, position.x, position.y);
}

void Game::RequestModel(Hash model)
{
	STREAMING::REQUEST_MODEL(model, true);
	auto timeout = GetTickCount() + 1000;
	while (!STREAMING::HAS_MODEL_LOADED(model)) {
		WAIT(5);
		if (GetTickCount() > timeout) {
			Routine::StartDrawBottomMessage("~r~Error: ~w~Loading model timed out");
			break;
		}
	}
}

void Game::RequestTextureDict(string textureDict)
{
	TEXTURE::REQUEST_STREAMED_TEXTURE_DICT((char*)textureDict.c_str(), true);
	while (!TEXTURE::HAS_STREAMED_TEXTURE_DICT_LOADED((char*)textureDict.c_str())) {
		WAIT(5);
	}
}

string Game::GetInputWithKeyboard(string defaultText)
{
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(0, "", "", (char*) defaultText.c_str(), "", "", "", 100);
	while (true)
	{
		switch (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD())
		{
		case 1: return string(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
		case 2: return "";
		case 3: 
			Routine::StartDrawBottomMessage("~r~ ERROR: ~s~Unknown keyboard error");
			return "";
		default: continue;
		}
		WAIT(0);
	}
}

void Game::UpdateData()
{
	playerId = PLAYER::PLAYER_ID();
	playerPedId = PLAYER::PLAYER_PED_ID();
}