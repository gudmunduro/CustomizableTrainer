#include "pch.h"
#include "FloatAnimation.h"

FloatAnimation::FloatAnimation(float from, float to, DWORD duration, bool repeat)
{
	this->from = from;
	this->to = to;
	this->duration = duration;
	this->repeat = repeat;
	value = from;
	taskId = 0;
	startTime = 0;
	endTime = 0;
	direction = Direction::Forward;
}

void FloatAnimation::Start()
{
	value = from;
	startTime = GetTickCount();
	endTime = GetTickCount() + duration;

	taskId = TaskQueue::AddTask("animation", [this] { this->Tick(); });
}

void FloatAnimation::Stop()
{
	TaskQueue::RemoveTask(taskId);
}

float FloatAnimation::Value()
{
	return value;
}

void FloatAnimation::Tick()
{
	DWORD tickCount = GetTickCount();
	if (tickCount >= endTime) {
		if (!repeat) {
			Stop();
			return;
		}

		if (direction == Direction::Forward)
			direction = Direction::Backward;
		else
			direction = Direction::Forward;
	}

	DWORD progress = (tickCount - startTime) / (endTime - startTime);

	if (direction == Direction::Forward)
		value = from + (to - from) / progress;
	else
		value = to - (to - from) / progress;
}
