#pragma once
#include "pch.h"

namespace Routine {
	// MARK: Start routine
	void StartDrawBottomMessage(string message, int time = 1000);

	void SetPlayerCurrentModel(Hash model);

	// MARK: Run routines
	void RunAll();
};