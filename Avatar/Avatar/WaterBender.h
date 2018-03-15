#pragma once
#include "Bender.h"

class WaterBender : virtual public Bender
{
private:
	double waterClarity;

	double getWaterClarity();
	void setWaterClarity(double waterClarity);

public:
	double calculateTotalPower();

	WaterBender(string name, int power, double aerialIntegrity);
	~WaterBender();
};

