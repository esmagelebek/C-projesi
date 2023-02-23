

#include <iostream>
#include <iomanip>

int main()
{
    char d = 'A';
    char a = 10;
    char e = 10;
    std::cout << a + e;
    std::cout << "\n";

    std::cout << d;
    std::cout << "\n";
    signed int s = -1;
    unsigned int u = 1;
    if(s<u)
    {
        std::cout << "Kucuk";
    }
    else {
        std::cout << "Kucuk Degil";
    }
    unsigned short x{ 65535 };
    std::cout << "x deger:" << x << '\n';
    x = 65536;
    std::cout << "x yeni deger:" << x << '\n';
    x = 65537;
    std::cout << "x son deger:" << x << '\n';



}


