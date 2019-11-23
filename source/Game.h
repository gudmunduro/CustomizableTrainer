#pragma once
#include "pch.h"

class Game {
public:
	static void DrawText(string text, Vector2 position, float scale1 = 0.45f, float scale2 = 0.45f, Color color = { 255, 255, 255, 255 }, bool center = false);
	static void RequestModel(Hash model);
	// MARK: Data
	static inline Player playerId;
	static inline Ped playerPedId;
	static void UpdateData();
};
