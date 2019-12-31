#pragma once
#include "pch.h"

namespace Texts {
	// MARK: Value arrays

	string
		customBulletTypes[] = { "a", "b" };

	// MARK: On value change events

	void OnBulletTypeValueChange(int from, int to);
}