#include "Fortress.h"
#include <iostream>
#include <sstream>

int Fortress::counter = 0;
Fortress::Fortress() : Continent(TerritoryTypes::FORTRESS, FORTRESS_RESISTANCE, FORTRESS_FIRST_PRODS, FORTRESS_FIRST_GOLD, ++counter)
{
#ifdef DEBUG
	std::cout << "[FORTALEZA] Construindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}
TerritoryTypes Fortress::getTerritoryType()
{
	return TerritoryTypes::FORTRESS;
}

std::string Fortress::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Fortaleza'" << Continent::toString();
	return oss.str();
}
Fortress* Fortress::clone() const
{
	return new Fortress(*this);
}
void Fortress::setInitValue()
{
	counter = 0;
}
void Fortress::updateResources(int year, int turn)
{
}
Fortress::~Fortress()
{
#ifdef DEBUG
	std::cout << "[FORTALEZA] Destruindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}
