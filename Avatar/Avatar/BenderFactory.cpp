#include "stdafx.h"
#include "BenderFactory.h"

Bender* BenderFactory::generateBender(string type, string name, int power, double parameter)
{
	string AIR_STRING = "Air";
	string FIRE_STRING = "Fire";
	string WATER_STRING = "Water";
	string EARTH_STRING = "Earth";

	if (type.compare(AIR_STRING) == 0) {
		return new AirBender(name, power, parameter);
	}
	else if (type.compare(WATER_STRING) == 0) {
		return new WaterBender(name, power, parameter);
	}
	else if (type.compare(FIRE_STRING) == 0) {
		return new FireBender(name, power, parameter);
	}
	else {
		return new EarthBender(name, power, parameter);
	}

}

BenderFactory::BenderFactory()
{
}


BenderFactory::~BenderFactory()
{
}
