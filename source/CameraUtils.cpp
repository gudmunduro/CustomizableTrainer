/**
* Copyright (C) 2007-2010 SlimDX Group
*
* Permission is hereby granted, free  of charge, to any person obtaining a copy of this software  and
* associated  documentation  files (the  "Software"), to deal  in the Software  without  restriction,
* including  without  limitation  the  rights  to use,  copy,  modify,  merge,  publish,  distribute,
* sublicense, and/or sell  copies of the  Software,  and to permit  persons to whom  the Software  is
* furnished to do so, subject to the following conditions:
*
* The  above  copyright  notice  and this  permission  notice shall  be included  in  all  copies  or
* substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS",  WITHOUT WARRANTY OF  ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
* NOT  LIMITED  TO  THE  WARRANTIES  OF  MERCHANTABILITY,  FITNESS  FOR  A   PARTICULAR  PURPOSE  AND
* NONINFRINGEMENT.  IN  NO  EVENT SHALL THE  AUTHORS  OR COPYRIGHT HOLDERS  BE LIABLE FOR  ANY CLAIM,
* DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,  OUT
* OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
/*
* ALTERED SOURCE
* Menyoo PC - Grand Theft Auto V single-player trainer mod
* Copyright (C) 2019  MAFINS
*/
/*
* ALTERED SOURCE
* Customizable Trainer
* Copyright (C) 2020  Guðmundur Óli
*/

#include "pch.h"
#include "CameraUtils.h"

namespace CameraUtils {

	Vector3 Cross(Vector3 left, Vector3 right)
	{
		Vector3 result;
		result.x = left.y * right.z - left.z * right.y;
		result.y = left.z * right.x - left.x * right.z;
		result.z = left.x * right.y - left.y * right.x;
		return result;
	}

	Vector3 RotationToDirection(Vector3& rotation) {
		float retz = rotation.z * 0.0174532924F; // Degree to radian
		float retx = rotation.x * 0.0174532924F;
		float absx = abs(cos(retx));
		return { -sin(retz) * absx, cos(retz) * absx, sin(retx) };
	}

	Vector3 GetOffsetFromCameraInWorldCoords(Cam cam, Vector3 &offset)
	{
		Vector3& rotation = CAM::GET_CAM_ROT(cam, 2);
		Vector3& forward = RotationToDirection(rotation);
		const double D2R = 0.01745329251994329576923690768489;
		double num1 = cos(rotation.y * D2R);
		double x = num1 * cos(-rotation.z * D2R);
		double y = num1 * sin(rotation.z * D2R);
		double z = sin(-rotation.y * D2R);
		Vector3 right = { x, y, z };
		Vector3& Up = Cross(right, forward);
		return CAM::GET_CAM_COORD(cam) + (right * offset.x) + (forward * offset.y) + (Up * offset.z);
	}
}