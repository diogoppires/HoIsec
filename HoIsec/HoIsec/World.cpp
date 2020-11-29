#include "World.h"


World::World()
{
	addTerritories(TerritoryTypes::TERRITORY, 1);
}

World::~World() {
	for (Territory* t : territories)
	{
		delete t;
		std::cout << "[WORLD] Estou dentro vetor 'Territorios' a destruir" << std::endl;
	}
	std::cout << "[WORLD] Destroying world" << std::endl;
}
std::string World::toString() { 
	std::ostringstream oss;
	for (Territory* t : territories)
	{
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

std::vector<Territory*> World::getTerritories() const {
	return territories;
}
Territory* World::getInitialTerritory() const
{
	for (Territory* t : territories)
	{
		if (t->getName() == INITIALTERRITORY_NAME) {
			return t;
		}
	}
	return nullptr;
}
void World::addTerritories(TerritoryTypes type, int num) {
	for (int i = 0; i < num; i++) {
		territories.push_back(new Territory(type));
	}
}
void World::clearTerritories() {
	territories.clear();
}
