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

class Game {
public:
	static void DrawText(std::string text, Vector2 position, float scale = 0.45f, Color color = { 255, 255, 255, 255 }, bool center = false);
	static void DrawSprite(std::string textureDict, std::string textureName, Vector3 position, Rect size, float heading, Color color);
	static void PrintSubtitle(std::string text);
	static void PrintDebug(std::string text);
	static void PlaySoundFrontend(std::string soundCat, std::string soundName);
	static void DrawRect(Vector2 position, Rect size, Color color);
	static void RequestModel(Hash model);
	static void SetModelAsNoLongerNeeded(Hash model);
	static void SetWeather(Hash weather);
	static void RequestTextureDict(std::string textureDict);
	static bool RequestAnimDict(std::string animDict);
	static std::string GetInputWithKeyboard(std::string defaultText = "");
	static float AspectRatio();
	
	static inline PlayerId playerId;
	static inline PedId playerPedId;
	static void UpdateData();
};
