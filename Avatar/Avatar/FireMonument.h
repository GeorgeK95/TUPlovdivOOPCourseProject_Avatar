#pragma once
#include "Monument.h"

class FireMonument : public Monument
{
private:
	int fireAffinity;
	void setFireAffinity(int airAffinity);
public:
	int getAffinity();

	FireMonument(string name, int airAffinity);
	~FireMonument();
};

