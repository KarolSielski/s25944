#include <iostream>

int max2(int x, int y);
int max3(int x, int y, int z);

auto main() -> int
{
    int a, b, c;

    std::cout << "podaj pierwsza liczbe: ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "podaj druga liczbe: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "podaj trzecia liczbe: ";
    std::cin >> c;
    std::cout << std::endl;
    std::cout << "Najwieksza to: " << max3(a, b, c);
    std::cout << std::endl;

    return 0;
}

auto max2(int x, int y) -> int
{

    if (x >= y)
        return x;
    else if (y >= x)
        return y;
}

auto max3(int x, int y, int z) -> int
{

    if (max2(x, y) >= z)
        //std::cout << max2(x, y) << std::endl;
        return max2(x, y);
    else if (z >= max2(x, y))
        //std::cout << z << std::endl;
        return z;
}
