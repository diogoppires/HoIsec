#include "Recording.h"

Recording::Recording(std::string name, GameData* d): name(name),g(d)
{
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
}
