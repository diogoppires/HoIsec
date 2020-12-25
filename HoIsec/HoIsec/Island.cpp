#include "Island.h"

Island::Island(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int counter) : Territory(type, resistance, prodCreation, goldCreation, ISLAND_WINPOINTS, counter)
{
	std::cout << "[ILHA] Construindo... " << Territory::getName() << std::endl;
}

std::string Island::getTerritoryType() const
{
	return ISLAND;
}

Island::~Island()
{
	std::cout << "[ILHA] Destruindo... " << Territory::getName() << std::endl;
}

