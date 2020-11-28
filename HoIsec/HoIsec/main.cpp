#include "GameData.h"
#include "Interface.h"
#include "FileReader.h"

int main() {
	GameData* gd = new GameData();
	Interface i(gd);
	i.run();

	/*Empire emp;
	std::cout << "_____________\n";
	std::cout << emp.toString();
	std::cout << "_____________\n";*/

	/*FileReader reader("test.txt");
	reader.readFile();*/
}