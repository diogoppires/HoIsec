#include "FishingSite.h"

FishingSite::FishingSite() : Island(TerritoryTypes::FISHINGSITE, FISHING_RESISTANCE, FISHING_INIT_PRODS, FISHING_INIT_GOLD, ++counter)
{
	std::cout << "[PESCARIA] Construindo... " << Territory::getName() << std::endl;
}

FishingSite::~FishingSite()
{
	std::cout << "[PESCARIA] Destruindo... " << Territory::getName() << std::endl;
}
