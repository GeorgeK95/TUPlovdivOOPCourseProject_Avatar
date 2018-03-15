#include "stdafx.h"
#include "WaterMonument.h"

WaterMonument::WaterMonument(string name, int waterAffinity) : Monument(name)
{
	this->setWaterAffinity(waterAffinity);
}


void WaterMonument::setWaterAffinity(int waterAffinity)
{
	this->waterAffinity = waterAffinity;
}

WaterMonument::~WaterMonument()
{
}

int WaterMonument::getAffinity()
{
	return this->waterAffinity;
}
