#include "World.h"

World::~World() {
	std::cout << "[WORLD] Destroying world" << std::endl;
}
std::string World::toString() { 
	std::ostringstream oss;
	for (Territory t : territories)
	{
		oss << t.toString();
	}
	return oss.str();
}

std::string World::getInfoTerritory(std::string name) {
	for(Territory t :territories)
	{
		if (t.getName() == name) {
			return t.toString();
		}
	}
	return "[ERRO] Não existe territorio com esse nome!\n";
}

std::vector<Territory> World::getTerritories() const {
	return territories;
}
void World::addTerritories(TerritoryTypes type, int num) {
	for (int i = 0; i < num; i++)
	{
		territories.push_back(Territory(type));
	}

}
void World::clearTerritories() {
	territories.clear();
}