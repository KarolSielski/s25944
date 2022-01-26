#include <string>
#include <iostream>


void print(std::string *wskaznik)
{
    std::cout <<& *wskaznik;
    std::cout << " = ";
    std::cout << *wskaznik;

}
int main()
{
    std::string zmienna = "Witaj, Swiecie!";
    std::string * wskaznik_ze_zmiennej;
    wskaznik_ze_zmiennej = &zmienna;

    print(wskaznik_ze_zmiennej);


return 0;
}