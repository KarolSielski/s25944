//Zadanie pierwsze z funkcji For
#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
	for(int i=15; i>=0; i--)
   {
	sleep(1);
	system("clear");   
	cout<< i <<endl;
   }
   cout<< "JEBUT" <<endl;
   
	return 0;
}	
