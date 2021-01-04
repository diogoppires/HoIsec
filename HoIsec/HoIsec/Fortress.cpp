#include "Fortress.h"

int Fortress::counter = 0;
Fortress::Fortress() : Continent(TerritoryTypes::FORTRESS, FORTRESS_RESISTANCE, FORTRESS_FIRST_PRODS, FORTRESS_FIRST_GOLD, ++counter)
{
	std::cout << "[FORTALEZA] Construindo... " << Territory::getName() << std::endl;
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
Territory* Fortress::clone() const
{
	return new Fortress(*this);
}
void Fortress::updateResources(int year, int turn)
{
}
Fortress::~Fortress()
{
	std::cout << "[FORTALEZA] Destruindo... " << Territory::getName() << std::endl;
}
