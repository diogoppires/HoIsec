#pragma once
#ifndef ISLAND_H
#define ISLAND_H
#include "Territory.h"

class Island :
    public Territory
{
public:
	Island(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int counter);
	std::string getTerritoryType() const override;
	~Island();
};

#endif // !ISLAND_H




