#pragma once
#include "Monument.h"
class EarthMonument : public Monument
{
private:
	int earthAffinity;
	void setEarthAffinity(int airAffinity);
public:
	int getAffinity();

	EarthMonument(string name, int airAffinity);
	~EarthMonument();
};

