#include <iostream>

int main()
{
	int a, b, s;
	std::cout << "Podaj trzy liczby: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> s;
	
	 if (s > 0)
		{
			for (int i =a; i < b; i+=s)
			std::cout << i << " ";
		}
		
	else if  (s < 0) 
		{
			for (int i = a; i < b; i-=s)
			std::cout << i << " ";
		}
		
	else 
		std::cout << "s nie  może być równe 0!";
		

return 0;
