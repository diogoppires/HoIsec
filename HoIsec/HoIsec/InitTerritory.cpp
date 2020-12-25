#include "InitTerritory.h"

InitTerritory::InitTerritory() : Territory(INITIAL_TERRITORY_NAME, INITIAL_RESISTANCE, INITIAL_PROD_CREATION, INITIAL_GOLD_CREATION, INITIAL_WINPOINTS)
{
	std::cout << "[TERRITORIO INICIAL] Construindo... " << Territory::getName() << std::endl;
}

std::string InitTerritory::getTerritoryType() const
{
	return INIT_TERRITORY;
}

InitTerritory::~InitTerritory()
{
	std::cout << "[TERRITORIO INICIAL] Destruindo... " << Territory::getName() << std::endl;
}


