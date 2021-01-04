#pragma once
#ifndef INVASION_H
#define INVASION_H
#include "Event.h"

class Invasion :
    public Event
{
private:
public:
    Invasion(GameData* gD);
    std::string applyEvent() const override;
    std::string toString() const override;
    Event* clone() const override;
    virtual ~Invasion() override;
};

#endif // !INVASION_H
