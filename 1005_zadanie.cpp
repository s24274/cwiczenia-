#include <iostream>
#include <string>

int main()
{

    int liczba;
    std::cout << "Podaj liczbe, ktorej wartosc bezwzgledna chcesz obliczyc";
    std::cin >> liczba;

    if (liczba >= 0) std::cout << liczba;
    else std::cout << liczba * (-1);

return 0;
}
