#include <iostream>

int main()

{
	int liczba;
	int silnia=1;
	
	std::cout << "Podaj liczbe: ";
	std::cin >> liczba;
	
	int i=liczba;
	do 
	{
		
		silnia = silnia * i;
		i--;
		
		
	}   while (i > 1);
		
	std::cout << liczba << "! = " << silnia << " ";
return 0;
}
