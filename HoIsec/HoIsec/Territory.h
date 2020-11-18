#pragma once
#ifndef TERRITORY_H
#define TERRITORY_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "data.h"

class Territory
{
	static int count;
	std::string name;
	int resistance;
	int prodCreation;
	int goldCreation;
	int winPoints;

public:
	Territory(TerritotyTypes type);

	~Territory();

	std::string toString();

	std::string getName() const;

	int getResistance() const;

	void setResistance(int resistance);

	int getProdCreation() const;

	void setProdCreation(int prodCreation);

	int getGoldCreation() const;

	void setGoldCreation(int goldCreation);

	int getWinPoints() const;

	void setWinPoints(int winPoints);

	std::string buildName(int value);

};


#endif // !TERRITORY_H