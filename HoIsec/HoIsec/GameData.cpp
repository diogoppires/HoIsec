#include "GameData.h"

GameData::GameData() {
	world = World();
	empire = Empire();
	year = 1;
	turn = 1;
	phase = NONE;
}
GameData::~GameData() {

}
bool GameData::verifyTerritory(std::string name) {

}
bool GameData::createTerritories(TerritotyTypes type, int quant) {

}
bool GameData::loadTerritories() {

}
int GameData::conquerTerritories(std::string name) {

}
std::string GameData::toString() {

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
