#include "Interface.h"

//Menus
void Interface::fillInitMenu(std::vector<std::string>& initMenu)
{
	initMenu.push_back("Game Commands - Main Menu\n\n");
	initMenu.push_back("~~> load <fileName>\n");
	initMenu.push_back("~~> create <type> <number>\n\n");
	initMenu.push_back("~~> activate <name>\n");
	initMenu.push_back("~~> delete <name>\n\n");
	initMenu.push_back("~~> help\n");
	initMenu.push_back("~~> exit\n");
}
void Interface::fillConquerMenu(std::vector<std::string>& conquerMenu)
{
	conquerMenu.push_back("Game Commands - 1st Phase | Conquer or Pass\n\n");
	conquerMenu.push_back("~~> conquer<name>\n");
	conquerMenu.push_back("~~> pass\n");
	conquerMenu.push_back("~~> list <name>\n\n");
	conquerMenu.push_back("~~> save <name>\n");
	conquerMenu.push_back("~~> activate <name>\n");
	conquerMenu.push_back("~~> delete <name>\n\n");
	conquerMenu.push_back("~~> [DEBUG]take <which one> <name>\n");
	conquerMenu.push_back("~~> [DEBUG]modify <gold|products> <N>\n");
	conquerMenu.push_back("~~> [DEBUG]fevent <event-name>\n\n");
	conquerMenu.push_back("~~> help\n");
	conquerMenu.push_back("~~> exit\n");
}
void Interface::fillExchangeMenu(std::vector<std::string>& exchangeMenu)
{
	exchangeMenu.push_back("Game Commands - 2nd Phase | Resources Time\n\n");
	exchangeMenu.push_back("~~> moregold\n"); 
	exchangeMenu.push_back("~~> moreprod\n");
	exchangeMenu.push_back("~~> list <name>\n");
	exchangeMenu.push_back("~~> nextphase\n\n");
	exchangeMenu.push_back("~~> save <name>\n");
	exchangeMenu.push_back("~~> activate <name>\n");
	exchangeMenu.push_back("~~> delete <name>\n\n");
	exchangeMenu.push_back("~~> [DEBUG]take <which one> <name>\n");
	exchangeMenu.push_back("~~> [DEBUG]modify <gold|products> <N>\n");
	exchangeMenu.push_back("~~> [DEBUG]fevent <event-name>\n\n");
	exchangeMenu.push_back("~~> help\n");
	exchangeMenu.push_back("~~> exit\n");
}
void Interface::fillShopMenu(std::vector<std::string>& shopMenu)
{
	shopMenu.push_back("Game Commands - 3rd Phase | Shopping\n\n");
	shopMenu.push_back("~~> moremilitary\n");
	shopMenu.push_back("~~> obtain <type>\n");
	shopMenu.push_back("~~> list <name>\n");
	shopMenu.push_back("~~> nextphase\n\n");
	shopMenu.push_back("~~> save <name>\n");
	shopMenu.push_back("~~> activate <name>\n");
	shopMenu.push_back("~~> delete <name>\n\n");
	shopMenu.push_back("~~> [DEBUG]take <which one> <name>\n");
	shopMenu.push_back("~~> [DEBUG]modify <gold|products> <N>\n");
	shopMenu.push_back("~~> [DEBUG]fevent <event-name>\n\n");
	shopMenu.push_back("~~> help\n");
	shopMenu.push_back("~~> exit\n");
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
	std::cin >> s;
	return s;
}
std::string Interface::choose(const std::vector<std::string> menu)
{
	for (unsigned int i = 0; i < menu.size(); i++) {
		std::cout << menu[i];
	}

	std::string opt;
	while (opt.size() == 0) {
		opt = readString("\noption ~~> ");
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
	fillInitMenu(menu);
	std::string cmd;
	do {
		//Need to be informed by GameData in order to show the correct menu.
		cmd = choose(menu);

	} while (cmd != "exit");

}
Interface::~Interface()
{
	std::cout << "[Interface]: Destroying..." << std::endl;
}
