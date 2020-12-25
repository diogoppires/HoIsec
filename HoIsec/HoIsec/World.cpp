#include "World.h"


World::World()
{
	addTerritories(TerritoryTypes::TERRITORY, 1);
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
		territories.push_back(new Territory(type, DEFAULT_RESISTANCE, DEFAULT_PRODCREATION, DEFAULT_GOLDCREATION, DEFAULT_WINPOINTS));
	}
}
void World::clearTerritories() {
	territories.clear();
}
