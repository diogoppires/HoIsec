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
    ~Invasion();
};

#endif // !INVASION_H
