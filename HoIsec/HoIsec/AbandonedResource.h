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
    ~AbandonedResource();
};

#endif // !ABANDONEDRESOURCE_H



