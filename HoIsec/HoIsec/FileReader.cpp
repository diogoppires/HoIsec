#include "FileReader.h"

bool FileReader::is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

bool FileReader::verifyArgs(std::string territory, std::string quant) {
	return converter.StringToTerritoryTypes(territory) != TerritoryTypes::NONE && is_number(quant);
}

bool FileReader::verifyData(const std::string& data)
{
	std::string auxType, auxNumber, command;
	std::istringstream iss(data);
	
	iss >> command >> auxType >> auxNumber;
	if (command == "cria" && verifyArgs(auxType,auxNumber)) {

		std::cout << "[FileReader]: Valido!" << std::endl;
		return true;
	}
	std::cout << "[FileReader]: Invalido!" << std::endl;
	return false;
}



FileReader::FileReader(std::string fileName): converter() {
	fileI.open(fileName);
	std::cout << "[FileReader]: Constructor..." << std::endl;
}



std::vector<std::string> FileReader::readFile()
{
	std::vector<std::string> info;
	std::string text;
	if (fileI.is_open()) {
		while (getline(fileI, text)) {
			std::transform(text.begin(), text.end(), text.begin(), ::tolower);
			if (verifyData(text) == true) {
				info.push_back(text);
			}
		}
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
