#include "World.h"
#include "InitTerritory.h"
#include "Castle.h"
#include "Dune.h"
#include "Fortress.h"
#include "Mine.h"
#include "Mountain.h"
#include "Plain.h"
#include "FishingSite.h"
#include "PiratesRefugee.h"

void World::TerritoryFactory(TerritoryTypes type)
{
	switch (type) {
	case TerritoryTypes::INITIAL:		territories.push_back(new InitTerritory);	break;
	case TerritoryTypes::PLAIN:			territories.push_back(new Plain);			break;
	case TerritoryTypes::DUNE:			territories.push_back(new Dune);			break;
	case TerritoryTypes::CASTLE:		territories.push_back(new Castle);			break;
	case TerritoryTypes::FORTRESS:		territories.push_back(new Fortress);		break;
	case TerritoryTypes::MOUNTAIN:		territories.push_back(new Mountain);		break;
	case TerritoryTypes::MINE:			territories.push_back(new Mine);			break;
	case TerritoryTypes::FISHINGSITE:	territories.push_back(new FishingSite);		break;	
	case TerritoryTypes::PIRATEREFUGE:	territories.push_back(new PiratesRefugee);	break;
	}
}

World::World()
{
	addTerritories(TerritoryTypes::INITIAL, 1);
	std::cout << "[WORLD] Construindo..." << std::endl;
}

World::~World() {
	std::cout << "[WORLD] Vou para dentro do vetor 'Territorios' destruir..." << std::endl;
	for (Territory* t : territories)
	{
		delete t;
	}
	std::cout << "[WORLD] Destruindo..." << std::endl;
}
std::string World::toString() { 
	std::ostringstream oss;
	for (Territory* t : territories)
	{
		oss << t->toString();
	}
	return oss.str();
}

std::string World::toStringConquerd() {
	std::ostringstream oss;
	for (Territory* t : territories)
	{
		if(t->isConquered())
			oss << t->toString();
	}
	return oss.str();
}

std::string World::toStringNotConquerd() {
	std::ostringstream oss;
	for (Territory* t : territories)
	{
		if (!t->isConquered())
			oss << t->toString();
	}
	return oss.str();
}
std::string World::getInfoTerritory(std::string name) {
	for(Territory* t :territories)
	{
		if (t->getName() == name) {
			return t->toString();
		}
	}
	return "[ERRO] Não existe territorio com esse nome!\n";
}

Territory* World::getSpecificTerritory(std::string name) const
{
	for (Territory* t : territories)
	{
		if (t->getName() == name) {
			return t;
		}
	}
	return nullptr;
}

std::vector<Territory*> World::getTerritories() const {
	return territories;
}

void World::addTerritories(TerritoryTypes type, int num) {
	for (int i = 0; i < num; i++) {
		TerritoryFactory(type);
	}
}
void World::clearTerritories() {
	territories.clear();
}
