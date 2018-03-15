#include "stdafx.h"
#include "FireMonument.h"


void FireMonument::setFireAffinity(int fireAffinity)
{
	this->fireAffinity = fireAffinity;
}

int FireMonument::getAffinity()
{
	return this->fireAffinity;
}

FireMonument::FireMonument(string name, int fireAffinity) : Monument(name)
{
	this->setFireAffinity(fireAffinity);
}


FireMonument::~FireMonument()
{
}
