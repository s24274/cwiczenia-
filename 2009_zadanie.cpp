#include <iostream>

int main()

{
	int liczba;
	int silnia=1;
	
	std::cout << "Podaj liczbe: ";
	std::cin >> liczba;
	
	int i=liczba;
	while (i > 1)
	{
		
		silnia = silnia * i;
		i--;
		
		
	}
	std::cout << liczba << "! = " << silnia << " ";
return 0;
}
