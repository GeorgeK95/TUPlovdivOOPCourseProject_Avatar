#include "stdafx.h"
#include "Monument.h"


string Monument::getName()
{
	return this->name;
}

Monument::Monument(string name)
{
	this->setName(name);
}


void Monument::setName(string name)
{
	this->name = name;
}

Monument::~Monument()
{
}
