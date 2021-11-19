#include <iostream>

using namespace std;

int n;

auto main() -> int
{
	cout<<"wpisz zmienną: ";
	cin>>n;
	
	int tab[n];
	
	tab[0]=10;
	for(int i=1; i<=n; ++i)
	{
		tab[i]=tab[i-1]+1;
		cout<<tab[i-1]<<endl;
	}
	
	
	
	return 0;
}		

