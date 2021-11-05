#include <iostream>
#include <string>

int main()

{
int liczba;

std::cout << "Podaj liczbe= ";
std::cin >> liczba;

    if (liczba > 0) 
{
        std::cout << "1"<<"\n";
}
    else if (liczba == 0)
    std::cout << "0" << "\n";

    else if (liczba < 0)
    std::cout << "-1" << "\n";

return 0;

}

