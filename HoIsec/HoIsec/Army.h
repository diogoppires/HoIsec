#pragma once
#ifndef ARMY_H
#define ARMY_H
#include <iostream>
#include <sstream>
#include <string>
#include "data.h"
class Army
{
private:
	int miliForce;
	bool miliDrone;
	bool missiles;
	bool territoryDef;

	int maxMiliForce;

public:
	Army(int miliForce);
	~Army();
	bool addMiliForce(int value);
	bool subMiliForce(int value);
	int getMiliForce() const;
	void setMiliDroneTrue();
	void setMiliDroneFalse();
	bool getMiliDrone() const;
	void setMisilesTrue();
	void setMissilesFalse();
	bool getMissiles() const;
	void setTerritoryDefTrue();
	void setTerritoryDefFalse();
	bool getTerritoryDef() const;
	int getMaxMiliForce() const;
};

#endif // !ARMY_H


