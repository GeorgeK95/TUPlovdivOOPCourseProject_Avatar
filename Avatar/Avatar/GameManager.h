#pragma once
#include "Bender.h"
#include "Monument.h"
#include "Constants.h"
#include "BenderFactory.h"
#include "MonumentFactory.h"
#include "IntToStringConverter.h"

class GameManager
{
private:
	string AIR_STRING = "Air";
	string FIRE_STRING = "Fire";
	string WATER_STRING = "Water";
	string EARTH_STRING = "Earth";

	string BENDER_COMMAND = "Bender";
	string MONUMENT_COMMAND = "Monument";
	string STATUS_COMMAND = "Status";
	string WAR_COMMAND = "War";
	string INPUT_TERMINATING_COMMAND = "Quit";

	std::map<string, std::list<Monument*>> monuments;
	std::map<string, std::list<Bender*>> benders;
	std::list<string> wars;

	//Constants constants = Constants(); makes error
	void initializeMonuments();
	void initializeBenders();
	string appendBenders(string builder, string nation);
	string appendMonuments(string builder, string nation);
	double getCurrentTotalPower(list<Bender*> value);
	double getCurrentMonumentsBonus(string nation, double totalPower);
	void killLoserNations(string winningNation);
	void clearLoserNationsMonuments(string winningNation);
	
public:
	string createBender(string type, string name, int power, double param);
	string createMonument(string type, string name, int affinity);
	string printStatus(string nation);
	string startWar(string nation);
	string warsList();
	string quit();

	GameManager();
	~GameManager();
};

