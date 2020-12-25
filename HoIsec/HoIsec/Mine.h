#pragma once
#ifndef MINE_H
#define MINE_H
#include "Continent.h"

class Mine : 
	public Continent
{
private:
	static int counter;
public:
	Mine();
	~Mine();
};
#endif // !MINE_H

