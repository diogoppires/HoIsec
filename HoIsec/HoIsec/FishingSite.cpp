#include "FishingSite.h"

int FishingSite::counter = 0;
FishingSite::FishingSite() : Island(TerritoryTypes::FISHINGSITE, FISHING_RESISTANCE, FISHING_INIT_PRODS, FISHING_INIT_GOLD, ++counter)
{
	std::cout << "[PESCARIA] Construindo... " << Territory::getName() << std::endl;
}

FishingSite::~FishingSite()
{
	std::cout << "[PESCARIA] Destruindo... " << Territory::getName() << std::endl;
}
