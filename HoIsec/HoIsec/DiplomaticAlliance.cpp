#include "DiplomaticAlliance.h"
#include <iostream>
#include <sstream>

DiplomaticAlliance::DiplomaticAlliance(GameData* gD) : Event(gD)
{
    std::cout << "[EVENTO - ALIANCA DIPLOMATICA] Construindo...\n";
}

std::string DiplomaticAlliance::applyEvent() const
{
    std::ostringstream final;
    final << "Evento: Alianca Diplomatica\n\n";

    if ((*getGameData()->getEmpire()).getMiliForce() < (*getGameData()->getEmpire()).getMaxMiliForce()) {
        (*getGameData()->getEmpire()).increaseArmy(DIPLOMATIC_ALLIANCE_QTY);
        final << DIPLOMATIC_ALLIANCE << "\n\n A forca militar do imperio aumentou 1 unidade.\n";
    }
    else {
        final << DIPLOMATIC_ALLIANCE << "\n\n A forca militar encontra-se no maximo.  \n";
    }
    
    return final.str();
}

std::string DiplomaticAlliance::toString() const
{
    return EVENT_DIPLOMATIC_ALLIANCE;
}

Event* DiplomaticAlliance::clone() const
{
    return new DiplomaticAlliance(*this);
}

DiplomaticAlliance::~DiplomaticAlliance()
{
    std::cout << "[EVENTO - ALIANCA DIPLOMATICA] Destruindo...\n";
}
