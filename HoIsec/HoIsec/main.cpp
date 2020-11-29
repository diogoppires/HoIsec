#include "GameData.h"
#include "Interface.h"
#include "FileReader.h"

int main() {
	GameData* gd = new GameData();
	Interface i(gd);
	i.run();
}