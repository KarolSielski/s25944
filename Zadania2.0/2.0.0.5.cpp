#include <iostream>

int a,b,x;
bool pierwsza=true;

auto main() -> int
{
	std::cout<<"Podaj liczbe: ";
	std::cin>>a;
	std::cout<<std::endl;
	
	if(a<=1)
	{
		std::cout<<"Nie jest to liczba pierwsza"<<std::endl;
		return 0;
	}
	else
	 for(b = 2; b <= a/2 ; ++b)
	  {
		  
		  if(a%b==0)
		   {	
		     
		     pierwsza=false;
		     break;
		      
		   }
		   
	  }
	  
	  if (pierwsza)
	  for(b = 2; b <= a/2 ; ++b)
	   {
		   for(b=2; b<a; ++b)
		   {
      
			   x=a+(b+;
			   std::cout<<x<<std::endl;
		      
		   }
	   }  
	       
	  else
	   std::cout<<"Nie jest to liczba pierwsza"<<std::endl;
	  
	  
	  return 0;
}	  
