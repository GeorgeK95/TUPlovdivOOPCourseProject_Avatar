#include "stdafx.h"
#include "EarthBender.h"


double EarthBender::getGroundSaturation()
{
	return this->groundSaturation;
}

void EarthBender::setGroundSaturation(double groundSaturation)
{
	this->groundSaturation = groundSaturation;
}

double EarthBender::calculateTotalPower()
{
	return Bender::getPower() * this->getGroundSaturation();
}

EarthBender::EarthBender(string name, int power, double groundSaturation) : Bender(name, power)
{
	this->setGroundSaturation(groundSaturation);
}


EarthBender::~EarthBender()
{
}
