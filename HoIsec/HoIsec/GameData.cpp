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

GameData::GameData() : world(), empire(),converter() {
	year = 1;
	turn = 1;
	phase = Phases::NONE;
}

GameData::~GameData() {

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

std::string GameData::listTerritories() {
	return world.toString();
}

std::string GameData::listTerritories(std::string name) {
	return world.getInfoTerritory(name);
}

int GameData::conquerTerritories(std::string name) {
	return 1;
}
std::string GameData::toString() {
	return "default";
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

