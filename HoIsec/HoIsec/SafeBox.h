#pragma once
#ifndef SAFEBOX_H
#define SAFEBOX_H
#include <iostream>
#include <string>
#include <sstream>
#include "data.h"

class SafeBox
{
private:
	int gold;
	int maxGold;
public:
	//Constructor
	SafeBox();

	//Getter
	int getSafeBox() const;
	int getMaxSafeBox() const;

	//Setter
	bool addGold(int quant);
	bool subGold(int quant);

	void setMaxGold(int max);

	//toString
	std::string toString() const;

	//Destructor
	~SafeBox();
};

#endif // !SAFEBOX_H
