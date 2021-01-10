#pragma once
#ifndef GAMEDATA_H
#define GAMEDATA_H
#include "World.h"
#include "Empire.h"
#include "data.h"
#include <vector>
#include <string>

class Event;
class GameData
{
private:
	Utils converter;
	std::vector<Event*> events;

	World* world;
	Empire* empire;
	int year;
	int turn;
	Phases phase;
	int luckyFactor;

	bool canBuyTech;
	bool canAddMilitar;
	bool canChangeResorces;
	bool canAttack;

	std::string eventMsg;
	std::string eventId;
	std::string gameOverMsg;

	void initialValues();
	void clearObjects();

	bool isTerritory(const std::string type);
	void getTypeAndNumber(std::string& type, int& num, std::string info);
	void advancePhase();

	bool activeTech(Techs type);
	int receveCost(Techs type);

	void addEvents();
	bool verifyInteger(std::string value);

	
	void setFinalMsg();

	void updateTerritories();
public:
	GameData();
	GameData(const GameData& other);
	~GameData();
	bool verifyTerritory(std::string name); // 'conquista'
	int createTerritories(std::string type, std::string value); // 'cria'
	bool loadTerritories(std::string fileName); // 'carrega'
	bool initializeGame();	// 'inicia'
	// Lista
	std::string listTerritoriesConquered(); // 'lista' conquered territories 
	std::string listTerritoriesNotConquered(); // 'lista' not conquered territories 
	std::string listTerritories(std::string territory);  // 'lista' (with specific territory)
	// --
	int conquerTerritories(std::string name); // 'conquista'
	int stayPassive(); // 'passa'
	int advance();	// 'avanca'
	int buyTechnology(std::string type); // 'adquire'
	int takeObject(std::string type, std::string name); // 'toma'
	int modifyData(std::string type, std::string number); // 'modifica'
	int moreGold(); // 'maisouro'
	int moreProd(); // 'maisprod'
	int moreMilitary(); // 'maismilitar'
	bool forceEvent(std::string nameEvent);

	//Events
	void drawEvent();
	std::string getEventMsg();
	std::string getEventId();

	void gameLost();
	void setGameOverMsg(std::string msg);
	std::string getGameOverMsg();

	//All points
	int allPoints();

	void setInitialValues();

	//Getter
	Empire* getEmpire();
	int getYear() const;
	void setYear(int year);
	int getTurn() const;
	void setTurn(int turn);
	Phases getPhase() const;
	int getLuckyFactor() const;
	//---

	void generateLuckyFactor();
};
#endif // !GAMEDATA_H




