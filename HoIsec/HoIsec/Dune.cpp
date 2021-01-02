#include "Dune.h"


int Dune::counter = 0;
Dune::Dune() : Continent(TerritoryTypes::DUNE, DUNE_RESISTANCE, DUNE_FIRST_PRODS, DUNE_FIRST_GOLD, ++counter)
{
	std::cout << "[DUNA] Construindo... " << Territory::getName() << std::endl;
}
TerritoryTypes Dune::getTerritoryType()
{
	return TerritoryTypes::DUNE;
}

std::string Dune::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Duna'" << Continent::toString();
	return oss.str();
}
void Dune::updateResources(int year, int turn)
{
}
Dune::~Dune()
{
	std::cout << "[DUNA] Destruindo... " << Territory::getName() << std::endl;
}
