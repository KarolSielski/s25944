#include <iostream>
#include <string>
#include <vector>

struct STUDENT
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
};

auto average_of(STUDENT x)
{

    int pupa = 0;
    int ilosc = x.oceny.size();

    for (int j = 0; j < ilosc; j++)
    {
        x.oceny.at(j);

        pupa = pupa + x.oceny.at(j);
    }
    return pupa / ilosc;
}

STUDENT get_best_student(std::vector<STUDENT> const &x)
{
    int y;
    int najlepszy;
    STUDENT naj;

    for (auto i = 0; i < x.size(); i++)
    {
        y = average_of(x.at(i));
        if (najlepszy <= y)
        {
            najlepszy = y;
        }
    }

    for (auto i = 0; i < x.size(); i++)
    {
        if (najlepszy == average_of(x.at(i)))
        {
            naj = x.at(i);
        }
    }

    return naj;
}
auto main() -> int
{
    STUDENT pierw;
    pierw.imie = "Karol-1";
    pierw.nazwisko = "Sielski";
    pierw.oceny.push_back(5);
    pierw.oceny.push_back(5);
    pierw.oceny.push_back(5);
    pierw.oceny.push_back(5);

    STUDENT drug;
    drug.imie = "Karol-2";
    drug.nazwisko = "Sielski";
    drug.oceny.push_back(1);
    drug.oceny.push_back(2);
    drug.oceny.push_back(4);
    drug.oceny.push_back(6);
    drug.oceny.push_back(4);

    STUDENT trze;
    trze.imie = "Karol-3";
    trze.nazwisko = "Sielski";
    trze.oceny.push_back(1);
    trze.oceny.push_back(5);
    trze.oceny.push_back(1);
    trze.oceny.push_back(5);
    trze.oceny.push_back(1);
    trze.oceny.push_back(5);

    STUDENT czw;
    czw.imie = "Karol-4";
    czw.nazwisko = "Sielski";
    czw.oceny.push_back(1);
    czw.oceny.push_back(2);
    czw.oceny.push_back(3);
    czw.oceny.push_back(4);
    czw.oceny.push_back(4);
    czw.oceny.push_back(4);
    czw.oceny.push_back(4);

    std::vector<STUDENT> stud;

    stud.push_back(pierw);
    stud.push_back(drug);
    stud.push_back(trze);
    stud.push_back(czw);

    std::cout << average_of(pierw) << "\n";
    std::cout << average_of(drug) << "\n";
    std::cout << average_of(trze) << "\n";
    std::cout << average_of(czw) << "\n";

    std::cout << "Najlepszy to - " << get_best_student(stud).imie;

    return 2137;
}
