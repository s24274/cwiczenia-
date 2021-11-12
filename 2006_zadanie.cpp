#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
	if (not prompt.empty())
	{
		std::cout << prompt;
	}
	auto value = std::string{};
	std::getline(std::cin, value);
	return std::stoi(value);
}

auto main() -> int

{
	int a, b, c, d, e, f;
	
		std::cout << "Podaj liczbe ";
		
		a = ask_user_for_integer("a = ");
		b = ask_user_for_integer("b = ");
		c = ask_user_for_integer("c = ");
		d = ask_user_for_integer("d = ");
		e = ask_user_for_integer("e = ");
		f = ask_user_for_integer("f = ");
		
		
			if (a > b) 
			{
            std::cout << a << ">" << b <<"\n";
			}
            

            else if (a == b)
            std::cout << a << "==" << b <<"\n";

            else if (a < b) 
            std::cout << a << "<" << b <<"\n";
            
            if (a > c)
            {
            std::cout << a << ">" << c <<"\n";
			}
            

            else if (a == c)
            std::cout << a << "==" << c <<"\n";

            else if (a < c) 
            std::cout << a << "<" << c <<"\n";
            
            if (a > d)
            {
            std::cout << a << ">" << d <<"\n";
			}
            

            else if (a == d)
            std::cout << a << "==" << d <<"\n";

            else if (a < d) 
            std::cout << a << "<" << d <<"\n";
            
            if (a > e)
            {
            std::cout << a << ">" << e <<"\n";
			}
            

            else if (a == e)
            std::cout << a << "==" << e <<"\n";

            else if (a < e) 
            std::cout << a << "<" << e <<"\n";
            
            if (a > f)
            {
            std::cout << a << ">" << f <<"\n";
			}
            

            else if (a == f)
            std::cout << a << "==" << f <<"\n";

            else if (a < f) 
            std::cout << a << "<" << f <<"\n";
            
            
          
return 0;
}



          



			 
					
					
			
