#pragma once
#ifndef EMPIRE_H
#define EMPIRE_H
#include <vector>
#include "data.h"
#include "Storage.h"
#include "SafeBox.h"
#include "Army.h"
#include "Territory.h"

class Empire
{
private:
	std::vector<Territory*>empire;
	Storage storage;
	SafeBox safe;
	Army army;
	Utils utils;
	bool stockExchange;
	bool centralBank;
public:
	//Constructor
	Empire(Territory* initial);

	//Getter
	int getGold() const;
	int getProds() const;
	int haveStockExchange() const;
	int haveCentralBank() const;

	bool receiveGold(int quant);
	bool receiveProds(int quant);
	bool spendGold(int quant);
	bool spendProds(int quant);

	bool attack(Territory* territory);

	//toString
	std::string toString() const;
	//Destructor
	~Empire();
};

#endif // !EMPIRE_H
