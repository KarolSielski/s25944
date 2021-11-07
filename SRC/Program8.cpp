//Zadanie "po ilu godzinach populacja osiągnie miliard?"
#include <iostream>
#include <string>

using namespace std;

int godzin=0, populacja=1;

int main()
{
   while(populacja<=1000000000)
   {
	   godzin++;
	   populacja = populacja*2;
	   
	   cout<<"minelo godzin: "<<godzin<<endl;
	   cout<<"liczba bakterii: "<< populacja<<endl;
   }
   return 0;
}  
