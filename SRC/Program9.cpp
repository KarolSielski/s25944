//Gra w liczby losowe

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

int a, b, ile_prob=0;



int main()
{
	cout<<"Witaj! Pomyślałem sobie liczbę z zakresu od 1 do 100"<< endl;
	srand(time(NULL));
	a = rand()%100+1;
	
	while(b!=a)
	{
		ile_prob++;
		cout<<"zgadnij jaka to liczba (to Twoja "<<ile_prob<< " proba) ";
		cin>> b;
		
		if(b==a)
		cout<<"Wygrywasz (w "<<ile_prob<<" probach) "<<endl;
		else if(b<a)
		cout<<"to za mało"<<endl;
		else if(b>a)
		cout<<"to za dużo"<<endl;
		
	}
	
    getchar();
    	
	return 0;
}	

