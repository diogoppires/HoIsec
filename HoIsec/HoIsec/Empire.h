#pragma once
#ifndef EMPIRE_H
#define EMPIRE_H
#include <vector>
#include "data.h"
#include "Storage.h"
#include "SafeBox.h"
#include "Army.h"
#include "Territory.h"
#include "StockExchange.h"
#include "CentralBank.h"
#include "Missile.h"
#include "Drone.h"
#include "Defenses.h"

class Empire
{
private:
	std::vector<Territory*>empire;
	Storage storage;
	SafeBox safe;
	Army army;
	Utils utils;

	/*
		StockExchange stockExchange;
		CentralBank centralBank;
		Drone drone;
		Defenses defenses;
		Missile missiles;
	*/

	Technology* stockExchange;
	Technology* centralBank;
	Technology* drone;
	Technology* defenses;
	Technology* missiles;
	
	int score;
	int prodCreation;
	int goldCreation;

public:
	//Constructor
	Empire(Territory* initial);

	//Getter
	int getGold() const;
	int getGoldCreation() const;
	int getProds() const;
	int getProdsCreation() const;
		
	int getScore() const;
	int getMiliForce() const;
	int getMaxMiliForce() const;
	int getMaxStorage() const;
	int getMaxSafeBox() const;
	int getEmpireSize() const;


	//Checkers of Techs
	bool haveStockExchange() const;
	bool haveCentralBank() const;
	bool haveDrone() const;
	bool haveDefenses() const;
	bool haveMissiles() const;

	void updateEmpire();

	bool increaseArmy(int quant);
	bool receiveGold(int quant);
	bool receiveProds(int quant);
	bool decreaseArmy(int quant);
	bool spendGold(int quant);
	bool spendProds(int quant);
	

	bool attack(Territory* territory,int luckyFactor);
	void deleteLastTerritory();

	Territory* getLastConquer();
	
	//toString
	std::string toString() const;
	//Destructor
	~Empire();
};

#endif // !EMPIRE_H
