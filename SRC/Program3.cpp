//bankomat
#include <iostream>
#include <string> 

using namespace std;

string PIN;

int main()
{ 
	cout<< "Witaj w naszym banku! " <<endl;
	cout<< "Podaj swój PIN: ";
	cin>> PIN;
	
	if(PIN=="1322"||PIN=="1805")
	{
		cout<< "Poprawny PIN" <<endl;
	}
	else
	{
		cout<< "Niepoprawny PIN" <<endl;
	}
	
	
	return 0;
}	
