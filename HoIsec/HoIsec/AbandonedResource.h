#pragma once
#ifndef ABANDONEDRESOURCE_H
#define ABANDONEDRESOURCE_H
#include "Event.h"

class AbandonedResource :
    public Event
{
private:
public:
    AbandonedResource(GameData* gD);
    std::string applyEvent() const override;
    std::string toString() const override;
    AbandonedResource* clone() const override;
    virtual ~AbandonedResource() override;
};
#endif // !ABANDONEDRESOURCE_H



