#include <iostream>

int main()
{
	int a;

	std::cout << "Podaj liczbe i sprawdze czy to liczba pierwsza: ";
	std::cin >> a;
	
	for (int i=2; i<=a; i++)
	{
		if (a%i == 0)
			{ 
				if (i==a)
				std::cout << "TAK";
				else 
				std::cout << "NIE";
				break;
			}
	}
return 0;
}
