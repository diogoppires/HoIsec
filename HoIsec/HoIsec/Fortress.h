#pragma once
#ifndef FORTRESS_H
#define FORTRESS_H
#include "Continent.h"

class Fortress : 
	public Continent
{
private:
	static int counter;
public:
	Fortress();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	Territory* clone() const override;
	void updateResources(int year, int turn) override;
	virtual ~Fortress() override;
};
#endif // !FORTRESS_H