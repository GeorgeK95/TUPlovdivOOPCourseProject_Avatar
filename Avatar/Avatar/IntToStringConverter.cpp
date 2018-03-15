#include "stdafx.h"
#include "IntToStringConverter.h"


string IntToStringConverter::convert(int a)
{
	ostringstream temp;
	temp << a;
	return temp.str();
}

IntToStringConverter::IntToStringConverter()
{
}


IntToStringConverter::~IntToStringConverter()
{
}
