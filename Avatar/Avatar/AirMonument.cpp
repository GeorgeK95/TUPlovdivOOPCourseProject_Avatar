#include "stdafx.h"
#include "AirMonument.h"


void AirMonument::setAirAffinity(int airAffinity)
{
	this->airAffinity = airAffinity;
}

int AirMonument::getAffinity()
{
	return this->airAffinity;
}

AirMonument::AirMonument(string name, int airAffinity) : Monument(name)
{
	this->setAirAffinity(airAffinity);
}


AirMonument::~AirMonument()
{
}
