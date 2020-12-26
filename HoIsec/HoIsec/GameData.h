#pragma once
#ifndef GAMEDATA_H
#define GAMEDATA_H
#include "World.h"
#include "Empire.h"
#include "FileReader.h"
#include "Event.h"
#include "data.h"
#include <iostream>
#include <sstream>


class GameData
{
	Utils converter;
	std::vector<Event*> events;

	World world;
	Empire empire;
	int year;
	int turn;
	Phases phase;
	int luckyFactor;
	
	bool isTerritory(const std::string type);
	void getTypeAndNumber(std::string& type, int& num, std::string info);
	void advancePhase();
public:
	GameData();
	~GameData();
	bool verifyTerritory(std::string name); // conquista
	bool createTerritories(std::string type, int quant); // cria
	bool loadTerritories(std::string fileName); // carrega
	bool initializeGame();	//inicia
	std::string listTerritoriesConquered(); //lista conquered territories 
	std::string listTerritoriesNotConquered(); //lista not conquered territories 
	std::string listTerritories(std::string territory);  //lista (with specific territory)
	int conquerTerritories(std::string name); // conquista
	void stayPassive(); //passa
	void advance();	//avanca


	Empire& getEmpire();

	int getYear() const;
	void setYear(int year);
	int getTurn() const;
	void setTurn(int turn);
	Phases getPhase() const;
	int getLuckyFactor() const;
	void generateLuckyFactor();
};
#endif // !GAMEDATA_H




