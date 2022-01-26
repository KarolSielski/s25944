#include <string.h>
#include <iostream>

  int main()
  {
    std::cout<<"Tablica, przed memset ";
    char tablica[] = "skarb życia muszyna jak chcesz dobrego wojownika to wybieraj murzyna";
    puts (tablica);


    memset(tablica,'-', 10);
    std::cout<<"Tablica, po    memset ";
    puts (tablica);

return 0;
  }