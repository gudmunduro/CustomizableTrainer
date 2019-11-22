#pragma once
#include "pch.h"

class Routine {
public:
	// MARK: Start routine
	static void StartDrawBottomMessage(string message, int time = 1000);

	// MARK: Run routines
	static void DrawBottomMessage();
	static void RunAll();
private:
	// MARK: Variables
	static inline string bottomMesssageText;
	static inline DWORD drawBottomTextUntil;
};