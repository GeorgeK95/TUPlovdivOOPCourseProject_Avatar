#include "stdafx.h"
#include "WaterBender.h"


double WaterBender::getWaterClarity()
{
	return this->waterClarity;
}

void WaterBender::setWaterClarity(double waterClarity)
{
	this->waterClarity = waterClarity;
}

double WaterBender::calculateTotalPower()
{
	return Bender::getPower() * this->getWaterClarity();
}

WaterBender::WaterBender(string name, int power, double additionalParam) : Bender(name, power)
{
	this->setWaterClarity(additionalParam);
}


WaterBender::~WaterBender()
{
}
