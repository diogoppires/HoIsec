#include "Continent.h"
#include <iostream>
#include <sstream>

Continent::Continent(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int counter) 
	: Territory(type, resistance, prodCreation, goldCreation, CONTINENT_WINPOINTS, counter)
{
#ifdef DEBUG
	std::cout << "[CONTINENTE] Construindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}


std::string Continent::getTerritoryCategory() const
{
	return CONTINENT;
}

std::string Continent::toString()
{
	std::ostringstream oss;

	oss << "\tCATEGORIA = '" << getTerritoryCategory() << "'\n" << Territory::toString();
	return oss.str();
}

Continent::~Continent()
{
#ifdef DEBUG
	std::cout << "[CONTINENTE] Destruindo... " << Territory::getName() << std::endl;
#endif // DEBUG

}

