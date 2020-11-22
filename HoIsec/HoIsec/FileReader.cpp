#include "FileReader.h"

FileReader::FileReader(std::string fileName) {
	fileI.open(fileName);
	std::cout << "[FileReader]: Constructor..." << std::endl;
}

void FileReader::readFile(std::string& type, int& num)
{
	std::string text;
	std::istringstream iss;

	if (fileI.is_open()) {
		while (getline(fileI, text)) {
			std::cout << text << std::endl;
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
