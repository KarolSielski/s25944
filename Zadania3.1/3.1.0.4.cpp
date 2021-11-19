#include <iostream>

int a, b, n, wynik=0;

auto main() -> int
{
    
    std::cout<<"Podaj liczbe początkową: ";
    std::cin>>a;
    std::cout<<"Podaj liczbe końcową: ";
    std::cin>>b;
    
    n=b-a;
    
    int Tablica [n];
    Tablica [1] = a;
    
    for(int i=a; i<=b; i++)
    {
		wynik=wynik+i;	
	}
	
	std::cout<<wynik<<std::endl;
	
	return 0;
	
}		
    
   
