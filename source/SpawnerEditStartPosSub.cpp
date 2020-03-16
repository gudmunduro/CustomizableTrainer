#include "pch.h"
#include "SpawnerEditStartPosSub.h"
#include "Spawner.h"

SpawnerEditStartPosSub::SpawnerEditStartPosSub(MenuController* menuController)
    : Submenu(menuController)
{}

void SpawnerEditStartPosSub::Draw()
{
    Submenu::Draw();

    Vector3 altPosValue = { 0, 0, 0 };
    Vector3& startPos = Spawner::Spawner::startPosition.value_or(altPosValue);

    DrawTitle("Start position");

    DrawAction("Current player position", [] {
        Spawner::Spawner::startPosition = Player().ped.Position();
    });
    DrawNumber("X", std::to_string(startPos.x), []() {
        if (auto inputValue = Game::GetInputWithKeyboard(); inputValue) {
            if (!Spawner::Spawner::startPosition) {
                Spawner::Spawner::startPosition = { 0, 0, 0 };
            }
            Spawner::Spawner::startPosition->x = std::stoi(*inputValue);
        }
        }, [](bool dir) {
        if (Spawner::Spawner::startPosition) {
            Spawner::Spawner::startPosition->x += dir ? 0.1 : -0.1;
        }
    });
    DrawNumber("Y", std::to_string(startPos.y), []() {
        if (auto inputValue = Game::GetInputWithKeyboard(); inputValue) {
            if (!Spawner::Spawner::startPosition) {
                Spawner::Spawner::startPosition = { 0, 0, 0 };
            }
            Spawner::Spawner::startPosition->y = std::stoi(*inputValue);
        }
        }, [](bool dir) {
            if (Spawner::Spawner::startPosition) {
                Spawner::Spawner::startPosition->y += dir ? 0.1 : -0.1;
            }
    });
    DrawNumber("Z", std::to_string(startPos.z), []() {
        if (auto inputValue = Game::GetInputWithKeyboard(); inputValue) {
            if (!Spawner::Spawner::startPosition) {
                Spawner::Spawner::startPosition = { 0, 0, 0 };
            }
            Spawner::Spawner::startPosition->z = std::stoi(*inputValue);
        }
        }, [](bool dir) {
            if (Spawner::Spawner::startPosition) {
                Spawner::Spawner::startPosition->z += dir ? 0.1 : -0.1;
            }
    });
}
