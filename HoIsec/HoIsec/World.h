#pragma once
#ifndef WORLD_H
#define WORLD_H
#include "Territory.h"
#include <iostream>
#include <sstream>
#include <vector>

class World
{
	std::vector<Territory> territories;
public:
	World(){}
	~World();
	std::string toString();
	std::vector<Territory> getTerritories() const;
	void addTerritories(TerritoryTypes type, int num);
	void clearTerritories();
};

#endif // WORLD_H

