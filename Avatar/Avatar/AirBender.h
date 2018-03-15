#pragma once
#include "Bender.h"

class AirBender : virtual public Bender
{
private:
	double aerialIntegrity;

	void setAerialIntegrity(double aerialIntegrity);

public:
	double calculateTotalPower();

	AirBender(string name, int power, double aerialIntegrity);
	~AirBender();
};

