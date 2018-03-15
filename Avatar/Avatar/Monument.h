#pragma once
class Monument
{
private:
	string name;
	void setName(string name);
public:
	virtual int getAffinity() = 0;

	string getName();
	Monument(string name);
	~Monument();
};

