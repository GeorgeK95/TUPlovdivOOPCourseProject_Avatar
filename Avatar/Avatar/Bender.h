#pragma once
class Bender
{
private:
	string name;
	int power;

	void setName(string name);
	void setPower(int power);

public:
	virtual double calculateTotalPower() = 0;

	int getPower();
	string getName();

	Bender(string name, int power);
	~Bender();
};

