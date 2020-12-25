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
    std::string getTerritoryType() const override;
    ~InitTerritory();
};

#endif // !INITTERRITORY_H




