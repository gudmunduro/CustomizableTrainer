#pragma once

enum class CustomBulletType
{
	Explosion,
	LargeExplosion,
	Fountain,
	Gas,
	Lightning,
	Fire,
	LargeFire,
	ForestFire,
	Teleport,
	Delete,
	WaterHydrant
};

class CustomBulletController
{
public:
	CustomBulletController(CustomBulletType type);

	void OnBulletHitForExplosion(Vector3 pos);

	void OnBulletHitForLargeExplosion(Vector3 pos);

	void OnBulletHitForGas(Vector3 pos);

	void OnBulletHitForFountain(Vector3 pos);

	void OnBulletHitForLightning(Vector3 pos);

	void OnBulletHitForFire(Vector3 pos);

	void OnBulletHitForLargeFire(Vector3 pos);

	void OnBulletHitForForestFire(Vector3 pos);

	void OnBulletHitForWaterHydrant(Vector3 pos);

	void OnBulletHitForTeleport(Vector3 pos);

	void OnBulletHitForDelete(EntityId entity);

	void PlayerDidShoot();

	CustomBulletType type;
};
