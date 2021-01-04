#pragma once
#ifndef FISHINGSITE_H
#define FISHINGSITE_H
#include "Island.h"

class FishingSite :
    public Island
{
private:
	static int counter;
public:
	FishingSite();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	Territory* clone() const override;
	void setInitValue() override;
	void updateResources(int year, int turn) override;
	virtual ~FishingSite() override;
};
#endif // !FISHINGSITE_H




