#include "stdafx.h"
#include "EarthMonument.h"


void EarthMonument::setEarthAffinity(int earthAffinity)
{
	this->earthAffinity = earthAffinity;
}

int EarthMonument::getAffinity()
{
	return this->earthAffinity;
}

EarthMonument::EarthMonument(string name, int earthAffinity) : Monument(name)
{
	this->setEarthAffinity(earthAffinity);
}


EarthMonument::~EarthMonument()
{
}
