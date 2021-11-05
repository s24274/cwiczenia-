#include <iostream>
int main()
{
	int a, b;
	std::cout << "Podaj dwie liczby: ";
	std::cin>>a;
	std::cin>>b;
	
	for (int i = a; i < b; i++)
		std::cout << i << "\n";
return 0;
}
		
