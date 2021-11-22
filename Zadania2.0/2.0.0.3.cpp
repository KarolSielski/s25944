#include <iostream>

int a, b, s;

auto main() -> int
{
	std::cout<<"Podaj poczatkowa liczbe: ";
	std::cin>> a;
	std::cout<<std::endl;
	
	std::cout<<"Podaj koncowa liczbe: ";
	std::cin>> b;
	std::cout<<std::endl;
	
    std::cout<<"Podaj przeskok liczb: ";
	std::cin>> s;
	std::cout<<std::endl;
	
	if(s>0)
	{for(a; a<b; a=a+s)
	 {	
		
		std::cout<<a<<std::endl;
	 }
    }
	if(s<0)
	{for(a; a<b; a=a+(s*-1))
	 {	
		
		std::cout<<a<<std::endl;
	 }
    }
	if(s==0)
	{
		std::cout<<"ERROR"<<std::endl;
	}	
	
		
	
	return 0;
}	
