#include "GameData.h"

//This method will be responsible to deliver the variables 'type' and 'num'
//the data stored inside the string 'info' that came from a file
void GameData::getTypeAndNumber(std::string& type, int& num, std::string info)
{
	std::istringstream iss(info);
	iss >> type;
	std::string aux;
	iss >> aux;
	num = std::stoi(aux, nullptr, 0);
}

GameData::GameData() {
	world = World();
	empire = Empire();
	year = 1;
	turn = 1;
	phase = Phases::NONE;
}
GameData::~GameData() {

}

bool GameData::verifyTerritory(std::string name) {
	return false;
}

void GameData::createTerritories(TerritoryTypes type, int quant){

}

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
		//Creates here in memory.
	}	
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
