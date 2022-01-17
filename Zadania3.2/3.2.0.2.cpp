#include <iostream>
#include <vector>
#include <limits>

auto cialo() -> int
{
    // zmienne
    std::vector<int> VEC;
    int liczba;

    while (true)
    {
        std::cout << "podaj liczbe: ";
        std::cin >> liczba;

        if (!std::cin)
        {

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Patola byqu.\n";
        }
        else
        {
            if (liczba == 0)
            {
                std::cout << "KONIEC"
                          << "\n";
                std::cout << std::endl;
                break;
            }
            else
            {
                VEC.push_back(liczba);
            }
        }
    }

    for (int i = 0; i < VEC.size(); i++)
    {
        std::cout << VEC[i] << " ";
        if ((i+1) % 5 == 0)
        {
            std::cout << "\n";
        }
    }

    return 0;
}

// glowna funkcja
auto main() -> int
{
    cialo();
}
