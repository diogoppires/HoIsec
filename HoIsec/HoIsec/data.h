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


enum TerritotyTypes {
	TERRITORY,
	INITIAL,
	PLAIN,
	DUNE,
	CASTLE,
	FORTRESS,
	MOUNTAIN,
	MINE,
	FISHINGSITE,
	PIRATEREFUGE
};

enum Phases {
	CONQUER,
	COLLECTION,
	SHOP,
	EVENTS,
	NONE
};

std::string TerritotyTypesToString(TerritotyTypes type) {

	switch (type) {
	case TERRITORY: return "Territory";
	case INITIAL: return "InitialTerritory";
	case PLAIN: return "Plain";
	case DUNE: return "Dune";
	case CASTLE: return "Castle";
	case FORTRESS:return "Fortress";
	case MOUNTAIN:return "Mountain";
	case MINE:return "Mine";
	case FISHINGSITE:return "FishingSite";
	case PIRATEREFUGE:return "PirateRefuge";
	default: return "";
	}
}

#endif // !DATA_H
