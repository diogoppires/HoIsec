#pragma once
#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include "Continent.h"

class Mountain : public Continent
{
private:
	static int counter;
public:
	Mountain();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	~Mountain();
};
#endif // !MOUNTAIN_H
