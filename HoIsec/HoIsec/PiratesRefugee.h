#pragma once
#include "Island.h"

#ifndef PIRATESREFUGEE_H
#define PIRATESREFUGEE_H
class PiratesRefugee :
    public Island
{
private:
	static int counter;
public:
	PiratesRefugee();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	PiratesRefugee* clone() const override;
	void setInitValue() override;
	void updateResources(int year, int turn) override;
	virtual ~PiratesRefugee() override;
};
#endif // !PIRATESREFUGEE_H


