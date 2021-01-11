#include "Interface.h"
#include <limits>
#include <algorithm>
#include <iostream>
#include <sstream>


//Menus
void Interface::fillInitMenu(std::vector<std::string>& initMenu)
{
	initMenu.push_back("\n\n-- Menu Principal --\n\n");
	initMenu.push_back(" ~~> carrega <nomeFicheiro>\n");
	initMenu.push_back(" ~~> cria <tipo> <n>\n");
	initMenu.push_back(" ~~> iniciar\n\n");

	initMenu.push_back(" ~~> lista <nome|'jogos'>\n\n");
	initMenu.push_back(" ~~> grava <nome>\n");
	initMenu.push_back(" ~~> ativa <nome>\n");
	initMenu.push_back(" ~~> apaga <nome>\n\n");
	initMenu.push_back(" ~~> ajuda\n");
	initMenu.push_back(" ~~> sair\n");
}
void Interface::fillConquerMenu(std::vector<std::string>& conquerMenu)
{
	conquerMenu.push_back("\n - Comandos do Jogo - 1a Fase | Conquistar ou Passar -- \n\n");
	conquerMenu.push_back(" ~~> conquista <nome>\n");
	conquerMenu.push_back(" ~~> passa\n");
	conquerMenu.push_back(" ~~> avanca\n\n");
	conquerMenu.push_back(" ~~> lista <nome|'jogos'>\n\n");
	conquerMenu.push_back(" ~~> grava <nome>\n");
	conquerMenu.push_back(" ~~> ativa <nome>\n");
	conquerMenu.push_back(" ~~> apaga <nome>\n\n");
	conquerMenu.push_back(" [DEBUG]\n");
	conquerMenu.push_back(" ~~> toma <qual> <nome>\n");
	conquerMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	conquerMenu.push_back(" ~~> fevento <nome-evento>\n");
	conquerMenu.push_back(" ---------\n\n");
	conquerMenu.push_back(" ~~> info <tec|evento>\n");
	conquerMenu.push_back(" ~~> ajuda\n");
	conquerMenu.push_back(" ~~> sair\n");
}
void Interface::fillExchangeMenu(std::vector<std::string>& exchangeMenu)
{
	exchangeMenu.push_back("\n - Comandos do Jogo - 2a Fase | Hora dos Recursos\n\n");
	exchangeMenu.push_back(" ~~> maisouro\n"); 
	exchangeMenu.push_back(" ~~> maisprod\n");
	exchangeMenu.push_back(" ~~> avanca\n\n");
	exchangeMenu.push_back(" ~~> lista <nome|'jogos'>\n");
	exchangeMenu.push_back(" ~~> grava <nome>\n");
	exchangeMenu.push_back(" ~~> ativa <nome>\n");
	exchangeMenu.push_back(" ~~> apaga <nome>\n\n");
	exchangeMenu.push_back(" [DEBUG]\n");
	exchangeMenu.push_back(" ~~> toma <qual> <nome>\n");
	exchangeMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	exchangeMenu.push_back(" ~~> fevento <nome-evento>\n");
	exchangeMenu.push_back(" ---------\n\n");
	exchangeMenu.push_back(" ~~> info <tec|evento>\n");
	exchangeMenu.push_back(" ~~> ajuda\n");
	exchangeMenu.push_back(" ~~> sair\n");
}
void Interface::fillShopMenu(std::vector<std::string>& shopMenu)
{
	shopMenu.push_back("\n - Comandos do Jogo - 3a Fase | Loja HoIsec\n\n");
	shopMenu.push_back(" ~~> maismilitar\n");
	shopMenu.push_back(" ~~> adquire <tipo>\n");
	shopMenu.push_back(" ~~> lista <nome|'jogos'>\n");
	shopMenu.push_back(" ~~> avanca\n\n");
	shopMenu.push_back(" ~~> grava <nome>\n");
	shopMenu.push_back(" ~~> ativa <nome>\n");
	shopMenu.push_back(" ~~> apaga <nome>\n\n");
	shopMenu.push_back(" [DEBUG]\n");
	shopMenu.push_back(" ~~> toma <qual> <nome>\n");
	shopMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	shopMenu.push_back(" ~~> fevento <nome-evento>\n");
	shopMenu.push_back(" ---------\n\n");
	shopMenu.push_back(" ~~> info <tec|evento>\n");
	shopMenu.push_back(" ~~> ajuda\n");
	shopMenu.push_back(" ~~> sair\n");
}
void Interface::fillEventMenu(std::vector<std::string>& eventMenu)
{
	eventMenu.push_back("\n - Comandos do Jogo - 4a Fase | Eventos\n\n");
	std::ostringstream oss;
	oss << "\n Evento Ocorrido: " << gD->getEventId() << "\n\n";
	eventMenu.push_back(oss.str());
	eventMenu.push_back(" ~~> ultimoe\n\n");
	eventMenu.push_back(" ~~> lista <nome|'jogos'>\n");
	eventMenu.push_back(" ~~> avanca\n\n");
	eventMenu.push_back(" ~~> grava <nome>\n");
	eventMenu.push_back(" ~~> ativa <nome>\n");
	eventMenu.push_back(" ~~> apaga <nome>\n\n");
	eventMenu.push_back(" [DEBUG]\n");
	eventMenu.push_back(" ~~> toma <qual> <nome>\n");
	eventMenu.push_back(" ~~> modifica <ouro|prod> <N>\n");
	eventMenu.push_back(" ~~> fevento <nome-evento>\n");
	eventMenu.push_back(" ---------\n\n");
	eventMenu.push_back(" ~~> info <tec|evento>\n");
	eventMenu.push_back(" ~~> ajuda\n");
	eventMenu.push_back(" ~~> sair\n");
}

