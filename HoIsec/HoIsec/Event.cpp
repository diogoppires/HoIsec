#include "Event.h"
#include "GameData.h"
#include <string>


Event::Event(GameData* gD)
{
	this->gD = gD;
	std::cout << "[EVENTOS] Construindo...\n";
}

Event::~Event()
{
	std::cout << "[EVENTOS] Destruindo... \n";
}

GameData* Event::getGameData() const
{
	return gD;
}

