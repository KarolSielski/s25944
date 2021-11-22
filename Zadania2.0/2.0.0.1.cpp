#include <iostream>

int a, b;

auto main() -> int
{
	std::cout<<"Podaj poczatkowa liczbe: ";
	std::cin>> a;
	std::cout<<std::endl;
	
	std::cout<<"Podaj koncowa liczbe: ";
	std::cin>> b;
	std::cout<<std::endl;
	
	for(a; a<b; a++)
	{
		std::cout<<a<<std::endl;
	}	
	
	return 0;
}	
