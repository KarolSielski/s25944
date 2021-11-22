#include <iostream>



auto main() -> int
{
	int rzedy;
	
	std::cout<<"wprowadź liczbę rzędów"<<std::endl;
	std::cin>>rzedy;
	
	for(int i=1; i<=rzedy; i++)
	{ 
		for(int j=1; j<=i; j++)
		{
			std::cout<<"*";
		}
		std::cout << "\n";
	}
	return 0;
}			
	
