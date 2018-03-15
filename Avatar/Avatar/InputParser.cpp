#include "stdafx.h"
#include "InputParser.h"

std::list<string> InputParser::parseInput(string inputLine)
{
	std::string delimiter = " ";
	std::list<string> splitted;

	size_t pos = 0;
	std::string token;
	while ((pos = inputLine.find(delimiter)) != std::string::npos) {
		token = inputLine.substr(0, pos);
		splitted.push_back(token);
		inputLine.erase(0, pos + delimiter.length());
	}

	splitted.push_back(inputLine);

	return splitted;
}

InputParser::InputParser()
{
}


InputParser::~InputParser()
{
}
