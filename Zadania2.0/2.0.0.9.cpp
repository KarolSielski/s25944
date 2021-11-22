#include <iostream>

int a, i=1;
long wynik=1;

auto main() -> int
{
	std::cout<<"Wprowadź liczbę: ";
	std::cin>>a;
	std::cout<<std::endl;
	
	//int i=1;
	while(i<=a)
	{
		wynik *= i;
		i++;
	}	
	
	std::cout<<"Silnia z "<< a <<" = "<< wynik;
	std::cout<<std::endl;
	
	return 0;
}
