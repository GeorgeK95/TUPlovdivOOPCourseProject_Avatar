#pragma once
#include "Bender.h"

class FireBender : virtual public Bender
{
private:
	double heatAggression;

	void setHeatAggression(double aerialIntegrity);

public:
	double calculateTotalPower();

	FireBender(string name, int power, double aerialIntegrity);
	~FireBender();
};

