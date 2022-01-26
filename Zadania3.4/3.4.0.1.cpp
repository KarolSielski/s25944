#include <iostream>
#include <string>
int main()
    {
        std::string jakas_zmienna = "Karol Sielski";
        std::string * wskaznik_zmiennej;
        wskaznik_zmiennej =&jakas_zmienna;

        std::cout << "wartosc zmiennej: " << *wskaznik_zmiennej << "\n";
        std::cout << "adres zmiennej:" << & *wskaznik_zmiennej << "\n";
        std::cout << "rozmiar zmiennej: " << sizeof(*wskaznik_zmiennej) << "\n";

        std::cout << "wartosc wskaznika: " << wskaznik_zmiennej << "\n";
        std::cout << "adres wskaznika: " << & wskaznik_zmiennej << "\n";
        std::cout << "rozmiar wskaznika:  " << sizeof(wskaznik_zmiennej) << "\n";
        
        


        
        return 0;
        
    }