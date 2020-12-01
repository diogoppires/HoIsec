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
	bool centralBank;
public:
	//Constructor
	SafeBox();

	//Getter
	int getSafeBox() const;
	int getMaxSafeBox() const;

	void setCentralBankTrue();
	void setCentralBankFalse();

	bool addGold(int quant);
	bool subGold(int quant);

	//toString
	std::string toString() const;

	//Destructor
	~SafeBox();
};

#endif // !SAFEBOX_H
