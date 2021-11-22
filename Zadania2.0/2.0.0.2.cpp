#include <iostream>

int a, b, c;

auto main() -> int
{
	std::cout<<"Podaj poczatkowa liczbe: ";
	std::cin>> a;
	std::cout<<std::endl;
	
	std::cout<<"Podaj koncowa liczbe: ";
	std::cin>> b;
	std::cout<<std::endl;
	
	std::cout<<"Podaj dzielnik: ";
	std::cin>> c;
	std::cout<<std::endl;
	
	if(c!=0)
	{
	
	 for(a; a<b; a++)
	  {
		 if(a%c==0)
		 {
		  std::cout<<a<<std::endl;
	     }
	  }	
	
    }
    
    else
    {
		std::cout<<"ERROR";
		std::cout<<std::endl;
	}
		
	return 0;
}	
