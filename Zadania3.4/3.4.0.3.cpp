#include <iostream>

auto swap(int *wskaznik1, int *wskaznik2){
    int temp1 = *wskaznik1;
    *wskaznik1 = *wskaznik2;
    *wskaznik2 = temp1;
}

auto main() -> int{

    int *wskaznik1;
    int *wskaznik2;
    int zmienna1 = 96;
    int zmienna2 = 69;
    wskaznik1 = &zmienna1;
    wskaznik2 = &zmienna2;

    std::cout << "wskaznik 1 wynosi: " << *wskaznik1 << std::endl;
    std::cout << "wskaznik 2 wynosi: " << *wskaznik2 << std::endl;

    std::cout << "robimy zmiane...." << std::endl;
    swap(wskaznik1, wskaznik2);
    std::cout << "wskaznik 1 wynosi: " << *wskaznik1 << std::endl;
    std::cout << "wskaznik 2 wynosi: " << *wskaznik2 << std::endl;




    return 0;
}