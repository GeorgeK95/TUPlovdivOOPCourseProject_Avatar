#pragma once
#include "Bender.h"

class EarthBender : virtual public Bender
{
private:
	double groundSaturation;

	double getGroundSaturation();
	void setGroundSaturation(double EarthClarity);

public:
	double calculateTotalPower();

	EarthBender(string name, int power, double groundSaturation);
	~EarthBender();
};