//void Interface::fillFirstMenu(std::vector<std::string>& firstMenu) {
//	firstMenu.push_back("\n - Comandos do Jogo -\n\n");
//	firstMenu.push_back(" ~~> cria <tipo> <n>\n");
//	firstMenu.push_back(" ~~> carrega <nomeFicheiro>\n");
//	firstMenu.push_back(" ~~> conquista <nome>\n");
//	firstMenu.push_back(" ~~> lista <nome>\n");
//	firstMenu.push_back(" ~~> sair\n\n");
//}

void Interface::fillInitHelpMenu(std::vector<std::string>& words)
{
	words.push_back("\n --- AJUDA (INICIO) --- \n\n");
	words.push_back(" ~~> carrega <nomeFicheiro>\n");
	words.push_back(" \t * Cria territorios apartir de um ficheiro.\n");
	words.push_back(" ~~> cria <tipo> <N>\n");
	words.push_back(" \t * Cria N territorios de tipo.\n");
	words.push_back(" ~~> iniciar \n");
	words.push_back(" \t * Comeca o jogo.\n\n");
	words.push_back(" ~~> ativa <nome>\n");
	words.push_back(" \t * Ativa um momento de jogo que tenha sido guardado.\n");
	words.push_back(" ~~> apaga <nome>\n");
	words.push_back(" \t * Apaga um momento de jogo identificado com um nome.\n\n");
	words.push_back(" ~~> info <tec|evento>\n");
	words.push_back(" \t * Mostra a informacao relativa a tecnologias ou eventos. \n");
	words.push_back(" ~~> sair \n");
	words.push_back(" \t * Termina o jogo por completo.\n");
	words.push_back("\n-----------------------------\n");
}

void Interface::fillConquerHelpMenu(std::vector<std::string>& words)
{
	words.push_back("\n --- AJUDA (1a Fase) --- \n\n");
	words.push_back(" ~~> conquista <nome>\n");
	words.push_back(" \t * Fazer um ataque a uma territorio.\n");
	words.push_back(" ~~> passa\n");
	words.push_back(" \t * Nao efetuar qualquer ataque no turno.\n");
	words.push_back(" ~~> avanca\n");
	words.push_back(" \t * Avanca para a proxima fase.\n\n");
	fillDefaultHelpMenu(words);
}

void Interface::fillExchangeHelpMenu(std::vector<std::string>& words)
{
	words.push_back("\n --- AJUDA (2a Fase) --- \n\n");
	words.push_back(" ~~> maisouro\n");
	words.push_back(" \t * Troca duas unidades de produtos por uma de ouro.\n");
	words.push_back(" ~~> maisprod\n");
	words.push_back(" \t * Troca duas unidades de ouro por uma de produtos.\n");
	words.push_back(" ~~> avanca\n");
	words.push_back(" \t * Avanca para a proxima fase.\n\n");
	fillDefaultHelpMenu(words);
}

