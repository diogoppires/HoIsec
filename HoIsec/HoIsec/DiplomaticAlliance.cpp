#include "DiplomaticAlliance.h"
#include "GameData.h"

DiplomaticAlliance::DiplomaticAlliance(GameData* gD) : Event(gD)
{
    std::cout << "[EVENTO - ALIANCA DIPLOMATICA] Construindo...\n";
}

std::string DiplomaticAlliance::applyEvent() const
{
    GameData* gD = Event::getGameData();
    gD->getEmpire().increaseArmy(DIPLOMATIC_ALLIANCE_QTY);
    return DIPLOMATIC_ALLIANCE;
}

std::string DiplomaticAlliance::toString() const
{
    return EVENT_DIPLOMATIC_ALLIANCE;
}

DiplomaticAlliance::~DiplomaticAlliance()
{
    std::cout << "[EVENTO - ALIANCA DIPLOMATICA] Destruindo...\n";
}
