\\ program nie dziala i nie wiem, gdzie jest blad

#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int

{
	if (argc < 3)
	{
	return 1;
	}
	
		auto const wymiar = std::stoi(argv[1]);
		
		for (int i = 1; i <= wymiar; i++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
		
    
		for (int i = 1; i <= wymiar - 2; i++)
			{

				for (int j = 1; j <= wymiar; j++)
				{
				std::cout << " ";
				}
				std::cout << "*" << "\n";
				
			}
		for (int k = 1; k <= wymiar; k++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	

return 0;
}