void Interface::fillShopHelpMenu(std::vector<std::string>& words)
{
	words.push_back("\n --- AJUDA (3a Fase) --- \n\n");
	words.push_back(" ~~> maismilitar\n");
	words.push_back(" \t * Troca uma unidade de produtos e outra de ouro por uma de forca militar.\n");
	words.push_back(" ~~> adquire <tipo>\n");
	words.push_back(" \t Compra uma tecnologia.\n");
	words.push_back(" \t * Drones militares - Preco: 3 unidades de ouro (tipo: 'drone')\n");
	words.push_back(" \t * Misseis Teleguiados - Preco: 4 unidades de ouro (tipo: 'misseis')\n");
	words.push_back(" \t * Defesas Territoriais - Preco: 4 unidades de ouro (tipo: 'defesas')\n");
	words.push_back(" \t * Bolsa de valores - Preco: 2 unidades de ouro (tipo: 'bolsa')\n");
	words.push_back(" \t * Banco Central - Preco: 3 unidades de ouro (tipo: 'banco')\n\n");
	words.push_back(" ~~> avanca\n");
	words.push_back(" \t * Avanca para a proxima fase.\n\n");
	fillDefaultHelpMenu(words);
}

void Interface::fillEventHelpMenu(std::vector<std::string>& words)
{
	words.push_back("\n --- AJUDA (4a Fase) --- \n\n");
	words.push_back(" ~~> ultimoe\n");
	words.push_back(" \t * Mostra informacao relativa ao ultimo evento.");
	words.push_back(" ~~> avanca\n");
	words.push_back(" \t * Avanca para a proxima fase.\n\n");
	fillDefaultHelpMenu(words);
}

