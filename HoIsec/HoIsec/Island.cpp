#include "Island.h"

Island::Island(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int counter) : Territory(type, resistance, prodCreation, goldCreation, ISLAND_WINPOINTS, counter)
{
	std::cout << "[ILHA] Construindo... " << Territory::getName() << std::endl;
}

std::string Island::getTerritoryCategory() const
{
	return ISLAND;
}

std::string Island::toString()
{
	std::ostringstream oss;

	oss << "\tCATEGORIA = '" << getTerritoryCategory() << "'\n" << Territory::toString();
	return oss.str();
}

Island::~Island()
{
	std::cout << "[ILHA] Destruindo... " << Territory::getName() << std::endl;
}

