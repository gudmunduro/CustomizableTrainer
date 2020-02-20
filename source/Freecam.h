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

class FreeCam {
public:
	FreeCam();
	~FreeCam();

	void RespondToMoveControls();
	void RespondToRotateControls();
	void RespondToControls();

	void ResetValues();
	void UpdatePosition();
	void UpdateRotation();
	void Tick();

	Cam cam;
private:
	Vector3 nextPositionOffset;
	Vector3 nextRotationOffset;
};