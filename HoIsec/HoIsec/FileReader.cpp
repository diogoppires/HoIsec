#include "FileReader.h"

bool FileReader::is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

bool FileReader::verifyData(const std::string& data)
{
	std::istringstream iss(data);
	std::string auxType, auxNumber;
	iss >> auxType >> auxNumber;
	std::transform(auxType.begin(), auxType.end(), auxType.begin(), ::tolower);
	if (auxType == "territorio" && is_number(auxNumber)) {
		std::cout << "[FileReader]: Valido!" << std::endl;
		return true;
	}
	std::cout << "[FileReader]: Invalido!" << std::endl;
	return false;
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
