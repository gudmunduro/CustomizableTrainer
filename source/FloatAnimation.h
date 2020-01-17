#pragma once
#include "pch.h"

class FloatAnimation
{
public:
	FloatAnimation(float from = 1.0f, float to = 1.0f, DWORD duration = 1000, bool repeat = false);

	void Start();
	void Stop();

	float from;
	float to;
	DWORD duration;
	bool repeat;
	float Value();

private:
	void Tick();

	int taskId;
	float value;
	DWORD startTime;
	DWORD endTime;
	Direction direction;
};

