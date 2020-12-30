#include "NoEvent.h"
#include "data.h"
#include <iostream>

NoEvent::NoEvent(GameData* gD) : Event(gD)
{
	std::cout << "[EVENTO - SEM EVENTO] Construindo...\n";
}

std::string NoEvent::applyEvent() const
{
	return NO_EVENT;
}

std::string NoEvent::toString() const
{
	return EVENT_NO;
}

NoEvent::~NoEvent()
{
	std::cout << "[EVENTO - SEM EVENTO] Destruindo...\n";
}
