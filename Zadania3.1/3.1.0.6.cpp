#include <iostream>
#include <ctime>
#include <cstdlib>

int a, b;

auto main() -> int
{
	int T [50];
	
	srand(time(NULL));
	
	std::cout<<"Jakiej liczby szukasz?"<<std::endl;
    std::cin>> b;
    std::cout<<std::endl;
	
	for(int i=0; i<50; i++)
	{
	
	a = rand()%(101);
	
    if(b==T[i])
     {
     std::cout<<"Indeks twojej liczby to: "<<i<<std::endl;
     return 0;
     }

    }
    std::cout<<std::endl;
    std::cout<<"-1"<<std::endl;
    
	return 0;
}	
	
