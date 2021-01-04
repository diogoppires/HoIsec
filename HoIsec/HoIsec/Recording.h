#pragma once
#ifndef RECORDING_H
#define	RECORDING_H
#include <string>
#include "GameData.h"

class Recording
{
private:
	std::string name;
	GameData* g;
public:
	Recording(std::string name, GameData *d);
	std::string getName() const;
	GameData* getGameData();
	~Recording();


	Recording(const Recording& rec) = delete;
	Recording& operator=(const Recording& rec) = delete;
};
#endif // !RECORDING_H



