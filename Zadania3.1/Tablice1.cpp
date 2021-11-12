#include <iostream>

using namespace std;

int n, c;
auto main() -> int
{
	cout<<"Jak dluga ma być tablica? (max 100)"<<endl;
	cin>>n;
	
	if(n<=100)
	{
		int tablica[n] = {0};
		for(int c=0; c<n; c++)
		{
			tablica[n] = 0;
		    cout<< tablica[n];
	    }
	}
	else 
    {
    cout<<"ERROR"<<endl;	
	}
	
return 0;

}	
