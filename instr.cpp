#include <iostream>

int main()
{
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];


	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	std::cout << "Enter your favorite dessert: " << std::endl;
	std::cin >> dessert;
	std::cout << "I have some delicious " << dessert;
	std::cout << " for you, " << name << std::endl;

	return 0;


}