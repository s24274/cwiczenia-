#include <iostream>
#include <string>
#include <cmath>


int main()
{
	int a, b, c;
	std::cout << "Podaj trzy liczby: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	
	if (c == 0) 
	{
	std::cout << "Nie mozna dzielic przez 0";
	}
	
	else
	{ 
		for (int i = a; i < b; i++)
		if (i%c == 0)
		{
		std::cout << i << " ";
		}
	}
	
return 0;
}
