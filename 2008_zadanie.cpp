#include <iostream>

int main()
{
	int liczba;
	int silnia=1;
	
	std::cout << "Podaj liczbe: ";
	std::cin >> liczba;
	
	for (int i=liczba; i>1; i--)
	silnia = silnia * i;
	std::cout << liczba <<"! = " << silnia << " ";
	
	return 0;
}

