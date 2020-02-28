/*
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*/

#include "pch.h"
#include "FloatAnimation.h"

FloatAnimation::FloatAnimation(float from, float to, DWORD duration, bool repeat, std::optional<std::function<void()>> onCompletion)
{
	this->from = from;
	this->to = to;
	this->duration = duration;
	this->repeat = repeat;
	this->onCompletion = onCompletion;
	value = from;
	taskId = -1;
	startTime = 0;
	endTime = 0;
	direction = Direction::Forward;
	isRunning = false;
}

bool FloatAnimation::IsRunning()
{
	return isRunning;
}

void FloatAnimation::Start()
{
	if (isRunning) Stop();

	value = direction == Direction::Forward ? from : to;
	startTime = GetTickCount();
	endTime = GetTickCount() + duration;
	isRunning = true;

	taskId = TaskQueue::AddTask("animation", [this] { this->Tick(); });
}

void FloatAnimation::Stop()
{
	if (!isRunning) return;

	isRunning = false;
	TaskQueue::RemoveTask(taskId);
}

void FloatAnimation::Tick()
{
	DWORD tickCount = GetTickCount();
	if (tickCount >= endTime) {
		if (!repeat) {
			Stop();
			if (onCompletion)
				onCompletion.value()();

			return;
		}

		if (direction == Direction::Forward) {
			direction = Direction::Backward;
		}
		else {
			direction = Direction::Forward;
		}

		startTime = tickCount;
		endTime = tickCount + duration;
	}

	float progress = ((float)(tickCount - startTime)) / ((float)(endTime - startTime));
	if (progress == 0.0f) return;

	if (direction == Direction::Forward)
		value = from + ((to - from) * progress);
	else
		value = to - ((to - from) * progress);
}
