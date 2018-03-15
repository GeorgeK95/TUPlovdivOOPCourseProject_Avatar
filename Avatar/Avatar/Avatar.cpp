// Avatar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConsoleInputReader.h"
#include "ConsoleOutputWriter.h"
#include "InputParser.h"
#include "GameManager.h"
#include "Engine.h"

void main()
{
	ConsoleInputReader inputReader = ConsoleInputReader();
	ConsoleOutputWriter outputWriter = ConsoleOutputWriter();
	InputParser inputParser = InputParser();
	GameManager manager = GameManager();
	Engine engine = Engine(inputReader, outputWriter, inputParser, manager);

	engine.run();
}