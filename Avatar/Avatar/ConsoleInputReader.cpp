#include "stdafx.h"
#include "ConsoleInputReader.h"


string ConsoleInputReader::readLine()
{
	std::string s;
	std::getline(std::cin, s);
	return s;
}

ConsoleInputReader::ConsoleInputReader()
{
}


ConsoleInputReader::~ConsoleInputReader()
{
}
