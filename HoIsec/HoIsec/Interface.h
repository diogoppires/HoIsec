#pragma once
#ifndef INTERFACE_H
#define INTERFACE_H
#include <vector>
#include <string>
#include "GameData.h"
#include "Recording.h"

class Interface 
{
private:
	GameData* gD;
	std::vector<Recording*> recordings;

	//Menus
	void fillInitMenu(std::vector<std::string>& initMenu);
	void fillConquerMenu(std::vector<std::string>& conquerMenu);
	void fillExchangeMenu(std::vector<std::string>& exchangeMenu);
	void fillShopMenu(std::vector<std::string>& shopMenu);
	void fillEventMenu(std::vector<std::string>& shopMenu);
	//void fillFirstMenu(std::vector<std::string>& firstMenu);
	void fillInitHelpMenu(std::vector<std::string>& words);
	void fillConquerHelpMenu(std::vector<std::string>& words);
	void fillExchangeHelpMenu(std::vector<std::string>& words);
	void fillShopHelpMenu(std::vector<std::string>& words);
	void fillEventHelpMenu(std::vector<std::string>& words);
	void fillDefaultHelpMenu(std::vector<std::string>& words);
	void getWords(std::vector<std::string>& words, std::string& cmd, std::string msg);

	//Commands
	void opLoad(std::string fullmsg);
	void opCreate(std::string fullmsg,std::string value);
	void opGameInit();
	void opConquer(std::string fullmsg);
	void opPass();
	void opAdvance();
	void opMoreGold();
	void opMoreProducts();
	void opMoreMilitary();
	void opObtainTech(std::string fullmsg);
	void opList(std::string fullmsg);
	void opList();
	void opSave(std::string name);
	void opRecover(std::string name);
	void opDelete(std::string name);
	void opTake(std::string type, std::string name);
	void opModify(std::string type, std::string value);
	void opForceEvent(std::string fullmsg);
	void opHelp();
	void opInfo(const std::string type);
	void opLastEvent();


	std::string readString(const std::string msg);
	std::string choose(const std::vector<std::string> menu);
	void pickMenu(std::vector<std::string>& menu);
	void pickHelpMenu();
	void showTechInfo();
	void showEventInfo();
	void drawEvent();
	void initMenu(std::string cmd, std::vector<std::string> words);
	void conquerMenu(std::string cmd, std::vector<std::string> words);
	void exchangeMenu(std::string cmd, std::vector<std::string> words);
	void shopMenu(std::string cmd, std::vector<std::string> words);
	void eventMenu(std::string cmd, std::vector<std::string> words);
	void gameOver();

public:
	//Constructor
	Interface(GameData* gD);
	void run();
	//Destructor
	~Interface();

	Interface(const Interface& rec) = delete;
	Interface& operator=(const Interface& rec) = delete;
};


#endif // !INTERFACE_H

