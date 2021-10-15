#include <iostream>
#include <string>

int main ()
{ 
    int a, b, c;
    std::cout << "Podaj liczbe: ";
    std::cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        std::cout << a;
        else 
            std::cout << c;
    }
    
    if (b > a)
    {
        if (b > c)
        std::cout << b;
        else
            std::cout << c;
    }
return 0;
}




