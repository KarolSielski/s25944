//Ciąg Fibonacciego
#include <iostream>
#include <iomanip>
using namespace std;

long double fib[1000000];
int n;

int main()
{
	cout<<"Ile liczb Fibonacciego mam wyznaczyć?: "<<endl;
	cin>>n;
	
	fib[0]=1;
	fib[1]=1;
	
	for(int i=2; i<n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	
cout<<setprecision(10000);	
	
    for(int i=2; i<n; i++)
	{
		cout<<endl<<"Wyraz nr "<<i+1<<": "<<fib[i]<<"\n";
	}
	
	
	return 0;
}		 
		
	
