#include <iostream>

bool pierwsza(int a)
{
	for (int i=2; i<=a; i++)
	{
		if (a%i == 0)
			{ 
				if (i==a)
				return true;
				else 
				return false;
				
			}
	}
}

int main()
{ 
	int a, i, suma;
	
	std::cout << "Podaj liczbe i sprawdze czy to liczba pierwsza: ";
	std::cin >> a;
	
	if (pierwsza(a) == true)
	{ 
		for (i=2; i<=a; i++)
		{
		bool zm = pierwsza(i);
		
		
			if (zm == true)
				{
					suma = suma + i;
					std::cout << suma << " ";
				}
	
		 
				else 
				{
					std::cout << "To nie jest liczba pierwsza" << " ";
				}
		}	
	}

return 0;
}

