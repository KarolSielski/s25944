#include <iostream>
#include <vector>


int * copyTableToVector(int tablica[100][8], int indeks){
    int reszta;
    if (indeks % 3 == 0)
    {
        reszta = indeks % 5;
    }else{
        reszta = indeks % 3;
    }
    
    std::vector<int> wektor;

    for (int i = 0; i < 8; i++)
    {
        wektor.push_back(tablica[reszta][i]);
    }

    int *wskaznik;
    wskaznik = &wektor.back();
    return wskaznik;

    
}

auto main() -> int{
int indeks = 25942; //reszta z dzielenia przez 5 wynosi 4
int tablica[100][8];

for (int i = 0; i < 100; i++)
{
    for (int j = 0; j < 8; j++)
    {
        tablica[i][j] = rand() % 100;
        std::cout << tablica[i][j] << " "; //wyswietlamy cala tablice
    }
    std::cout << std::endl;
}

std::cout << " wynik to: " << *copyTableToVector(tablica, indeks) << std::endl;


return 0;
}
