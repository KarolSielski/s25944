#include <iostream>

int a, b, c;

auto main() -> int
{
	std::cout<<"podaj pierwsza liczbe: ";
	std::cin>>a;
	std::cout<<std::endl;
	std::cout<<"podaj druga liczbe: ";
	std::cin>>b;
    std::cout<<std::endl;
	
	c=a*b;
	
	std::cout<<"Wynik Twojego Mnożenia to: "<<c<<std::endl;
	
	return 0;
}	
