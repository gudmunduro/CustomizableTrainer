#include "pch.h"
#include "EntityLists.h"
#include "JsonData.h"

void EntityLists::LoadAll()
{
	weapons = JSONData::GetWeapons();
	vehicles = JSONData::GetVehicles();
	peds = JSONData::GetPeds();
	objects = JSONData::GetObjects();
}
