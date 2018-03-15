#include "stdafx.h"
#include "AirBender.h"


void AirBender::setAerialIntegrity(double aerialIntegrity)
{
	this->aerialIntegrity = aerialIntegrity;
}

double AirBender::calculateTotalPower()
{
	return Bender::getPower() * this->aerialIntegrity;
}

AirBender::AirBender(string name, int power, double aerialIntegrity) : Bender(name, power)
{
	this->setAerialIntegrity(aerialIntegrity);
}


AirBender::~AirBender()
{
}
