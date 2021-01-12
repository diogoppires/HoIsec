#include "Event.h"
#include <iostream>

Event::Event(GameData* gD)
{
	this->gD = gD;
#ifdef DEBUG
	std::cout << "[EVENTOS] Construindo...\n";
#endif // DEBUG
}

Event::~Event()
{
#ifdef DEBUG
	std::cout << "[EVENTOS] Destruindo... \n";
#endif // DEBUG
}

GameData* Event::getGameData() const
{
	return gD;
}



