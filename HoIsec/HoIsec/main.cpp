#include "Interface.h"
#include "Empire.h"

int main() {
	Interface i;
	i.run();

	Empire emp;
	std::cout << "_____________\n";
	std::cout << emp.toString();
	std::cout << "_____________\n";
}