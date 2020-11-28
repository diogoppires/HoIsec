#pragma once
#ifndef GAMEDATA_H
#define GAMEDATA_H
#include "World.h"
#include "Empire.h"
#include "FileReader.h"
#include "data.h"
#include <iostream>
#include <sstream>

class GameData
{
	ConvertEnum converter;
	World world;
	Empire empire;
	int year;
	int turn;
	Phases phase;
	
	bool isTerritory(const std::string type);
	void getTypeAndNumber(std::string& type, int& num, std::string info);
public:
	GameData();
	~GameData();
	bool verifyTerritory(std::string name); // conquista
	bool createTerritories(std::string type, int quant); // cria
	bool loadTerritories(std::string fileName); // carrega
	std::string listTerritories(); //lista (sem parâmetros)
	std::string listTerritories(std::string territory);  //lista (com parâmetros)
	int conquerTerritories(std::string name); // conquista
	std::string toString();

	int getYear() const;
	void setYear(int year);
	int getTurn() const;
	void setTurn(int turn);
	Phases getPhase() const;
	void setPhase(Phases phase);
};
#endif // !GAMEDATA_H




