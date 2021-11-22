#include <iostream>



auto main() -> int
{
	int rzedy;
	
	std::cout<<"wprowadź liczbę rzędów"<<std::endl;
	std::cin>>rzedy;
	
	for(rzedy; rzedy>=1; rzedy--)
	{ 
		for(int j=1; j<=rzedy; j++)
		{
			std::cout<<"*";
		}
		std::cout << "\n";
	}
	return 0;
}			
