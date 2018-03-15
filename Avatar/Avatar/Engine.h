#pragma once
#include "InputParser.h"
#include "GameManager.h"
#include "ConsoleInputReader.h"
#include "ConsoleOutputWriter.h"
#include "Constants.h"

class Engine
{
private:
	GameManager manager;
	Constants constants = Constants();
	InputParser parser;
	ConsoleInputReader inputReader;
	ConsoleOutputWriter outputWriter;
	void dispatchCommand(std::list<string> commandParams);
public:
	void run();
	Engine(ConsoleInputReader inputReader, ConsoleOutputWriter outputWriter, InputParser inputParser, GameManager manager);
	~Engine();
};

