#include "GameData.h"
#include "AbandonedResource.h"
#include "DiplomaticAlliance.h"
#include "Invasion.h"
#include "NoEvent.h"

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

void GameData::advancePhase()
{
	switch (phase)
	{
		case Phases::NONE:			phase = Phases::CONQUER;	break;
		case Phases::CONQUER:		phase = Phases::COLLECTION; break;
		case Phases::COLLECTION:	phase = Phases::SHOP;		break;
		case Phases::SHOP:			phase = Phases::EVENTS;		break;
		case Phases::EVENTS:		phase = Phases::CONQUER;	break;
	}
}

void GameData::addEvents()
{
	AbandonedResource* ar = new AbandonedResource(this);
	DiplomaticAlliance* da = new DiplomaticAlliance(this);
	Invasion* inv = new Invasion(this);
	NoEvent* none = new NoEvent(this);
	events.push_back(ar);
	events.push_back(da);
	events.push_back(inv);
	events.push_back(none);
}

GameData::GameData() : world(), empire(world.getSpecificTerritory(INITIAL_TERRITORY_NAME)), converter() {
	year = 1;
	turn = 1;
	phase = Phases::NONE;
	canBuyTech = true;
	luckyFactor = 0;
	eventMsg = EVENT_NONE;
	eventId = EVENT_NONE;
	addEvents();
	std::cout << "[GAMEDATA] Construindo...\n";
}

GameData::~GameData() {
	std::cout << "[GAMEDATA] Destruindo...\n";
	for (Event* ev : events) {
		delete ev;
	}
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

bool GameData::initializeGame()
{
	if (world.getTerritoriesSize() > 1) {
		advancePhase();
		return true;
	}
	return false;
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
/**
* This method is for conquer the Territory with name = 'name'.
* return:
*	( 1) -> if the battle was won
*	( 0) -> if the battle was lost
*	(-1) -> if the territory was already conquered.
*	(-2) -> if the territory doens't exist
*	(-3) -> if the empire have less than 5 territories.
*	(-4) -> if haven´t the tech 'missiles' active.
*/
int GameData::conquerTerritories(std::string name) {
	Territory* chosenTerr = world.getSpecificTerritory(name);

	if (chosenTerr != nullptr) {

		if (dynamic_cast<Island*>(chosenTerr)) {
			if (empire.getEmpireSize() < 5)
				return -3;
			if (!empire.haveMissiles())
				return -4; 
		}

		if (chosenTerr->isConquered()) {
			return -1; 
		}
		generateLuckyFactor();
		int attackResult = empire.attack(chosenTerr,getLuckyFactor()); 
		advancePhase();
		return attackResult; // 0 / 1 .
	}
	return -2; 
}
/**
* This method active the tech passed at 'type' 
* return:
*	( 1) -> success
*	( 0) -> not have enough gold 
*	(-1) -> if alredy bought one tech in same turn
*	(-2) -> tech alredy active
*	(-3) -> type doesn't exist
*/
int GameData::buyTechnology(std::string type) {
	if (!canBuyTech) {
		return -1;
	}
	Techs tech = converter.StringToTechs(type);
	if(tech != Techs::NONE){
		int price = receveCost(tech);
		if (price != 0) {
			if (!activeTech(tech)) {
				return -2;
			}
			empire.spendGold(price);
			canBuyTech = false;
			return 1;
		}
		return 0;
	}
	return -3;
}
/**
* This method is for conquer the Territory with name = 'name'.
* return:
*	( 2) -> if the technology has been active with success
*	( 1) -> if the territory has been add with success
*	( 0) -> if type is not valid
*	(-1) -> if the territory already belongs to the empire
*	(-2) -> if the technology is already active
*	(-3) -> if the name isn't a valid territory
*	(-4) -> if the name isn't a valid technology
*/
int GameData::takeObject(std::string type, std::string name)
{
	if (type == TAKE_TYPE_TERRITORY) {
		Territory* terr = world.getSpecificTerritory(name);
		if (terr != nullptr) {
			return empire.addTerritory(terr) ? 1 : -1;
		}
		return -3;
	}
	else if (type == TAKE_TYPE_TECH) {
		Techs tec = converter.StringToTechs(name);
		if (tec != Techs::NONE) {
			return activeTech(tec) ? 2 : -2;
		}
		return -4;
	}
	else
		return 0;
}

bool GameData::activeTech(Techs type)
{
	switch (type) {
	case Techs::DRONE:
		if (!empire.haveDrone()) {
			empire.activeDrone();
			return true;
		}
		break;
	case Techs::MISSILES:
		if (!empire.haveMissiles()) {
			empire.activeMissiles();
			return true;
		}
		break;
	case Techs::DEFENSES:
		if (!empire.haveDefenses()) {
			empire.activeDefenses();
			return true;
		}
		break;
	case Techs::CENTRALBANK:
		if (!empire.haveCentralBank()) {
			empire.activeCentralBank();
			return true;
		}
		break;
	case Techs::STOCKEXCHANGE:
		if (!empire.haveStockExchange()) {
			empire.activeStockExchange();
			return true;
		}
		break;
	}
	return false;
}

int GameData::receveCost(Techs type)
{
	int price = 0;
	switch (type) {
	case Techs::DRONE:
		price = PRICE_TECH_DRONE;
		break;
	case Techs::MISSILES:
		price = PRICE_TECH_MISSILES;
		break;
	case Techs::DEFENSES:
		price = PRICE_TECH_DEFENSES;
		break;
	case Techs::CENTRALBANK:
		price = PRICE_TECH_CENTRALBANK;
		break;
	case Techs::STOCKEXCHANGE:
		price = PRICE_TECH_STOCKEXCHANGE;
		break;
	}

	if (empire.getGold() >= price) {
		return price;
	}
	return 0;
}

void GameData::stayPassive()
{
	advancePhase();
	empire.updateEmpire();
}

void GameData::advance()
{
	advancePhase();
}

void GameData::drawEvent() {
	int eventOpt = converter.generateNumber(N_EVENTS);
	Event* choosenEv = events.at(eventOpt);
	eventMsg = choosenEv->applyEvent();
	eventId = choosenEv->toString();
}

std::string GameData::getEventMsg()
{
	return eventMsg;
}

std::string GameData::getEventId()
{
	return eventId;
}

//Getter
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
int GameData::getLuckyFactor() const {
	return luckyFactor;
}
//---

void GameData::generateLuckyFactor(){
	this->luckyFactor = converter.generateLuckFactor();
}


