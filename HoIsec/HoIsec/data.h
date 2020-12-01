#pragma once
#ifndef DATA_H
#define DATA_H
#include <string>
#include <cstdlib>
#include <time.h>

#define DEFAULT_RESISTANCE 5
#define DEFAULT_PRODCREATION 1
#define DEFAULT_GOLDCREATION 1
#define DEFAULT_WINPOINTS 1

#define INITIALTERRITORY_NAME "territorio1"

//ARMY
#define MAX_MILIFORCE 3
#define MAX_MILIFORCE_WITH_DRONE 5
#define MILIFORCE_LOST 1

//STORAGE
#define MAX_STORAGE 3
#define MAX_STORAGE_WITH_CENTRALBANK 5

//SAFEBOX
#define MAX_SAFEBOX 3
#define MAX_SAFEBOX_WITH_CENTRALBANK 5

enum class TerritoryTypes {
	TERRITORY,
	INITIAL,
	PLAIN,
	DUNE,
	CASTLE,
	FORTRESS,
	MOUNTAIN,
	MINE,
	FISHINGSITE,
	PIRATEREFUGE,
	NONE
};

enum class Phases {
	CONQUER,
	COLLECTION,
	SHOP,
	EVENTS,
	NONE
};

class Utils {
public:
	TerritoryTypes StringToTerritoryTypes(const std::string type) {
		if (type == "territorio") {
			return TerritoryTypes::TERRITORY;
		}
		else if (type == "territorioinicial") {
			return TerritoryTypes::INITIAL;
		}
		else if (type == "planicie") {
			return TerritoryTypes::PLAIN;
		}
		else if (type == "duna") {
			return TerritoryTypes::DUNE;
		}
		else if (type == "castelo") {
			return TerritoryTypes::CASTLE;
		}
		else if (type == "fortaleza") {
			return TerritoryTypes::FORTRESS;
		}
		else if (type == "montanha") {
			return TerritoryTypes::MOUNTAIN;
		}
		else if (type == "mina") {
			return TerritoryTypes::MINE;
		}
		else if (type == "pescaria") {
			return TerritoryTypes::FISHINGSITE;
		}
		else if (type == "refugio_pirata") {
			return TerritoryTypes::PIRATEREFUGE;
		}
		else {
			return TerritoryTypes::NONE;
		}
	}

	std::string TerritoryTypesToString(TerritoryTypes type) {
		switch (type) {
		case TerritoryTypes::TERRITORY:		return "territorio";
		case TerritoryTypes::INITIAL:		return "territorioinicial";
		case TerritoryTypes::PLAIN:			return "planicie";
		case TerritoryTypes::DUNE:			return "duna";
		case TerritoryTypes::CASTLE:		return "castelo";
		case TerritoryTypes::FORTRESS:		return "fortaleza";
		case TerritoryTypes::MOUNTAIN:		return "montanha";
		case TerritoryTypes::MINE:			return "mina";
		case TerritoryTypes::FISHINGSITE:	return "pescaria";
		case TerritoryTypes::PIRATEREFUGE:	return "refugio_piratas";

		default:							return " ";
		}
	}

	int generateArmy() {
		srand((unsigned)time(0));
		return (rand() % 3) + 1;
	}

	int generateLuckFactor() {
		srand((unsigned)time(0));
		return (rand() % 6) + 1;
	}
};

#endif // !DATA_H
