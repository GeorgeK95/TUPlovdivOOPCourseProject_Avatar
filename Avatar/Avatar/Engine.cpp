#include "stdafx.h"
#include "Engine.h"


Engine::Engine(ConsoleInputReader inputReader, ConsoleOutputWriter outputWriter, InputParser inputParser, GameManager manager)
{
	this->manager = manager;
	this->inputReader = inputReader;
	this->outputWriter = outputWriter;
	this->parser = inputParser;
}

Engine::~Engine()
{
}


void Engine::run()
{
	string inputLine;

	while ((inputLine = this->inputReader.readLine()).compare(this->constants.INPUT_TERMINATING_COMMAND) != 0) {
		std::list<string> commandParams = this->parser.parseInput(inputLine);
		this->dispatchCommand(commandParams);
	}

	this->outputWriter.writeLine(manager.quit());
}


void Engine::dispatchCommand(std::list<string> commandParams)
{
	std::list<std::string>::iterator it = commandParams.begin();
	string command = *it;
	std::advance(it, 1);

	string output;

	if (command.compare(this->constants.BENDER_COMMAND) == 0) {
		string type = *it;
		std::advance(it, 1);
		string name = *it;
		std::advance(it, 1);
		int power = std::stoi(*it);
		std::advance(it, 1);
		double param = std::stod(*it);

		output = manager.createBender(type, name, power, param);
	}
	else if (command.compare(this->constants.MONUMENT_COMMAND) == 0) {
		string type = *it;
		std::advance(it, 1);
		string name = *it;
		std::advance(it, 1);
		int affinity = std::stoi(*it);

		output = manager.createMonument(type, name, affinity);
	}
	else if (command.compare(this->constants.STATUS_COMMAND) == 0) {
		string nation = *it;

		output = manager.printStatus(nation);
	}
	else if (command.compare(this->constants.WAR_COMMAND) == 0) {
		string nation = *it;

		output = manager.startWar(nation);
	}
	else if (command.compare(this->constants.WARS_LIST_COMMAND) == 0) {
		output = manager.warsList();
	}
	else {
		output = "Invalid command, please try again.";
	}

	this->outputWriter.writeLine(output);

}