void Interface::fillDefaultHelpMenu(std::vector<std::string>& words)
{
	words.push_back(" ~~> lista <nome>\n");
	words.push_back(" Nao e passado um nome de um territorio: \n");
	words.push_back(" \t * Lista todos os territorios existentes no mundo.\n");
	words.push_back(" \t * A informacao e apresentada dividida entre territorios conquistados e livres.\n");
	words.push_back(" Indicando um nome de um territorio: \n");
	words.push_back(" \t * Lista informacao sobre o territorio.\n\n");
	words.push_back(" Com o argumento 'jogos': \n");
	words.push_back(" \t * Lista os estados de jogo guardados em memoria.\n\n");
	words.push_back("--- [DEBUG] ---\n");
	words.push_back(" Estes comandos servem apenas para atividades de teste.\n");
	words.push_back(" ~~> toma <qual> <nome>\n");
	words.push_back(" \t * A tecnologio ou territorio passam a ser do imperio.\n");
	words.push_back(" ~~> modifica <ouro|prod> <N>\n");
	words.push_back(" \t * Define a quantidade de ouro ou produtos com N.\n");
	words.push_back(" ~~> fevento <nome-evento>\n");
	words.push_back(" \t * Forca a ocorrencia de um evento.\n");
	words.push_back("---------------\n\n");
	words.push_back("--- [DEFINICOES] ---\n");
	words.push_back(" ~~> grava <nome>\n");
	words.push_back(" \t * Grava o momento do jogo atual.\n");
	words.push_back(" ~~> ativa <nome>\n");
	words.push_back(" \t * Ativa um momento de jogo que tenha sido guardado.\n");
	words.push_back(" ~~> apaga <nome>\n");
	words.push_back(" \t * Apaga um momento de jogo identificado com um nome.\n\n");
	words.push_back("-------------------\n\n");
	 words.push_back(" ~~> info <tec | evento>\n");
	words.push_back(" \t * Mostra a informacao relativa a tecnologias ou eventos. \n");
	words.push_back(" ~~> sair \n");
	words.push_back(" \t * Termina o jogo por completo.\n");
	words.push_back("\n-----------------------------\n");
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
		std::cout << "[HoIsec] Nao pode fazer mais ataques neste turno.\n";
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
	switch (gD->stayPassive()) {
	case 1:
		std::cout << "[HoIsec] Este turno decidiu nao conquistar nenhum territorio.\n";
		break;
	case 0:
		std::cout << "[HoIsec] Ja foi tomanda uma decisao sobre conquistar, neste turno.\n";
		break;
	}
}
void Interface::opAdvance()
{
	system("cls");
	if (gD->advance() == 0) {
		std::cout << "[HoIsec] Nao definiu o que pretende fazer nesta fase (conquistar ou passar).\n";
	}
	else {
		std::cout << "[HoIsec] Proxima fase...\n";
	}


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
		std::cout << "[HoIsec] Atingiu o máximo possivel.\n\t Nao e possivel adicionar mais ouro, nada foi feito.\n";
		break;
	case -2:
		std::cout << "[HoIsec] Não pode adicionar mais ouro neste turno.\n";
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
		std::cout << "[HoIsec] Atingiu o máximo possivel.\n\t Nao e possivel adicionar mais produtos, nada foi feito.\n";
		break;
	case -2:
		std::cout << "[HoIsec] Nao pode adicionar mais produtos neste turno.\n";
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
	case -2:
		std::cout << "[HoIsec] Nao pode adquirir mais forca militar neste turno.\n";
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
void Interface::opSave(std::string name)
{
	system("cls");
	for (Recording* r : recordings) {
		if (r->getName() == name) {
			std::cout << "[HoIsec] Ja existe uma gravacao com esse nome.\n";
			return;
		}
	}
	recordings.push_back(new Recording(name, new GameData(*gD)));
	std::cout << "[HoIsec] Gravacao feita com sucesso.\n";
}
void Interface::opRecover(std::string name)
{
	system("cls");
	for (Recording* r : recordings) {
		if (r->getName() == name) {
			delete gD;
			gD = new GameData(*(r->getGameData()));
			std::cout << "[HoIsec] Gravacao '" << name << "' carregada com sucesso.\n";
			return;
		}
	}
	std::cout << "[HoIsec] Nao existe uma gravacao com esse nome.\n";
}
void Interface::opDelete(std::string name)
{
	for (std::vector<Recording*>::iterator it = recordings.begin(); it != recordings.end(); ++it) {
		if ((*it)->getName() == name) {
			delete (*it);
			recordings.erase(it);
			std::cout << "[HoIsec] Gravacao apagada com sucesso.\n";
			return;
		}
	}
	std::cout << "[HoIsec] Nao existe uma gravacao com esse nome.\n";
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
		std::cout << "[HoIsec] Evento forcado!!\n\n " << gD->getEventMsg() << std::endl;
	}

	std::cout << "\n[HoIsec] Pressione algum botao para voltar ao menu principal.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("cls");
}
void Interface::opHelp()
{
	system("cls");
	pickHelpMenu();
	std::cout << "\n[HoIsec] Pressione algum botao para voltar.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("cls");
}
void Interface::opInfo(const std::string type)
{
	system("cls");
	if (type == "tec") {
		showTechInfo();
		std::cout << "\n[HoIsec] Pressione algum botao para voltar.\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else if (type == "evento") {
		showEventInfo();
		std::cout << "\n[HoIsec] Pressione algum botao para voltar.\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else {
		std::cout << "[HoIsec] Comando desconhecido...\n";
	}
	system("cls");
}
void Interface::opLastEvent()
{
	system("cls");
	std::cout << gD->getEventMsg() << std::endl;
	std::cout << "\n[HoIsec] Pressione algum botao para voltar ao menu principal.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("cls");
}

