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
	
	if(a>b)
	{
		std::cout<<"Wieksza liczba to: "<<a<<std::endl;
		return 0;
	}
	
	std::cout<<"Wieksza liczba to: "<<b<<std::endl;
	
	return 0;
}	
