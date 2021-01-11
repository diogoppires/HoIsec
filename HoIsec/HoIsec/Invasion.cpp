#include "Invasion.h"
//#include <iostream>
#include <sstream>


Invasion::Invasion(GameData* gD) : Event(gD)
{
	//std::cout << "[EVENTO - INVASAO] Construindo...\n";
}

//SE TIVER TECNOLOGIA 'DEFESAS TERRITORIAIS' É ACRESCENTADO 1 NÍVEL DE RESISTENCIA AO TERRITORIO
//ESTA CONDIÇÃO NÃO FOI FEITA. FAZER DEPOIS DE FAZER AS TECNOLOGIAS.
std::string Invasion::applyEvent() const
{
	std::ostringstream final;
	int invasionStrength;

	final << "Evento: Invasao\n\n";

	GameData* gD = Event::getGameData();
	if (gD->getYear() == 1) {
		gD->generateLuckyFactor();
		final << " Fator Sorte nesta invasao: " << gD->getLuckyFactor() << std::endl;
		invasionStrength = INVASION_STRENGTH_FIRST_YEAR + gD->getLuckyFactor();
	}
	else {
		Event::getGameData()->generateLuckyFactor();
		invasionStrength = INVASION_STRENGTH_SECOND_YEAR + gD->getLuckyFactor();
	}
	final << " Forca de invasao: " << invasionStrength << std::endl;

	Territory* territoryAttacked = (*gD->getEmpire()).getLastConquer();
	final << " Territorio a ser atacado: " << territoryAttacked->getName() << std::endl;

	int resistance = (*gD->getEmpire()).useEffectDefenses(territoryAttacked);

	final << " Resistencia do territorio atacado: ";
	(*gD->getEmpire()).haveDefenses() ?
		final << resistance << " ( " << resistance - 1 << " + Com Defesas Territoriais (1) )\n" :
		final << resistance << " -> Sem Defesas Territoriais\n";

	std::ostringstream oss;
	if (invasionStrength < resistance) {
		oss << final.str() << std::endl << INVASION_FAILED;
	}
	else {
		if ((*gD->getEmpire()).getEmpireSize() > 1) {
			(*gD->getEmpire()).deleteLastTerritory();
			(*gD->getEmpire()).updateEmpire();
			oss << final.str() << std::endl << INVASION_SUCCESS;	
		}
		else {
			gD->gameLost();
			oss << final.str() << std::endl << INVASION_SUCCESS  <<
				"\n\nParece que perdeste o teu unico territorio!\n" << 
				"Perdeste o jogo\n";
		}
	}
	return oss.str();
}

std::string Invasion::toString() const
{
	return EVENT_INVASION;
}

Invasion* Invasion::clone() const
{
	return new Invasion(*this);
}

Invasion::~Invasion()
{
	//std::cout << "[EVENTO - INVASAO] Destruindo...\n";
}