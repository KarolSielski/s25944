#include <iostream>

char Tablica[93];

using namespace std;

auto main() -> int
{
    int i;

    cout << "\nThe ASCII Values of all the Characters are\n";

    for (i = 33; i <= 126; i++)
    {
        Tablica[i] = i;
        cout << "The ASCII value of " << i << " = " << Tablica[i] << endl;
        //cout << "The ASCII value of " << (char)i << " = " << i << endl;
    }

    return 0;
}