#pragma once
#ifndef CONTINENT_H
#define CONTINENT_H
#include "Territory.h"

class Continent : 
	public Territory
{
public:
	Continent(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int counter);
	std::string getTerritoryType() const override;
	~Continent();
};
#endif // !CONTINENT_H

