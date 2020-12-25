#include "GameData.h"

bool GameData::isTerritory(const std::string type)
{
	return converter.StringToTerritoryTypes(type) != TerritoryTypes::NONE;
}

//This method will be responsible to deliver the variables 'type' and 'num'
//the data stored inside the string 'info' that came from a file
void GameData::getTypeAndNumber(std::string& type, int& num, std::string info)
{
	std::string command;
	std::istringstream iss(info);
	iss >> command;
	iss >> type;
	std::string aux;
	iss >> aux;
	num = std::stoi(aux, nullptr, 0);
}

GameData::GameData() : world(), empire(world.getSpecificTerritory(INITIAL_TERRITORY_NAME)), converter() {
	year = 1;
	turn = 1;
	phase = Phases::NONE;
	luckyFactor = 0;
	std::cout << "[GAMEDATA] Construindo...\n";
}

GameData::~GameData() {
	std::cout << "[GAMEDATA] Destruindo...\n";
}

bool GameData::verifyTerritory(std::string name) {
	return false;
}

bool GameData::createTerritories(std::string type, int quant){
	if (!isTerritory(type)) {
		return false;
	}
	world.addTerritories(converter.StringToTerritoryTypes(type), quant);
	return true;
}

//Receive from a file territories types and the number of times the user wants to create a territory.
bool GameData::loadTerritories(std::string fileName) {
	FileReader file(fileName);
	std::vector<std::string> infoReceived = file.readFile();
	if (infoReceived.empty()) {
		return false;
	}

	std::string type;
	int num;
	std::vector<std::string>::iterator it;
	for (it = infoReceived.begin(); it != infoReceived.end(); it++) {
		getTypeAndNumber(type, num, (*it));
		world.addTerritories(converter.StringToTerritoryTypes(type), num);
	}
	return true;
}

std::string GameData::listTerritoriesConquered() {

	return world.toStringConquerd();
}

std::string GameData::listTerritoriesNotConquered()
{
	return world.toStringNotConquerd();
}

std::string GameData::listTerritories(std::string name) {
	return world.getInfoTerritory(name);
}

int GameData::conquerTerritories(std::string name) {
	Territory* chosenTerr = world.getSpecificTerritory(name);

	if (chosenTerr != nullptr) {

		if (chosenTerr->isConquered()) {
			return -1; //-1 if the territory was already conquered.
		}
		generateLuckyFactor();
		return empire.attack(chosenTerr,getLuckyFactor()); // 0 if the battle was lost/ 1 if the battle was won.
	}
	return -2; //-2 if the territory doens't exist
}

Empire& GameData::getEmpire()
{
	return empire;
}



int GameData::getYear() const { 
	return year; 
}
void GameData::setYear(int year) {
	this->year = year;
}
int GameData::getTurn() const {
	return turn;
}
void GameData::setTurn(int turn) {
	this->turn = turn;
}
Phases GameData::getPhase() const {
	return phase;
}
void GameData::setPhase(Phases phase) {
	this->phase = phase;
}

int GameData::getLuckyFactor() const {
	return luckyFactor;
}

void GameData::generateLuckyFactor(){
	this->luckyFactor = converter.generateLuckFactor();
}


