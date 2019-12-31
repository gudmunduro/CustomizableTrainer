#pragma once
class GameplayCamera
{
public:
	static Vector3 Position();
	static Vector3 Rotation();
	static bool WorldToScreenRel(const Vector3& worldCoords, Vector2& screenCoords);
	static Vector3 ScreenToWorld(const Vector2& screenCoord);
	static Vector3 DirectionFromScreenCentre();
};

