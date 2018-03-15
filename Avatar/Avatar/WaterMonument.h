#pragma once
#include "WaterMonument.h"
#include "Monument.h"

class WaterMonument : virtual public Monument
{
private:
	int waterAffinity;

	void setWaterAffinity(int waterAffinity);
public:
	WaterMonument(string name, int waterAffinity);
	~WaterMonument();

	int getAffinity();
};

