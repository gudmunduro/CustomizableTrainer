#include "pch.h"
#include "HorseFlyMode.h"
#include "ControlManager.h"
#include "Routine.h"

HorseFlyMode::HorseFlyMode()
{
	Routine::StartDrawBottomMessage("Horse fly mode activated");
}

void HorseFlyMode::Tick()
{

}

void HorseFlyMode::HoverTest()
{
	if (ControlManager::IsFunctionControlJustReleased(FunctionControl::HorseFlyUp)) {

	}
	if (ControlManager::IsFunctionControlJustReleased(FunctionControl::HorseFlyDown)) {

	}
}