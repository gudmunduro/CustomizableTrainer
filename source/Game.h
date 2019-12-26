#pragma once
#include "pch.h"

class Game {
public:
	static void DrawText(string text, Vector2 position, float scale = 0.45f, Color color = { 255, 255, 255, 255 }, bool center = false);
	static void DrawSprite(string textureDict, string textureName, Vector3 position, Rect size, float heading, Color color);
	static void DrawRect(Vector3 position, Rect size, Color color);
	static void RequestModel(Hash model);
	static void SetWeather(Hash weather);
	static void RequestTextureDict(string textureDict);
	static string GetInputWithKeyboard(string defaultText = "");
	// MARK: Data
	static inline PlayerId playerId;
	static inline PedId playerPedId;
	static void UpdateData();
};
