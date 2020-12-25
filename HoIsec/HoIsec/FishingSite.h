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
	~FishingSite();
};
#endif // !FISHINGSITE_H




