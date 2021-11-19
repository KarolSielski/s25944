#include <iostream>

int a, b, c;

auto main() -> int
{
	std::cout<<"podaj 1 liczbe: ";
	std::cin>>a;
	std::cout<<std::endl;
	std::cout<<"podaj 2 liczbe: ";
	std::cin>>b;
	std::cout<<std::endl;
	std::cout<<"podaj 3 liczbe: ";
	std::cin>>c;
	std::cout<<std::endl;
	
    
   if(a>b && a>c)
   { 
	   std::cout<<"Najwieksza liczba to: "<<a;
	   std::cout<<std::endl;
	   return 0;
   }
   if(b>a && b>c)
   { 
	   std::cout<<"Najwieksza liczba to: "<<b;
	   std::cout<<std::endl;
	   return 0;
   }
   if(c>a && c>b)
   { 
	   std::cout<<"Najwieksza liczba to: "<<c;
	   std::cout<<std::endl;
	   return 0;
   }
   return 0;
}      
