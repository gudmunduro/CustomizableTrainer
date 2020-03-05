#include "pch.h"
#include "SpawnerManualPlacementSub.h"
#include "Spawner.h"

SpawnerManualPlacementSub::SpawnerManualPlacementSub(MenuController* menuController, Entity entity)
	: Submenu(menuController), selectedEntity(entity)
{}

#pragma region Draw

void SpawnerManualPlacementSub::Draw()
{
	Submenu::Draw();

	auto&& pos = selectedEntity.Position();
	auto&& rot = selectedEntity.Rotation();

	DrawTitle("Manual placement");

	// Position
	DrawNumber("X", std::to_string(pos.x), [] {}, [this, pos] (bool direction) {
		Vector3 newPos = pos;
		newPos.x += direction ? 0.05 : -0.05;
		selectedEntity.SetCoords(newPos);
	});
	DrawNumber("Y", std::to_string(pos.y), [] {}, [this, pos] (bool direction) {
		Vector3 newPos = pos;
		newPos.y += direction ? 0.05 : -0.05;
		selectedEntity.SetCoords(newPos);
	});
	DrawNumber("Z", std::to_string(pos.z), [] {}, [this, pos](bool direction) {
		Vector3 newPos = pos;
		newPos.z += direction ? 0.05 : -0.05;
		selectedEntity.SetCoords(newPos);
	});

	// Rotation
	DrawNumber("Pitch", std::to_string(rot.x), [] {}, [this, rot](bool direction) {
		Vector3 newRot = rot;
		newRot.x += direction ? 0.05 : -0.05;
		selectedEntity.SetRotation(newRot);
	});
	DrawNumber("Roll", std::to_string(rot.y), [] {}, [this, rot](bool direction) {
		Vector3 newRot = rot;
		newRot.y += direction ? 0.05 : -0.05;
		selectedEntity.SetRotation(newRot);
	});
	DrawNumber("Yaw", std::to_string(rot.z), [] {}, [this, rot](bool direction) {
		Vector3 newRot = rot;
		newRot.z += direction ? 0.05 : -0.05;
		selectedEntity.SetRotation(newRot);
	});
}

#pragma endregion
