#include "stdafx.h"
#include "MonumentFactory.h"

Monument* MonumentFactory::generateMonument(string type, string name, int affinity)
{
	string AIR_STRING = "Air";
	string FIRE_STRING = "Fire";
	string WATER_STRING = "Water";
	string EARTH_STRING = "Earth";

	if (type.compare(AIR_STRING) == 0) {
		return new AirMonument(name, affinity);
	}
	else if (type.compare(WATER_STRING) == 0) {
		return new WaterMonument(name, affinity);
	}
	else if (type.compare(FIRE_STRING) == 0) {
		return new FireMonument(name, affinity);
	}
	else {
		return new EarthMonument(name, affinity);
	}

}

MonumentFactory::MonumentFactory()
{
}


MonumentFactory::~MonumentFactory()
{
}
