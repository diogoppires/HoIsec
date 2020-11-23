#pragma once
#ifndef DATA_H
#define DATA_H
#include <string>

#define DEFAULT_RESISTANCE 5
#define DEFAULT_PRODCREATION 1
#define DEFAULT_GOLDCREATION 1
#define DEFAULT_WINPOINTS 1

//ARMY
#define MAX_MILIFORCE 3
#define MAX_MILIFORCE_WITH_DRONE 5

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

class ConvertEnum {
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
		else if (type == "refugiopirata") {
			return TerritoryTypes::PIRATEREFUGE;
		}
		else {
			return TerritoryTypes::NONE;
		}
	}

	std::string TerritoryTypesToString(TerritoryTypes type) {
		switch (type) {
		case TerritoryTypes::TERRITORY:		return "Territorio";
		case TerritoryTypes::INITIAL:		return "TerritorioInicial";
		case TerritoryTypes::PLAIN:			return "Planicie";
		case TerritoryTypes::DUNE:			return "Duna";
		case TerritoryTypes::CASTLE:		return "Castelo";
		case TerritoryTypes::FORTRESS:		return "Fortaleza";
		case TerritoryTypes::MOUNTAIN:		return "Montanha";
		case TerritoryTypes::MINE:			return "Mina";
		case TerritoryTypes::FISHINGSITE:	return "Pescaria";
		case TerritoryTypes::PIRATEREFUGE:	return "RefugioPiratas";

		default:							return " ";
		}
	}
};

#endif // !DATA_H
