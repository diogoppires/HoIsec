#include "Invasion.h"
#include "GameData.h"
#include <iostream>
#include <string.h>

Invasion::Invasion(GameData* gD) : Event(gD)
{
	std::cout << "[EVENTO - INVASAO] Construindo...\n";
}

//SE TIVER TECNOLOGIA 'DEFESAS TERRITORIAIS' É ACRESCENTADO 1 NÍVEL DE RESISTENCIA AO TERRITORIO
//ESTA CONDIÇÃO NÃO FOI FEITA. FAZER DEPOIS DE FAZER AS TECNOLOGIAS.
std::string Invasion::applyEvent() const
{
	int invasionStrength;
	GameData* gD = Event::getGameData();
	if (gD->getYear() == 1) {
		gD->generateLuckyFactor();
		invasionStrength = INVASION_STRENGTH_FIRST_YEAR + gD->getLuckyFactor();;
	}
	else {
		Event::getGameData()->generateLuckyFactor();
		invasionStrength = INVASION_STRENGTH_SECOND_YEAR + gD->getLuckyFactor();
	}
	Territory* territoryAttacked = gD->getEmpire().getLastConquer();
	if (invasionStrength < territoryAttacked->getResistance()) {
		return INVASION_FAILED;
	}
	else {
		std::ostringstream oss;
		if (gD->getEmpire().getEmpireSize() > 1) {
			gD->getEmpire().deleteLastTerritory();
			oss << INVASION_SUCCESS << territoryAttacked->getName();
			return oss.str();
		}
		else {
			gD->gameLost();
			oss << INVASION_SUCCESS << territoryAttacked->getName() << "\nO jogo foi perdido!";
			return oss.str();
		}
	}
}

std::string Invasion::toString() const
{
	return EVENT_INVASION;
}

Invasion::~Invasion()
{
	std::cout << "[EVENTO - INVASAO] Destruindo...\n";
}