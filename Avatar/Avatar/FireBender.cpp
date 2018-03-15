#include "stdafx.h"
#include "FireBender.h"


FireBender::FireBender(string name, int power, double heatAggression) : Bender(name, power)
{
	this->setHeatAggression(heatAggression);
}


void FireBender::setHeatAggression(double heatAggression)
{
	this->heatAggression = heatAggression;
}

double FireBender::calculateTotalPower()
{
	return  Bender::getPower() * this->heatAggression;
}

FireBender::~FireBender()
{
}
