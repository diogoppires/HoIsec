#pragma once
#ifndef DATA_H
#define DATA_H
#include <string>
#include <cstdlib>
#include <time.h>

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
#define INITIAL_RESISTANCE 9
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
#define PLAIN_INIT_GOLD 1
#define MOUNTAIN_INIT_GOLD 0
#define FORTRESS_INIT_GOLD 0
#define MINE_INIT_GOLD 1
#define DUNE_INIT_GOLD 0
#define CASTLE_INIT_GOLD 1
#define PIRATE_REFUGEE_INIT_GOLD 1
#define FISHING_INIT_GOLD 0

//PRODUCTS PRODUCTION
#define INITIAL_PROD_CREATION 1
#define PLAIN_INIT_PRODS 1
#define MOUNTAIN_INIT_PRODS 1
#define FORTRESS_INIT_PRODS 0
#define MINE_INIT_PRODS 0
#define DUNE_INIT_PRODS 1
#define CASTLE_INIT_PRODS 3
#define PIRATE_REFUGEE_INIT_PRODS 0
#define FISHING_INIT_PRODS 2

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
#define ABANDONED_PRODUCT "Produto abandonado!\n Um produto abandonado foi encontrado e fornece ao armazem do seu império uma unidade de produtos. Caso já tenha sido atingido o valor máximo permitido, este recurso sera desperdicado!"
#define ABANDONED_GOLD "Ouro abandonado!\n Foi encontrado ouro abandonado e decidiu guarda-lo no seu cofre. Caso já tenha sido atingido o valor máximo permitido, este recurso sera desperdicado!"
#define INVASION_FAILED "Invasao! Um imperio concorrente tentou conquistar um territorio do seu imperio mas os seus soldados estavam atentos e impediram esta invasao. A invasao foi FALHADA."
#define INVASION_SUCCESS "Invasao! Um imperio concorrente conseguiu conquistar um territorio do seu imperio! Territorio perdido: "
#define DIPLOMATIC_ALLIANCE "Juntos somos mais fortes! Foi assinada uma aliança com um império e em consequência disto a sua força militar aumenta uma unidade. Caso já tenha sido atingido o valor máximo permitido, a sua forca militar nao sera incrementada!"
#define NO_EVENT "zZzZzZzZzZz... Nao ocorreu nada! Podem dormir todos descansados (por enquanto...)."

//EVENTS DATA
#define ABANDONED_PRODUCT_QTY 1
#define ABANDONED_GOLD_QTY 1
#define INVASION_STRENGTH_FIRST_YEAR 2
#define INVASION_STRENGTH_SECOND_YEAR 3
#define DIPLOMATIC_ALLIANCE_QTY 1

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
	EVENTS
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
};

#endif // !DATA_H
