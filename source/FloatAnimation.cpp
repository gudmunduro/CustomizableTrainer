#include "pch.h"
#include "FloatAnimation.h"

FloatAnimation::FloatAnimation(float from, float to, DWORD duration)
{
	this->from = from;
	this->to = to;
	this->duration = duration;
	value = from;
	taskId = 0;
	startTime = 0;
	endTime = 0;
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
	if (tickCount >= endTime)
		Stop();

	DWORD progress = (tickCount - startTime) / (endTime - startTime);

	value = from + (to - from) / progress;
}
