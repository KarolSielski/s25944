#include <iostream>

int a, b;

auto main() -> int
{
	std::cout<<"podaj liczbe: ";
	std::cin>>a;
	std::cout<<std::endl;
	
    
   if(a==0)
   { 
	   std::cout<<"0";
	   std::cout<<std::endl;
	   return 0;
   }
   if(a>0)
   {
       std::cout<<"1";
	   std::cout<<std::endl;
   }
   else
   {
	   std::cout<<"-1";
	   std::cout<<std::endl;
   }
   
   return 0;
}      
