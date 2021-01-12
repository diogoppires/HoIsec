#include "Recording.h"
#include <iostream>

Recording::Recording(std::string name, GameData* d): name(name),g(d)
{
#ifdef DEBUG
	std::cout << "[Recording] Construindo...\n";
#endif // DEBUG
}

std::string Recording::getName() const
{
	return name;
}

GameData* Recording::getGameData()
{
	return g;
}

Recording::~Recording()
{
	delete g;
#ifdef DEBUG
	std::cout << "[Recording] Destruindo...\n";
#endif // DEBUG
}
