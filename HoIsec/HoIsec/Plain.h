#pragma once
#ifndef PLAIN_H
#define PLAIN_H
#include "Continent.h"

class Plain : 
	public Continent
{
private:
	static int counter;
public:
	Plain();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	void updateResources(int year, int turn) override;
	virtual ~Plain() override;
};
#endif // !PLAIN_H

