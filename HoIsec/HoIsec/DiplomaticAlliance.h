#pragma once
#ifndef DIPLOMATICALLIANCE_H
#define DIPLOMATICALLIANCE_H
#include "Event.h"

class DiplomaticAlliance :
    public Event
{
private:
public:
    DiplomaticAlliance(GameData* gD);
    std::string applyEvent() const override;
    std::string toString() const override;
    virtual ~DiplomaticAlliance() override;
};

#endif // !DIPLOMATICALLIANCE_H

