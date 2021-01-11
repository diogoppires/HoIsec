#include "FishingSite.h"
//#include <iostream>
#include <sstream>

int FishingSite::counter = 0;
FishingSite::FishingSite() : Island(TerritoryTypes::FISHINGSITE, FISHING_RESISTANCE, FISHING_FIRST_GOLD, FISHING_FIRST_PRODS, ++counter)
{
	//std::cout << "[PESCARIA] Construindo... " << Territory::getName() << std::endl;
}

TerritoryTypes FishingSite::getTerritoryType()
{
	return TerritoryTypes::FISHINGSITE;
}

std::string FishingSite::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Pescaria'" << Island::toString();
	return oss.str();
}

FishingSite* FishingSite::clone() const
{
	return new FishingSite(*this);
}

void FishingSite::setInitValue()
{
	counter = 0;
}

void FishingSite::updateResources(int year, int turn)
{
	if (year == 1) {
		prodCreation = FISHING_FIRST_PRODS;
	}
	else if (year == 2) {
		prodCreation = FISHING_SECOND_PRODS;
	}
}

FishingSite::~FishingSite()
{
	//std::cout << "[PESCARIA] Destruindo... " << Territory::getName() << std::endl;
}
