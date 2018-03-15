#include "stdafx.h"
#include "Bender.h"


void Bender::setName(string name)
{
	this->name = name;
}

void Bender::setPower(int power)
{
	this->power = power;
}

int Bender::getPower()
{
	return this->power;
}

string Bender::getName()
{
	return this->name;
}

Bender::Bender(string name, int power)
{
	this->setName(name);
	this->setPower(power);
}


Bender::~Bender()
{
}
