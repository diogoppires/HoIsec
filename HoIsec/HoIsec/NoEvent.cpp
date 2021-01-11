#include "NoEvent.h"
#include "data.h"
//#include <iostream>
#include <sstream>

NoEvent::NoEvent(GameData* gD) : Event(gD)
{
	//std::cout << "[EVENTO - SEM EVENTO] Construindo...\n";
}

std::string NoEvent::applyEvent() const
{
	std::ostringstream final;
	final << "Evento: Sem Evento\n\n" << NO_EVENT;

	return final.str();
}

std::string NoEvent::toString() const
{
	return EVENT_NO;
}

NoEvent* NoEvent::clone() const
{
	return new NoEvent(*this);
}

NoEvent::~NoEvent()
{
	//std::cout << "[EVENTO - SEM EVENTO] Destruindo...\n";
}
