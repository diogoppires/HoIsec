#include "Interface.h"

//Menus
void Interface::fillInitMenu(std::vector<std::string>& initMenu)
{
	initMenu.push_back(" -- Menu Principal --\n\n");
	initMenu.push_back("~~> carrega <nomeFicheiro>\n");
	initMenu.push_back("~~> cria <tipo> <n>\n\n");
	initMenu.push_back("~~> ativa <nome>\n");
	initMenu.push_back("~~> apaga <nome>\n\n");
	initMenu.push_back("~~> ajuda\n");
	initMenu.push_back("~~> sair\n");
}
void Interface::fillConquerMenu(std::vector<std::string>& conquerMenu)
{
	conquerMenu.push_back(" -- Comandos do Jogo - 1a Fase | Conquistar ou Passar -- \n\n");
	conquerMenu.push_back("~~> conquista<nome>\n");
	conquerMenu.push_back("~~> passa\n");
	conquerMenu.push_back("~~> lista <nome>\n");
	conquerMenu.push_back("~~> avanca\n\n");
	conquerMenu.push_back("~~> grava <nome>\n");
	conquerMenu.push_back("~~> ativa <nome>\n");
	conquerMenu.push_back("~~> apaga <nome>\n\n");
	conquerMenu.push_back("~~> [DEBUG]toma <qual> <nome>\n");
	conquerMenu.push_back("~~> [DEBUG]modifica <ouro|prod> <N>\n");
	conquerMenu.push_back("~~> [DEBUG]fevent <nome-evento>\n\n");
	conquerMenu.push_back("~~> ajuda\n");
	conquerMenu.push_back("~~> sair\n");
}
void Interface::fillExchangeMenu(std::vector<std::string>& exchangeMenu)
{
	exchangeMenu.push_back("Comandos do Jogo - 2a Fase | Hora dos Recursos\n\n");
	exchangeMenu.push_back("~~> maisour\n"); 
	exchangeMenu.push_back("~~> maisprod\n");
	exchangeMenu.push_back("~~> lista <nome>\n");
	exchangeMenu.push_back("~~> avanca\n\n");
	exchangeMenu.push_back("~~> grava <name>\n");
	exchangeMenu.push_back("~~> ativa <name>\n");
	exchangeMenu.push_back("~~> apaga <name>\n\n");
	exchangeMenu.push_back("~~> [DEBUG]toma <qual> <nome>\n");
	exchangeMenu.push_back("~~> [DEBUG]modifica <ouro|prod> <N>\n");
	exchangeMenu.push_back("~~> [DEBUG]fevent <nome-evento>\n\n");
	exchangeMenu.push_back("~~> ajuda\n");
	exchangeMenu.push_back("~~> sair\n");
}
void Interface::fillShopMenu(std::vector<std::string>& shopMenu)
{
	shopMenu.push_back("Comandos do Jogo - 3a Fase | Loja HOIsec\n\n");
	shopMenu.push_back("~~> maismilitar\n");
	shopMenu.push_back("~~> adquire <tipo>\n");
	shopMenu.push_back("~~> lista <nome>\n");
	shopMenu.push_back("~~> avanca\n\n");
	shopMenu.push_back("~~> grava <nome>\n");
	shopMenu.push_back("~~> ativa <nome>\n");
	shopMenu.push_back("~~> apaga <nome>\n\n");
	shopMenu.push_back("~~> [DEBUG]toma <qual> <nome>\n");
	shopMenu.push_back("~~> [DEBUG]modifica <ouro|prod> <N>\n");
	shopMenu.push_back("~~> [DEBUG]fevent <nome-evento>\n\n");
	shopMenu.push_back("~~> ajuda\n");
	shopMenu.push_back("~~> sair\n");
}


//This method will break a string up in order to save his arguments into a vector
//for a later usage.
void Interface::getWords(std::vector<std::string>& words, std::string& cmd, std::string msg)
{
	std::istringstream iss(msg);
	std::string word;
	iss >> cmd;
	while (iss >> word) {
		words.push_back(word);
	}
}

//Commands
void Interface::opLoad(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opCreate(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opConquer(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opPass(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opMoreGold(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opMoreProducts(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opMoreMilitary(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opObtainTech(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opList(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opSave(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opRecover(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opDelete(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opTake(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opModify(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}
void Interface::opForceEvent(std::string fullmsg)
{
	system("cls");
	std::cout << "NOT IMPLEMENTED YET\n";
}

//Methods to make the code looks smoother
std::string Interface::readString(const std::string msg)
{
	std::cout << msg;
	std::string s;
	getline(std::cin, s);
	return s;
}
std::string Interface::choose(const std::vector<std::string> menu)
{
	for (unsigned int i = 0; i < menu.size(); i++) {
		std::cout << menu[i];
	}

	std::string opt;
	while (opt.size() == 0) {
		opt = readString("\nopcao ~~> ");
	}
	return opt;
}

Interface::Interface()
{
	//DEBUGGING
	std::cout << "[Interface]: Creating" << std::endl;
}
void Interface::run()
{
	std::vector<std::string> menu;
	std::vector<std::string> words;
	fillInitMenu(menu);
	std::string fullstr;
	std::string cmd;
	do {
		//Need to be informed by GameData in order to show the correct menu.
		fullstr = choose(menu);
		getWords(words, fullstr, cmd);


	} while (cmd != "sair");

}
Interface::~Interface()
{
	std::cout << "[Interface]: Destroying..." << std::endl;
}
