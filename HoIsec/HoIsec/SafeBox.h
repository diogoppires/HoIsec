#pragma once
#ifndef SAFEBOX_H
#define SAFEBOX_H
#include <iostream>
#include <string>
#include <sstream>

class SafeBox
{
private:
	int gold;
public:
	//Constructor
	SafeBox();

	//Getter
	int getSafeBox() const;

	bool addGold(int quant);
	bool subGold(int quant);

	//toString
	std::string toString() const;

	//Destructor
	~SafeBox();
};

#endif // !SAFEBOX_H
