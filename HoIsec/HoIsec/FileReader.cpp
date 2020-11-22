#include "FileReader.h"

FileReader::FileReader(std::string fileName) {
	fileI.open(fileName);
	std::cout << "[FileReader]: Constructor..." << std::endl;
}

std::vector<std::string> FileReader::readFile()
{
	std::string text;
	if (fileI.is_open()) {
		std::vector<std::string> info;
		while (getline(fileI, text)) {
			std::cout << text << std::endl;			//[DEBUG]
			info.push_back(text);
		}
	}
	else {
		std::cerr << "[ERROR] Error opening file!"; // cout e cerr are equal but they can be directioned to distinct files.
	}
}


FileReader::~FileReader()
{
	fileI.close();
	std::cout << "[FileReader]: Destructor..." << std::endl;
}
