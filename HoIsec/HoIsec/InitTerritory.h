#pragma once
#ifndef INITTERRITORY_H
#define INITTERRITORY_H
#include "Territory.h"

class InitTerritory :
    public Territory
{
private:

public:
    InitTerritory();
    TerritoryTypes getTerritoryType() override;
    std::string toString() override;
    void updateResources(int year, int turn) override;
    virtual ~InitTerritory() override;
};

#endif // !INITTERRITORY_H




