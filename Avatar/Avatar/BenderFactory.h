#pragma once
#include "Bender.h"
#include "AirBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "FireBender.h"

class BenderFactory
{
private:

public:
	static Bender* generateBender(string type, string name, int power, double parameter);
	BenderFactory();
	~BenderFactory();
};

