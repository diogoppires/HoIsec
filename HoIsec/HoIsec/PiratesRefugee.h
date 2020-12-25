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
	~PiratesRefugee();
};
#endif // !PIRATESREFUGEE_H


