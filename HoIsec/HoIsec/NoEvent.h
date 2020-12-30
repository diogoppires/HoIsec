#pragma once
#ifndef NOEVENT_H
#define NOEVENT_H
#include "Event.h"

class NoEvent :
    public Event
{
private:
public:
    NoEvent(GameData* gD);
    std::string applyEvent() const override;
    std::string toString() const override;
    virtual ~NoEvent() override;
};
#endif // !NOEVENT_H