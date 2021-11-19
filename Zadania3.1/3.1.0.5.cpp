#include <iostream>
#include <ctime>
#include <cstdlib>

int k,a;

auto main() -> int
{
	int T [50];
	
	//std::cout<<"Podaj zakres liczb: "; //<<"\n";
	k=100;
	
	srand(time(NULL));
	
	int najw=0, najm=0, index1=0, index2=0;
	
	for(int i=0; i<50; i++)
	{
	
	a = rand()%(k+1);
	
	if(T[i]>T[najw])
	 {	
	    najw=i;
	     	
     }
     
    if(T[i]<T[najm])
     {
		 najm=i;
		 
	 }	 
    
    }
    std::cout<<"indeks najwiekszej liczby to: "<<najw<<std::endl;
    std::cout<<"indeks najmniejszej liczby to: "<<najm<<std::endl;
    
	return 0;
}
