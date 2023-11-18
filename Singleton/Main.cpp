
#include <iostream>

#include "Singleton.h"

int main()
{
	std::cout << "Singleton Pattern\n";

	Singleton* s1 = Singleton::Instance();

	std::cout << "Singleton 1 address->" << s1 << '\n';

	Singleton* s2 = Singleton::Instance();

	std::cout << "Singleton 2 address->" << s2 << '\n';

	std::cin.get();
}