#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
	std::string first = "n1246534550dewewq";
	std::cout << first.length() << "\n";

	std::string slovo = "n1246534550dewewq";
	std::cout << *slovo.begin() << std::endl;
	std::cout << slovo.back();

	std::cout;
	std::cin;
	return 0;
}