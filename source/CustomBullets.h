#pragma once

enum class CustomBulletType
{
	Explosion,
	Lightning,
	Fire
};

class CustomBulletController
{
public:
	CustomBulletController(CustomBulletType type);

	void OnBulletHitForExplosion(Vector3 pos);

	void OnBulletHitForLightning(Vector3 pos);

	void OnBulletHitForFire(Vector3 pos);

	void OnBulletHitForForestFire(Vector3 pos);

	void PlayerDidShoot();

	CustomBulletType type;
};

