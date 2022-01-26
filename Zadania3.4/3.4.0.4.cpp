#include <iostream>

auto cone(float &wysokosc, float &promien) -> void{
    promien = (3.14 * (promien * promien));
    wysokosc = ((promien / 3) * wysokosc);
}

    int main()
        {
            float wysokosc, promien;

            std::cout << "Podaj promien:" << std::endl;
            std::cin >> promien;

            std::cout << "Podaj wysokosc:" << std::endl;
            std::cin >> wysokosc;

            cone(wysokosc, promien);

            std::cout << "Pole podstawy stozka = " << promien << std::endl;
            std::cout << "Objetosc stozka = " << wysokosc << std::endl;

            return 0;

        }