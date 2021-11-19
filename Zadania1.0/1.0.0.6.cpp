#include <iostream>

int a, b;

auto main() -> int
{
	std::cout<<"podaj pierwsza liczbe: ";
	std::cin>>a;
	std::cout<<std::endl;
	std::cout<<"podaj druga liczbe: ";
	std::cin>>b;
    std::cout<<std::endl;
    
   if(a==b)
   { 
	   std::cout<<a<<" = "<<b;
	   std::cout<<std::endl;
	   return 0;
   }
   if(a>b)
   {
       std::cout<<a<<" > "<<b;
	   std::cout<<std::endl;
   }
   else(b>a);   
   {
	   std::cout<<a<<" < "<<b;
	   std::cout<<std::endl;
   }
   
   return 0;
}      