void Interface::opListGameSaves()
{
	system("cls");
	std::cout << "\n---- Gravacoes do Jogo ----\n\n";
	if (recordings.size() == 0) {
		std::cout << " ~~> Sem gravacoes.\n";
	}
	else {
		for (auto r : recordings) {
			std::cout << " * Nome: " << r->getName() << "\n" << r->getGameData()->toString() << std::endl;
		}
		std::cout << std::endl;
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
		std::cout << "\n PRODUTOS: " << (*gD->getEmpire()).getProds() << "\t\tMAX: " << (*gD->getEmpire()).getMaxStorage() << "\tPRODUCAO: " << (*gD->getEmpire()).getProdsCreation();
		std::cout << "\n OURO: " << (*gD->getEmpire()).getGold() << "\t\tMAX: " << (*gD->getEmpire()).getMaxSafeBox() << "\tPRODUCAO: " << (*gD->getEmpire()).getGoldCreation();
		std::cout << "\n FORCA MILITAR: " << (*gD->getEmpire()).getMiliForce() << "\tMAX: " << (*gD->getEmpire()).getMaxMiliForce() << "\tULTIMO FATOR SORTE: " << gD->getLuckyFactor();
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

void Interface::pickHelpMenu()
{
	std::vector<std::string> menu;

	switch (gD->getPhase()) {
	case Phases::NONE:			fillInitHelpMenu(menu);		break;
	case Phases::CONQUER:		fillConquerHelpMenu(menu);	break;
	case Phases::COLLECTION:	fillExchangeHelpMenu(menu);	break;
	case Phases::SHOP:			fillShopHelpMenu(menu);		break;
	case Phases::EVENTS:		fillEventHelpMenu(menu);	break;
	}

	for (unsigned int i = 0; i < menu.size(); i++) {
		std::cout << menu[i];
	}	
}

void Interface::showTechInfo()
{
	std::vector<std::string> info;

	info.push_back("-------- Tecnologias --------\n\n");
	info.push_back(" ~~> Drones Militares\n");
	info.push_back(" \t * Aumenta o maximo da forca militar para 5.\n");
	info.push_back(" \t * Adquirido?: "); ((*gD->getEmpire()).haveDrone()) ? info.push_back("SIM\n") : info.push_back("NAO\n");
	info.push_back(" \t * Custo : 3 unidades de ouro\n\n");
	info.push_back(" ~~> Missieis Teleguiados\n");
	info.push_back(" \t * Possibilita o ataque a territorios do tipo ilha.\n");
	info.push_back(" \t * Adquirido?: "); ((*gD->getEmpire()).haveMissiles()) ? info.push_back("SIM\n") : info.push_back("NAO\n");
	info.push_back(" \t * Custo : 4 unidades de ouro\n\n");
	info.push_back(" ~~> Defesas Territoriais\n");
	info.push_back(" \t * Acrescenta uma unidade a resistencia do territorio invadido,\n\t\t durante um evento de invasao.\n");
	info.push_back(" \t * Adquirido?: "); ((*gD->getEmpire()).haveDefenses()) ? info.push_back("SIM\n") : info.push_back("NAO\n");
	info.push_back(" \t * Custo : 4 unidades de ouro\n\n");
	info.push_back(" ~~> Bolsa de Valores\n");
	info.push_back(" \t * Abilita a possibilidade de trocas entre produtos e ouro.\n");
	info.push_back(" \t * Adquirido?: "); ((*gD->getEmpire()).haveStockExchange()) ? info.push_back("SIM\n") : info.push_back("NAO\n");
	info.push_back(" \t * Custo : 2 unidades de ouro\n\n");
	info.push_back(" ~~> Banco Central\n");
	info.push_back(" \t * Aumenta a capacidade maxima de ouro e produtos em 2 unidades\n");
	info.push_back(" \t * Adquirido?: "); ((*gD->getEmpire()).haveCentralBank()) ? info.push_back("SIM\n") : info.push_back("NAO\n");
	info.push_back(" \t * Custo : 3 unidades de ouro\n\n");

	for (unsigned int i = 0; i < info.size(); i++) {
		std::cout << info[i];
	}
}

void Interface::showEventInfo()
{
	std::vector<std::string> info;

	info.push_back("-------- Eventos --------\n\n");
	info.push_back(" ~~> Recurso Abandonado\n");
	info.push_back(" \t * (fevento recurso)\n");
	info.push_back(" \t * Neste evento e encontrado um recurso que sera adicionado ao imperio.\n");
	info.push_back(" \t * Caso o cofre ou o armazem do imperio estejam cheios o produto e perdido.\n");
	info.push_back(" \t * Se o evento ocorrer durante o ano 1 encotra um produto,\n");
	info.push_back(" \t\t se for o ano 2 encontra uma unidade de ouro.\n\n");
	info.push_back(" ~~> Invasao\n");
	info.push_back(" \t * (fevento invasao)\n");
	info.push_back(" \t * Se este evento ocorrer o ultimo territorio conquistado pelo jogador, sofre\n");
	info.push_back(" \t\t um ataque por parte de um imperio desconhecido.\n");
	info.push_back(" \t * E sorteado um fator sorte entre 1 e 6 que é adicionado a forca de invasao que\n");
	info.push_back(" \t\t tem o valor 2 no primeiro ano e 3 no segundo ano.\n");
	info.push_back(" \t * Se o o valor final da forca de invasao for inferior a resistencia do territorio a\n");
	info.push_back(" \t\t a invasao falha. Caso seja se concretize entao o territorio deixa de fazer parte do \n");
	info.push_back(" \t\t imperio. \n");
	info.push_back(" \t * Se o imperio tiver apenas o territorio inicial este podera ser invadido e caso a invasao\n");
	info.push_back(" \t\t tenha sucesso leva a perda do jogo.\n\n");
	info.push_back(" ~~> Alianca Diplomatica\n");
	info.push_back(" \t * (fevento alianca)\n");
	info.push_back(" \t * No caso deste evento ocorrer, e adicionado um valor a forca militar, caso esta ja nao esteja no maximo.\n\n");
	info.push_back(" ~~> Sem Evento \n");
	info.push_back(" \t * (fevento nada)\n");
	info.push_back(" \t * Nao acontece nada e jogo continua.\n");

	for (unsigned int i = 0; i < info.size(); i++) {
		std::cout << info[i];
	}
}

void Interface::drawEvent()
{
	system("cls");
	gD->drawEvent();
	std::cout << gD->getEventMsg() << std::endl;

	std::cout << "\n[HoIsec] Pressione algum botao para voltar ao menu principal.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("cls");
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
			if (words[0] == "jogos") {
				opListGameSaves();
			}
			else {
				opList(words[0]);
			}
		}
	}
	else if (cmd == "cria" && words.size() == 2) {
		opCreate(words[0], words[1]);
	}
	else if (cmd == "iniciar" && words.size() == 0) {
		opGameInit();
	}
	else if (cmd == "grava" && words.size() == 1) {
		opSave(words[0]);
	}
	else if (cmd == "ativa" && words.size() == 1) {
		opRecover(words[0]);
	}
	else if (cmd == "apaga" && words.size() == 1) {
		opDelete(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		opHelp();
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
			if (words[0] == "jogos") {
				opListGameSaves();
			}
			else {
				opList(words[0]);
			}
		}
	}
	else if (cmd == "grava" && words.size() == 1) {
		opSave(words[0]);
	}
	else if (cmd == "ativa" && words.size() == 1) {
		opRecover(words[0]);
	}
	else if (cmd == "apaga" && words.size() == 1) {
		opDelete(words[0]);
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
	else if (cmd == "info" && words.size() == 1) {
		opInfo(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		opHelp();
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
			if (words[0] == "jogos") {
				opListGameSaves();
			}
			else {
				opList(words[0]);
			}
		}
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
	}
	else if (cmd == "grava" && words.size() == 1) {
		opSave(words[0]);
	}
	else if (cmd == "ativa" && words.size() == 1) {
		opRecover(words[0]);
	}
	else if (cmd == "apaga" && words.size() == 1) {
		opDelete(words[0]);
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
	else if (cmd == "info" && words.size() == 1) {
		opInfo(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		opHelp();
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
			if (words[0] == "jogos") {
				opListGameSaves();
			}
			else {
				opList(words[0]);
			}
		}
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
		drawEvent();
	}
	else if (cmd == "grava" && words.size() == 1) {
		opSave(words[0]);
	}
	else if (cmd == "ativa" && words.size() == 1) {
		opRecover(words[0]);
	}
	else if (cmd == "apaga" && words.size() == 1) {
		opDelete(words[0]);
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
	else if (cmd == "info" && words.size() == 1) {
		opInfo(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		opHelp();
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
			if (words[0] == "jogos") {
				opListGameSaves();
			}
			else {
				opList(words[0]);
			}
		}
	}
	else if(cmd == "ultimoe" && words.size() == 0){
		opLastEvent();
	}
	else if (cmd == "avanca" && words.size() == 0) {
		opAdvance();
	}
	else if (cmd == "grava" && words.size() == 1) {
		opSave(words[0]);
	}
	else if (cmd == "ativa" && words.size() == 1) {
		opRecover(words[0]);
	}
	else if (cmd == "apaga" && words.size() == 1) {
		opDelete(words[0]);
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
	else if (cmd == "info" && words.size() == 1) {
		opInfo(words[0]);
	}
	else if (cmd == "ajuda" && words.size() == 0) {
		opHelp(); 
	}
	else if (cmd == "sair") {
		std::cout << "[HoIsec] O jogo vai terminar...\n";
	}
	else {
		system("cls");
		std::cout << "[HoIsec] Comando desconhecido...\n";
	}
}

void Interface::gameOver()
{
	std::cout << gD->getGameOverMsg() << std::endl;
	std::cout << "\n[HoIsec] Pressione algum botao para voltar ao menu principal.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	gD->setInitialValues();
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
	for (auto r : recordings) {
		delete r;
	}
	std::cout << "[INTERFACE] Destruindo..." << std::endl;

}
