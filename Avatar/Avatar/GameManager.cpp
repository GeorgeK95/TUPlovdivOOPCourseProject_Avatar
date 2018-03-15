#include "stdafx.h"
#include "GameManager.h"
#include "AirBender.h"


void GameManager::initializeMonuments()
{
	list<Monument*> l;

	this->monuments.insert(make_pair(this->AIR_STRING, l));
	this->monuments.insert(make_pair(this->WATER_STRING, l));
	this->monuments.insert(make_pair(this->FIRE_STRING, l));
	this->monuments.insert(make_pair(this->EARTH_STRING, l));
}

void GameManager::initializeBenders()
{
	list<Bender*> l;

	this->benders.insert(make_pair(this->AIR_STRING, l));
	this->benders.insert(make_pair(this->WATER_STRING, l));
	this->benders.insert(make_pair(this->FIRE_STRING, l));
	this->benders.insert(make_pair(this->EARTH_STRING, l));
}

string GameManager::appendBenders(string builder, string nation)
{
	list<Bender*> bendersFound = this->benders.find(nation)->second;
	if (bendersFound.size() > 0) {
		for (Bender* bender : bendersFound) {
			builder.append("\n----").append(bender->getName());
		}
	}
	else {
		builder.append(" None");
	}

	return builder;
}

string GameManager::appendMonuments(string builder, string nation)
{
	list<Monument*> bendersFound = this->monuments.find(nation)->second;
	if (bendersFound.size() > 0) {
		for (Monument* monument : bendersFound) {
			builder.append("\n----").append(monument->getName());
		}
	}
	else {
		builder.append(" None");
	}

	return builder;
}

string GameManager::createBender(string type, string name, int power, double param)
{
	Bender* b = BenderFactory::generateBender(type, name, power, param);
	this->benders.find(type)->second.push_back(b);
	return "Successfully created Bender: " + name;
}

string GameManager::createMonument(string type, string name, int affinity)
{
	Monument* m = MonumentFactory::generateMonument(type, name, affinity);
	this->monuments.find(type)->second.push_back(m);
	return "Successfully created Monument: " + name;
}

string GameManager::printStatus(string nation)
{
	string builder = string();
	builder.append(nation).append(" Nation\n");
	builder.append("--Benders:");
	builder = this->appendBenders(builder, nation);
	builder.append("\n--Monuments:");
	builder = this->appendMonuments(builder, nation);
	return builder;
}

double GameManager::getCurrentTotalPower(list<Bender*> value) {
	double result = 0;
	for (Bender* bender : value) {
		result += bender->calculateTotalPower();
	}
	return result;
}

double GameManager::getCurrentMonumentsBonus(string nation, double totalPower) {
	double affinity = 0;
	for (Monument* monument : this->monuments.find(nation)->second) {
		affinity += monument->getAffinity();
	}
	return (totalPower / 100) * affinity;
}

void GameManager::killLoserNations(string winningNation)
{
	//this.benders.entrySet().stream().filter(x -> !x.getKey().equals(finalWinningNation)).forEach(y->y.getValue().clear());
	for (std::map<string, list<Bender*>>::iterator it = this->benders.begin(); it != this->benders.end(); ++it) {
		if (it->first.compare(winningNation) != 0) {
			it->second.clear();
		}
	}
}

void GameManager::clearLoserNationsMonuments(string winningNation)
{
	//this.monuments.entrySet().stream().filter(x -> !x.getKey().equals(finalWinningNation)).forEach(y->y.getValue().clear());
	for (std::map<string, list<Monument*>>::iterator it = this->monuments.begin(); it != this->monuments.end(); ++it) {
		if (it->first.compare(winningNation) != 0) {
			it->second.clear();
		}
	}
}

string GameManager::startWar(string nation)
{
	this->wars.push_back(nation);
	double bestPower = 0;
	string winningNation = nation;

	for (std::map<string, list<Bender*>>::iterator it = this->benders.begin(); it != this->benders.end(); ++it) {
		double currentTotalPower = getCurrentTotalPower(it->second);
		double currentMonumentsBonus = getCurrentMonumentsBonus(it->first, currentTotalPower);
		currentTotalPower += currentMonumentsBonus;

		if (currentTotalPower > bestPower) {
			bestPower = currentTotalPower;
			winningNation = it->first;
		}
	}

	//all of other nations are dead
	this->killLoserNations(winningNation);
	//all of other nations monuments are cleared
	this->clearLoserNationsMonuments(winningNation);

	return "Winner nation: " + winningNation + " with total power: " + IntToStringConverter::convert(bestPower);
}

string GameManager::warsList()
{
	string builder = string();
	int counter = 1;
	for (string war : this->wars) {
		builder.append("War " + IntToStringConverter::convert(counter) + ", invoked by: ").append(war).append(" nation.").append("\n");
		counter++;
	}
	builder = builder.substr(0, builder.size() - 1);
	return builder;
}

string GameManager::quit()
{
	return this->warsList();
}

GameManager::GameManager()
{
	this->initializeMonuments();
	this->initializeBenders();
}


GameManager::~GameManager()
{
}
