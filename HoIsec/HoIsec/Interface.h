#pragma once
#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "GameData.h"


class Interface 
{
private:
	GameData* gD;

	//Menus
	void fillInitMenu(std::vector<std::string>& initMenu);
	void fillConquerMenu(std::vector<std::string>& conquerMenu);
	void fillExchangeMenu(std::vector<std::string>& exchangeMenu);
	void fillShopMenu(std::vector<std::string>& shopMenu);
	void getWords(std::vector<std::string>& words, std::string& cmd, std::string msg);

	//Commands
	void opLoad(std::string fullmsg);
	void opCreate(std::string fullmsg,int quant);
	void opConquer(std::string fullmsg);
	void opPass(std::string fullmsg);
	void opMoreGold(std::string fullmsg);
	void opMoreProducts(std::string fullmsg);
	void opMoreMilitary(std::string fullmsg);
	void opObtainTech(std::string fullmsg);
	void opList(std::string fullmsg);
	void opList();
	void opSave(std::string fullmsg);
	void opRecover(std::string fullmsg);
	void opDelete(std::string fullmsg);
	void opTake(std::string fullmsg);
	void opModify(std::string fullmsg);
	void opForceEvent(std::string fullmsg);

	std::string readString(const std::string msg);
	std::string choose(const std::vector<std::string> menu);
public:
	//Constructor
	Interface(GameData* gD);
	void run();
	//Destructor
	~Interface();
};


#endif // !INTERFACE_H

