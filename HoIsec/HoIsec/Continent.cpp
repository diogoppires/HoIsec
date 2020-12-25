#include "Continent.h"
#include <iostream>

Continent::Continent(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int counter) : Territory(type, resistance, prodCreation, goldCreation, CONTINENT_WINPOINTS, counter)
{
	std::cout << "[CONTINENTE] Construindo... " << Territory::getName() << std::endl;
}

std::string Continent::getTerritoryType() const
{
	return CONTINENT;
}

Continent::~Continent()
{
	std::cout << "[CONTINENTE] Destruindo... " << Territory::getName() << std::endl;
}
