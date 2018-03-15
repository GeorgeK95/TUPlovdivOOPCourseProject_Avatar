#pragma once
#include "Monument.h"
class AirMonument : public Monument
{
private:
	int airAffinity;
	void setAirAffinity(int airAffinity);
public:
	int getAffinity();

	AirMonument(string name, int airAffinity);
	~AirMonument();
};

