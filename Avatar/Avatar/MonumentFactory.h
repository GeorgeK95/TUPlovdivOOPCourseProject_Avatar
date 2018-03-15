#pragma once
#include "Monument.h"
#include "AirMonument.h"
#include "WaterMonument.h"
#include "FireMonument.h"
#include "EarthMonument.h"

class MonumentFactory
{
private:

public:
	static Monument* generateMonument(string type, string name, int affinity);

	MonumentFactory();
	~MonumentFactory();
};

