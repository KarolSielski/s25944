#include <iostream>
#include <string>

enum Permission {READ = 1, WRITE = 2, EXECUTE = 4};
std::string pozwolenie(Permission);

auto main() -> int
{
    int uzytkownik[10] = {2,3,6,7,4,6,0,1,5,2};
    for(int i=0; i<=10; i++)
    {
        std::cout<<"uzytkownik "<<i<<" moze - "<<pozwolenie(Permission(uzytkownik[i]))<<"\n";
    }
    return 0;
}

std::string pozwolenie(Permission per)
{
    switch(per)
    {
        case READ:
        return "czytac";
        break;

        case WRITE:
        return "pisac";
        break;

        case READ|WRITE:
        return "Czytac i pisac";
        break;

        case EXECUTE:
        return "Wykonywac";
        break;

        case EXECUTE|WRITE:
        return "Wykonywac i Czytac";
        break;

        case EXECUTE|READ:
        return "Wykonywac i Pisac";
        break;

        case EXECUTE|WRITE|READ:
        return "Wykonywac, Pisac i Czytac";
        break;

        default:
        return "nic";
        break;
    }
}
