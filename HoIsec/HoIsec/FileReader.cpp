#include "FileReader.h"


bool FileReader::verifyData(std::string data)
{
	std::istringstream iss(data);
	std::string auxStr, auxStr2;
	iss >> auxStr;	
}

FileReader::FileReader(std::string fileName) {
	fileI.open(fileName);
	std::cout << "[FileReader]: Constructor..." << std::endl;
}

std::vector<std::string> FileReader::readFile()
{
	std::vector<std::string> info;
	std::string text;
	if (fileI.is_open()) {
		while (getline(fileI, text)) {
			if (verifyData(text) == true) {
				info.push_back(text);
			}
		}
		return info;
	}
	else {
		std::cerr << "[ERROR] Error opening file!"; // cout e cerr are equal but they can be directioned to distinct files.
	}
	return info;
}


FileReader::~FileReader()
{
	fileI.close();
	std::cout << "[FileReader]: Destructor..." << std::endl;
}
