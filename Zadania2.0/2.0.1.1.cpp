#include <iostream>

int rozmiar, y;

auto main() -> int
{
	
     std::cout<<"wprowadź wysokość"<<std::endl;
     std::cin>>rozmiar;
     std::cout<<std::endl;
     std::cout<<"wprowadź szerokość"<<std::endl;
     std::cin>>y;
     std::cout<<std::endl;
	
	for(int rzad=1; rzad<=rozmiar; rzad++)
	{
		for(int kolumna=1; kolumna<=y; ++kolumna)
		{
		std::cout<<"#";
	    }
	  
	  std::cout<<std::endl;
	}	

	return 0;
}	
