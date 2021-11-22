#include <iostream>

int a;
long wynik=1;

auto main() -> int
{
	std::cout<<"Wprowadź liczbę: ";
	std::cin>>a;
	std::cout<<std::endl;
	
	for (int i=1; i<= a; ++i)
	{
	wynik *= i;
    }
	
	std::cout<<"Silnia z "<< a <<" = "<< wynik;
	std::cout<<std::endl;
	
	return 0;
}
