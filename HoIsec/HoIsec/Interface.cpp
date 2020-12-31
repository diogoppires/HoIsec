#include "Interface.h"
#include <limits>


//Menus
void Interface::fillInitMenu(std::vector<std::string>& initMenu)
{
	initMenu.push_back("\n\n-- Menu Principal --\n\n");
	initMenu.push_back(" ~~> carrega <nomeFicheiro>\n");
	initMenu.push_back(" ~~> cria <tipo> <n>\n");
	initMenu.push_back(" ~~> iniciar\n\n");
	initMenu.push_back(" ~~> ativa <nome>\n");
	initMenu.push_back(" ~~> apaga <nome>\n\n");
	initMenu.push_back(" ~~> ajuda\n");
	initMenu.push_back(" ~~> sair\n");
}
void Interface::fillConquerMenu(std::vector<std::string>& conquerMenu)
{
	conquerMenu.push_back("\n - Comandos do Jogo - 1a Fase | Conquistar ou Passar -- \n\n");
	conquerMenu.push_back(" ~~> conquista<nome>\n");
	conquerMenu.push_back(" ~~> passa\n");
	conquerMenu.push_back(" ~~> avanca\n\n");
	conquerMenu.push_back(" ~~> lista <nome>\n\n");
	conquerMenu.push_back(" ~~> grava <nome>\n");
	conquerMenu.push_back(" ~~> ativa <nome>\n");
	conquerMenu.push_back(" ~~> apaga <nome>\n\n");
	conquerMenu.push_back(" [DEBUG]\n");
	conquerMenu.push_back(" ~~> toma <qual> <nome>\n");
	conquerMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	conquerMenu.push_back(" ~~> fevento <nome-evento>\n");
	conquerMenu.push_back(" ---------\n\n");
	conquerMenu.push_back(" ~~> ajuda\n");
	conquerMenu.push_back(" ~~> sair\n");
}
void Interface::fillExchangeMenu(std::vector<std::string>& exchangeMenu)
{
	exchangeMenu.push_back("\n - Comandos do Jogo - 2a Fase | Hora dos Recursos\n\n");
	exchangeMenu.push_back(" ~~> maisouro\n"); 
	exchangeMenu.push_back(" ~~> maisprod\n");
	exchangeMenu.push_back(" ~~> lista <nome>\n");
	exchangeMenu.push_back(" ~~> avanca\n\n");
	exchangeMenu.push_back(" ~~> grava <name>\n");
	exchangeMenu.push_back(" ~~> ativa <name>\n");
	exchangeMenu.push_back(" ~~> apaga <name>\n\n");
	exchangeMenu.push_back(" [DEBUG]\n");
	exchangeMenu.push_back(" ~~> toma <qual> <nome>\n");
	exchangeMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	exchangeMenu.push_back(" ~~> fevento <nome-evento>\n");
	exchangeMenu.push_back(" ---------\n\n");
	exchangeMenu.push_back(" ~~> ajuda\n");
	exchangeMenu.push_back(" ~~> sair\n");
}
void Interface::fillShopMenu(std::vector<std::string>& shopMenu)
{
	shopMenu.push_back("\n - Comandos do Jogo - 3a Fase | Loja HoIsec\n\n");
	shopMenu.push_back(" ~~> maismilitar\n");
	shopMenu.push_back(" ~~> adquire <tipo>\n");
	shopMenu.push_back(" ~~> lista <nome>\n");
	shopMenu.push_back(" ~~> avanca\n\n");
	shopMenu.push_back(" ~~> grava <nome>\n");
	shopMenu.push_back(" ~~> ativa <nome>\n");
	shopMenu.push_back(" ~~> apaga <nome>\n\n");
	shopMenu.push_back(" [DEBUG]\n");
	shopMenu.push_back(" ~~> toma <qual> <nome>\n");
	shopMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	shopMenu.push_back(" ~~> fevento <nome-evento>\n");
	shopMenu.push_back(" ---------\n\n");
	shopMenu.push_back(" ~~> ajuda\n");
	shopMenu.push_back(" ~~> sair\n");
}
void Interface::fillEventMenu(std::vector<std::string>& eventMenu)
{
	std::ostringstream oss;
	oss << "\n EVENTO: " << gD->getEventMsg() << "\n\n";
	eventMenu.push_back(oss.str());
	eventMenu.push_back("\n - Comandos do Jogo - 4a Fase | Eventos\n\n");
	eventMenu.push_back(" ~~> lista <nome>\n");
	eventMenu.push_back(" ~~> avanca\n\n");
	eventMenu.push_back(" ~~> grava <nome>\n");
	eventMenu.push_back(" ~~> ativa <nome>\n");
	eventMenu.push_back(" ~~> apaga <nome>\n\n");
	eventMenu.push_back(" [DEBUG]\n");
	eventMenu.push_back(" ~~> toma <qual> <nome>\n");
	eventMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	eventMenu.push_back(" ~~> fevento <nome-evento>\n");
	eventMenu.push_back(" ---------\n\n");
	eventMenu.push_back(" ~~> ajuda\n");
	eventMenu.push_back(" ~~> sair\n");
}
void Interface::fillFirstMenu(std::vector<std::string>& firstMenu) {
	firstMenu.push_back("\n - Comandos do Jogo -\n\n");
	firstMenu.push_back(" ~~> cria <tipo> <n>\n");
	firstMenu.push_back(" ~~> carrega <nomeFicheiro>\n");
	firstMenu.push_back(" ~~> conquista <nome>\n");
	firstMenu.push_back(" ~~> lista <nome>\n");
	firstMenu.push_back(" ~~> sair\n\n");
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
	
	if (gD->loadTerritories(fullmsg)) {
		std::cout << "[HoIsec] Territorios adicionados com sucesso...\n";
	}
	else {
		std::cout << "[HoIsec] Erro ao carregar os territorios...\n";
	}
}
void Interface::opCreate(std::string fullmsg, std::string value)
{
	system("cls");	
	switch(gD->createTerritories(fullmsg,value)) {
	case 1:
		std::cout << "[HoIsec] Territorios adicionados com sucesso.\n";
		break;
	case 0:
		std::cout << "[HoIsec] Valor para a quantidade de territorios invalido.\n";
		break;
	case -1:
		std::cout << "[HoIsec] O territorio especificado e invalido.\n";
		break;
	}
}
void Interface::opGameInit()
{
	system("cls");
	if (gD->initializeGame()) {
		std::cout << "[HoIsec] Estamos a preparar o seu jogo...\n";
	}
	else {
		std::cout << "[HoIsec] Ocorreu um erro a inicializar o jogo! Verifique se adicionou algum territorio.\n";
	}

}
void Interface::opConquer(std::string fullmsg)
{
	system("cls");
	switch (gD->conquerTerritories(fullmsg)) {
	case -5:
		std::cout << "[HoIsec] Ja foi feito um ataque neste turno.\n";
		break;
	case -4:
		std::cout << "[HoIsec] E preciso a tecnologia 'Misseis Teleguiados' para atacar uma ilha.\n";
		break;
	case -3:
		std::cout << "[HoIsec] E preciso mais que 5 territorios no imperio para atacar uma ilha.\n";
		break;
	case -2:
		std::cout << "[HoIsec] Nome de territorio invalido...\n";
		break;
	case -1: 
		std::cout << "[HoIsec] O " << fullmsg << " ja pertence ao teu imperio!\n";
		break;
	case 0: 
		std::cout << "[HoIsec] A batalha foi perdida! Perdeu forca militar.\n";
		break;
	case 1:
		std::cout << "[HoIsec] A batalha foi vencida! Agora o " << fullmsg << "\nfaz parte do seu imperio!\n";
		break;
	}
}
void Interface::opPass()
{
	system("cls");
	gD->stayPassive();
}
void Interface::opAdvance()
{
	gD->advance();
}
void Interface::opMoreGold()
{
	system("cls");
	switch (gD->moreGold()) {
	case 1:
		std::cout << "[HoIsec] Foi adicionada uma unidade de ouro por duas de prdutos.\n";
		break;
	case 0:
		std::cout << "[HoIsec] Quantidade de produtos insuficiente, nada foi feito.\n";
		break;
	case -1:
		std::cout << "[HoIsec] Nao e possivel adicionar mais ouro, nada foi feito.\n";
		break;
	}
}
void Interface::opMoreProducts()
{
	system("cls");
	switch (gD->moreProd()) {
	case 1:
		std::cout << "[HoIsec] Foi adicionada uma unidade de produtos por duas de ouro.\n";
		break;
	case 0:
		std::cout << "[HoIsec] Quantidade de ouro insuficiente, nada foi feito.\n";
		break;
	case -1:
		std::cout << "[HoIsec] Nao e possivel adicionar mais produtos, nada foi feito.\n";
		break;
	}
}
void Interface::opMoreMilitary()
{
	system("cls");
	switch (gD->moreMilitary()) {
	case 1:
		std::cout << "[HoIsec] Foi adicionado um ponto de forca militar.\n";
		break;
	case 0:
		std::cout << "[HoIsec] Quantidade de ouro ou produtos insuficiente, nada foi feito.\n";
		break;
	case -1:
		std::cout << "[HoIsec] A forca militar ja esta no maximo, nada foi feito.\n";
		break;
	}
}
void Interface::opObtainTech(std::string fullmsg)
{
	system("cls");
	
	switch (gD->buyTechnology(fullmsg))
	{
	case 1:
		std::cout << "[HoIsec] Tecnologia '" << fullmsg << "' adquirida com sucesso.\n";
		break;
	case 0:
		std::cout << "[HoIsec] Ouro insuficente.\n";
		break;
	case -1:
		std::cout << "[HoIsec] Ja adicionaste uma tecnologia ao teu Imperio neste turno.\n";
		break;
	case -2:
		std::cout << "[HoIsec] A tecnologia '" << fullmsg << "' ja esta disponivel no Imperio.\n";
		break;
	case -3:
		std::cout << "[HoIsec] A tecnologia '" << fullmsg << "' nao esta disponivel para aquisi��o.\n";
		break;
	}
}
void Interface::opList()
{
	system("cls");
	std::cout << "Territorios do Imperio:\n\n";
	std::cout << gD->listTerritoriesConquered();
	std::cout << "Territorios Livres:\n\n";
	std::cout << gD->listTerritoriesNotConquered();
}
void Interface::opList(std::string fullmsg)
{
	system("cls");
	std::cout << gD->listTerritories(fullmsg);
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

void Interface::opTake(std::string type, std::string name)
{
	system("cls");
	switch (gD->takeObject(type,name))
	{
	case 2: 
		std::cout << "[HoIsec] A tecnologia '" << name << "' foi adicionada ao imperio.\n";
		break;
	case -2:
		std::cout << "[HoIsec] A tecnologia '" << name << "' ja existe no imperio\n";
		break;
	case -4:
		std::cout << "[HoIsec] A tecnologia com o nome '" << name << "' nao existe.\n";
		break;
	case 1:
		std::cout << "[HoIsec] O territorio '" << name << "' agora pertence ao imperio.\n";
		break;
	case -1:
		std::cout << "[HoIsec] O territorio '" << name << "' ja pertence ao imperio.\n";
		break;
	case -3:
		std::cout << "[HoIsec] N�o existe nenhum territorio com o nome '" << name << "'.\n";
		break;
	case 0:
		std::cout << "[HoIsec] O tipo '"<< type << "' nao foi reconhecido.\n";
		break;
	}
}
void Interface::opModify(std::string type,std::string value)
{
	system("cls");
	switch (gD->modifyData(type,value))
	{
	case 2:
		std::cout << "[HoIsec] A quantidade de ouro foi defiinida com o valor " <<
			value << ",\n\t com sucesso.\n";
		break;
	case 1:
		std::cout << "[HoIsec] A quantidade de produtos foi defiinida com o valor " <<
			value << ",\n\t com sucesso.\n";
		break;
	case 0:
		std::cout << "[HoIsec] O tipo '" << type << "' e invalido.\n";
		break;
	case -1:
		std::cout << "[HoIsec] O valor de produtos requirido, "<< value <<", esta acima\n" <<
			"\t do maximo permitido. A quantidade de produtos\n" <<
			"\t foi fixada no maximo permitido.\n";
		break;
	case -2:
		std::cout << "[HoIsec] O valor de ouro requirido, " << value << ", esta acima do\n" <<
			"\t maximo permitido. A quantidade de ouro\n" <<
			"\t foi fixada no maximo permitido.\n";
		break;
	case -3:
		std::cout << "[HoIsec] O 2o argumento do comando tem que ser um numero positivo\n";
		break;
	case -4:
		std::cout << "[HoIsec] O 2o argumento deve ser um valor positivo.\n";
		break;
	}
}
void Interface::opForceEvent(std::string fullmsg)
{
	system("cls");
	if (!gD->forceEvent(fullmsg)) {
		std::cout << "[HoIsec] O nome inserido e invalido. Introduza um nome valido.\n";
	}
	else {
		std::cout << "[HoIsec] Evento forcado - " << gD->getEventMsg() << std::endl;
	}
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
	if (gD->getPhase() != Phases::NONE && gD->getPhase() != Phases::GAMEOVER) {
		std::cout << "\n------------------------------------------------------\n";
		std::cout << "[ ANO: " << gD->getYear() << " || TURNO: " << gD->getTurn() << " ]";
		std::cout << "\n------------------------------------------------------\n";
		std::cout << "\t\t\tIMPERIO";
		std::cout << "\n PONTUACAO: " << gD->allPoints();
		std::cout << "\n PRODUTOS: " << gD->getEmpire().getProds() << "\t\tMAX: " << gD->getEmpire().getMaxStorage() << "\tPRODUCAO: " << gD->getEmpire().getProdsCreation();
		std::cout << "\n OURO: " << gD->getEmpire().getGold() << "\t\tMAX: " << gD->getEmpire().getMaxSafeBox() << "\tPRODUCAO: " << gD->getEmpire().getGoldCreation();
		std::cout << "\n FORCA MILITAR: " << gD->getEmpire().getMiliForce() << "\tMAX: " << gD->getEmpire().getMaxMiliForce() << "\tULTIMO FATOR SORTE: " << gD->getLuckyFactor();
		std::cout << "\n\t\t\t\tULTIMO EVENTO: " << gD->getEventId();
		std::cout << "\n------------------------------------------------------\n";
	}

	for (unsigned int i = 0; i < menu.size(); i++) {
		std::cout << menu[i];
	}

	std::string opt;
	while (opt.size() == 0) {
		opt = readString("\nopcao >>> ");
	}
	std::transform(opt.begin(), opt.end(), opt.begin(), ::tolower);

	return opt;
}

void Interface::pickMenu(std::vector<std::string>& menu)
{
	switch (gD->getPhase()) {
		case Phases::NONE:			fillInitMenu(menu);		break;
		case Phases::CONQUER:		fillConquerMenu(menu);	break;
		case Phases::COLLECTION:	fillExchangeMenu(menu);	break;
		case Phases::SHOP:			fillShopMenu(menu);		break;
		case Phases::EVENTS:		fillEventMenu(menu);	break;
	}
}

void Interface::initMenu(std::string cmd, std::vector<std::string> words)
{
	if (cmd == "carrega" && words.size() == 1) {
		opLoad(words[0]);
	}
	else if (cmd == "lista") {
		if (words.empty()) {
			opList();
		}
		else if (words.size() == 1) {
			opList(words[0]);
		}
	}
	else if (cmd == "cria" && words.size() == 2) {
		opCreate(words[0], words[1]);
	}
	else if (cmd == "iniciar" && words.size() == 0) {
		opGameInit();
	}
	else if (cmd == "ativa" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "apaga" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "sair") {
		std::cout << "[HoIsec] O jogo vai terminar...\n";
	}
	else {
		system("cls");
		std::cout << "[HoIsec] Comando desconhecido...\n";
	}
}

void Interface::conquerMenu(std::string cmd, std::vector<std::string> words)
{
	if (cmd == "conquista" && words.size() == 1) {
		opConquer(words[0]);
	}
	else if (cmd == "passa" && words.size() == 0) {
		opPass();
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
	}else if (cmd == "lista") {
		if (words.empty()) {
			opList();
		}
		else if (words.size() == 1) {
			opList(words[0]);
		}
	}
	else if (cmd == "grava" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "ativa" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "apaga" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "toma" && words.size() == 2) {
		opTake(words[0], words[1]);
	}
	else if (cmd == "modifica" && words.size() == 2) {
		opModify(words[0], words[1]);
	}
	else if (cmd == "fevento" && words.size() == 1) {
		opForceEvent(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "sair") {
		std::cout << "[HoIsec] O jogo vai terminar...\n";
	}
	else {
		system("cls");
		std::cout << "[HoIsec] Comando desconhecido...\n";
	}
}

void Interface::exchangeMenu(std::string cmd, std::vector<std::string> words)
{
	if (cmd == "maisouro" && words.size() == 0) {
		opMoreGold();
	}
	else if (cmd == "maisprod" && words.size() == 0) {
		opMoreProducts();
	}
	else if (cmd == "lista") {
		if (words.empty()) {
			opList();
		}
		else if (words.size() == 1) {
			opList(words[0]);
		}
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
	}
	else if (cmd == "grava" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "ativa" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "apaga" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "toma" && words.size() == 2) {
		opTake(words[0], words[1]);
	}
	else if (cmd == "modifica" && words.size() == 2) {
		opModify(words[0], words[1]);
	}
	else if (cmd == "fevento" && words.size() == 1) {
		opForceEvent(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "sair") {
		std::cout << "[HoIsec] O jogo vai terminar...\n";
	}
	else {
		system("cls");
		std::cout << "[HoIsec] Comando desconhecido...\n";
	}
}

void Interface::shopMenu(std::string cmd, std::vector<std::string> words)
{
	if (cmd == "maismilitar" && words.size() == 0) {
		opMoreMilitary();
	}
	else if (cmd == "adquire" && words.size() == 1) {
		opObtainTech(words[0]);
	}
	else if (cmd == "lista") {
		if (words.empty()) {
			opList();
		}
		else if (words.size() == 1) {
			opList(words[0]);
		}
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
		gD->drawEvent();
	}
	else if (cmd == "grava" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "ativa" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "apaga" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "toma" && words.size() == 2) {
		opTake(words[0], words[1]);
	}
	else if (cmd == "modifica" && words.size() == 2) {
		opModify(words[0], words[1]);
	}
	else if (cmd == "fevento" && words.size() == 1) {
		opForceEvent(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "sair") {
		std::cout << "[HoIsec] O jogo vai terminar...\n";
	}
	else {
		system("cls");
		std::cout << "[HoIsec] Comando desconhecido...\n";
	}
}

void Interface::eventMenu(std::string cmd, std::vector<std::string> words)
{
	if (cmd == "lista") {
		if (words.empty()) {
			opList();
		}
		else if (words.size() == 1) {
			opList(words[0]);
		}
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
	}
	else if (cmd == "grava" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "ativa" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "apaga" && words.size() == 1) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "toma" && words.size() == 2) {
		opTake(words[0], words[1]);
	}
	else if (cmd == "modifica" && words.size() == 2) {
		opModify(words[0], words[1]);
	}
	else if (cmd == "fevento" && words.size() == 1) {
		opForceEvent(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		std::cout << "NOT IMPLEMENTED YET\n";
	}
	else if (cmd == "sair") {
		std::cout << "[HoIsec] O jogo vai terminar...\n";
	}
}

void Interface::gameOver()
{
	std::cout << gD->getGameOverMsg() << std::endl;
	std::cout << "\nPressione algum botao para voltar ao menu principal.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	gD->advance();
}


Interface::Interface(GameData* gD)
{	
	this->gD = gD;
	std::cout << "[INTERFACE] Construindo..." << std::endl;
}
void Interface::run()
{
	std::vector<std::string> menu;
	std::vector<std::string> words;
	std::string fullstr;
	std::string cmd;
	do {
		words.clear();
		menu.clear();
		pickMenu(menu);

		//Need to be informed by GameData in order to show the correct menu.
		if (gD->getPhase() != Phases::GAMEOVER) {
			fullstr = choose(menu);
			getWords(words, cmd, fullstr);
		}
		
		switch (gD->getPhase()) {
			case Phases::NONE:			initMenu(cmd, words);		break;
			case Phases::CONQUER:		conquerMenu(cmd, words);	break;
			case Phases::COLLECTION:	exchangeMenu(cmd, words);	break;
			case Phases::SHOP:			shopMenu(cmd, words);		break;
			case Phases::EVENTS:		eventMenu(cmd, words);		break;
			case Phases::GAMEOVER:		gameOver();					break;
		}
	} while (cmd != "sair");
}
Interface::~Interface()
{	
	delete(gD);
	//DEBUG
	std::cout << "[INTERFACE] Destruindo..." << std::endl;

}
