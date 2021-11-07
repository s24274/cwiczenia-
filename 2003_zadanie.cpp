#include <iostream>

int main()
{
	int a, b, s;
	std::cout << "Podaj trzy liczby: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> s;
	
	for (int i =a; i < b; i+=s)
	std::cout << i << " ";
	
return 0;
}
