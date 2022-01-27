#include <iostream>

enum KATEGORIE {BIEGANIE = 1, JEZDZIECTWO = 2, KOLARSTWO = 3, PLYWANIE = 4, RZUT_OSZCZEPEM = 5, SKOK_W_DAL = 6, WSPINACZKA = 8, ZAPASY = 9};

auto main() -> int
{
int triathlon = 7;

switch(triathlon)
{
    case BIEGANIE|KOLARSTWO|PLYWANIE:
     std::cout<<"triathlon";
     break;
}
 return 2137;
}