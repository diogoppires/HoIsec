#pragma once
#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include "Continent.h"

class Mountain : public Continent
{
private:
	static int counter;
	int turnConquer;
	int yearConquer;
public:
	Mountain();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	Mountain* clone() const override;
	void setInitValue() override;
	void updateResources(int year, int turn) override;
	virtual ~Mountain() override; 
	
};
#endif // !MOUNTAIN_H
