#pragma once
#ifndef CASTLE_H
#define CASTLE_H
#include "Continent.h"

class Castle : 
	public Continent
{
private:
	static int counter;
public:
	Castle();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	Territory* clone() const override;
	void updateResources(int year, int turn) override;
	virtual ~Castle() override;
};
#endif // !MOUNTAIN_H

