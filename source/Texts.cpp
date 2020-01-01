#include "pch.h"
#include "Texts.h"
#include "Routine.h"

// MARK: On value change events

void Texts::OnBulletTypeValueChange(int from, int to)
{
	Routine::SetCustomBulletType(to);
}
