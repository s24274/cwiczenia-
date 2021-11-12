#include <iostream>

int main() 
{ 

	int limit, dzielnik;
	int suma = 1;
	
	std::cout << "Podaj dwie liczby: ";
	std::cin >> limit;
	std::cin >> dzielnik;
	
	for ( int i=1; i<=limit; i++ )
	suma = suma + i;
	std::cout << "Suma = " << suma << " ";
		
	return 0;
}
