#pragma once
#ifndef WORLD_H
#define WORLD_H
#include "Territory.h"
#include <iostream>
#include <sstream>
#include <vector>

class World
{
private:
	std::vector<Territory*> territories;
public:
	World();
	~World();
	std::string toString();
	std::string getInfoTerritory(std::string name);
	std::vector<Territory*> getTerritories() const;
	Territory* getInitialTerritory() const;
	void addTerritories(TerritoryTypes type, int num);
	void clearTerritories();

};

#endif // WORLD_H

