#include <iostream>

int main() 
{ 

	int limit, dzielnik;
	int suma = 0;
	
	std::cout << "Podaj dwie liczby: ";
	std::cin >> limit;
	std::cin >> dzielnik;
	
	for ( int i=1; i<=limit; i++ )
	{
		if (i%dzielnik == 0)
		{
			suma = suma + i;
		}
	}
	std::cout << "Suma = " << suma << " ";
		
	return 0;
}
