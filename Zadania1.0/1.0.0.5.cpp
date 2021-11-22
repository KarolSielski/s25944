#include <iostream>

int a;

auto main() -> int
{
	std::cout<<"podaj pierwsza liczbe: ";
	std::cin>>a;
	std::cout<<std::endl;
	
	
	if(a<0)
	{
		a=a*(-1);
		std::cout<<a<<std::endl;
		return 0;
	}
	
	std::cout<<a<<std::endl;
	
	return 0;
}	
