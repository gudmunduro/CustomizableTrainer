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

class FloatAnimation
{
public:
	FloatAnimation(float from = 1.0f, float to = 1.0f, DWORD duration = 1000, bool repeat = false, std::optional<std::function<void()>> onCompletion = std::nullopt);

	bool IsRunning();

	void Start();
	void Stop();

	float from;
	float to;
	DWORD duration;
	bool repeat;
	Direction direction;
	std::optional<std::function<void()>> onCompletion;
	float value;

private:
	void Tick();

	bool isRunning;
	int taskId;
	DWORD startTime;
	DWORD endTime;
};

