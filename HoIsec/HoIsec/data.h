#pragma once
#ifndef DATA_H
#define DATA_H
#include <string>
#include <cstdlib>
#include <time.h>

//MORE PROD/GOLD
#define COST_CHANGE 2

//MORE MILITAR FORCE
#define COST_ADD_MILITAR 1

//DEBUG COMMANDS
#define TAKE_TYPE_TERRITORY "terr"
#define TAKE_TYPE_TECH "tec"
#define MODIFY_TYPE_PRODUCTS "prod"
#define MODIFY_TYPE_GOLD "ouro"

//DEFAULT NAME
#define INITIAL_TERRITORY_NAME "TerritorioInicial"

//TERRITORIES CATEGORY
#define CONTINENT "continente"
#define ISLAND "island"
#define INIT_TERRITORY "territorio_inicial"

//WIN POINTS
#define INITIAL_WINPOINTS 0
#define CONTINENT_WINPOINTS 1
#define ISLAND_WINPOINTS 2

//RESISTANCE
#define INITIAL_RESISTANCE 2
#define PLAIN_RESISTANCE 5
#define MOUNTAIN_RESISTANCE 6
#define FORTRESS_RESISTANCE 8
#define MINE_RESISTANCE 5
#define DUNE_RESISTANCE 4
#define CASTLE_RESISTANCE 7
#define PIRATE_REFUGEE_RESISTANCE 9
#define FISHING_RESISTANCE 9

//GOLD PRODUCTION
#define INITIAL_GOLD_CREATION 1
#define PLAIN_FIRST_GOLD 1
#define MOUNTAIN_FIRST_GOLD 0
#define FORTRESS_FIRST_GOLD 0
#define MINE_FIRST_GOLD 1
#define MINE_SECOND_GOLD 2
#define DUNE_FIRST_GOLD 0
#define CASTLE_FIRST_GOLD 1
#define PIRATE_REFUGEE_FIRST_GOLD 1
#define FISHING_FIRST_GOLD 0

//PRODUCTS PRODUCTION
#define INITIAL_PROD_CREATION 1
#define PLAIN_FIRST_PRODS 1
#define PLAIN_SECOND_PRODS 2
#define MOUNTAIN_FIRST_PRODS 0
#define MOUNTAIN_SECOND_PRODS 1
#define FORTRESS_FIRST_PRODS 0
#define MINE_FIRST_PRODS 0
#define DUNE_FIRST_PRODS 1
#define CASTLE_FIRST_PRODS 3
#define CASTLE_SECOND_PRODS 0
#define PIRATE_REFUGEE_FIRST_PRODS 0
#define FISHING_FIRST_PRODS 2
#define FISHING_SECOND_PRODS 4

//PRICE TECHNOLOGY (GOLD)
#define	PRICE_TECH_DRONE 3
#define PRICE_TECH_MISSILES 4
#define PRICE_TECH_DEFENSES 4
#define PRICE_TECH_STOCKEXCHANGE 2
#define PRICE_TECH_CENTRALBANK 3

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



//EVENTS INFORMATION
#define ABANDONED_PRODUCT " TIPO: Produto\n Um produto abandonado foi encontrado que fornece ao armazem\n\t do seu imperio uma unidade de produtos."
#define ABANDONED_GOLD " TIPO: Ouro\n Foi encontrado ouro abandonado que fornece ao cofre\n\t do seu imperio uma unidade de ouro."
#define INVASION_FAILED " O imperio concorrente tentou conquistar um territorio do teu imperio\n\t mas os teus soldados estavam atentos e impediram esta invasao.\n O Territorio ainda te pertence."
#define INVASION_SUCCESS " O imperio concorrente venceu a batalha!\n O Territorio foi perdido."
#define DIPLOMATIC_ALLIANCE " Juntos somos mais fortes!\n Foi assinada uma alianca com um imperio e em consequencia disto\n\t foi oferecido uma unidade de forca militar."
#define NO_EVENT " ...zZzZzZzZzZz...\n\n Nao ocorreu nada!\n Podem dormir todos descansados (por enquanto...)."

//EVENTS DATA
#define ABANDONED_PRODUCT_QTY 1
#define ABANDONED_GOLD_QTY 1
#define INVASION_STRENGTH_FIRST_YEAR 2
#define INVASION_STRENGTH_SECOND_YEAR 3
#define DIPLOMATIC_ALLIANCE_QTY 1

//NUMBER OF EVENTS
#define N_EVENTS 4

//TO STRING EVENTS
#define EVENT_NONE "NENHUM"
#define EVENT_ABANDONED_RESOURCE "RECURSO ABANDONADO"
#define EVENT_DIPLOMATIC_ALLIANCE "ALIANCA DIPLOMATICA"
#define EVENT_INVASION "INVASAO"
#define EVENT_NO "SEM EVENTOS"

//FEVENT
#define FEVENT_RESOURCE "recurso"
#define FEVENT_INVASION "invasao"
#define FEVENT_ALLIANCE "alianca"
#define FEVENT_NONE "nada"

//TURN DETAILS
#define LIMIT_TURN 7
#define LIMIT_YEAR 2

//GAME POINTS
#define TECH_POINTS 1
#define ALL_TECH 5
#define EXTRA_SCIENTIFIC_BONUS 1
#define EXTRA_SUPREME_EMPEROR 3

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
	NONE,
	CONQUER,
	COLLECTION,
	SHOP,
	EVENTS,
	GAMEOVER
};

enum class Techs {
	DRONE,
	MISSILES,
	DEFENSES,
	CENTRALBANK,
	STOCKEXCHANGE,
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

	Techs StringToTechs(std::string type) {
		if (type == "drone") {
			return Techs::DRONE;
		}
		else if (type == "defesas") {
			return Techs::DEFENSES;
		}
		else if (type == "misseis") {
			return Techs::MISSILES;
		}
		else if (type == "banco") {
			return Techs::CENTRALBANK;
		}
		else if (type == "bolsa") {
			return Techs::STOCKEXCHANGE;
		}
		else
			return Techs::NONE;
	}
	int generateArmy() {
		srand((unsigned)time(0));
		return (rand() % 3) + 1;
	}

	int generateLuckFactor() {
		srand((unsigned)time(0));
		return (rand() % 6) + 1;
	}

	int generateNumber(int max) {
		srand((unsigned)time(0));
		return (rand() % max);
	}
};

#endif // !DATA_H
