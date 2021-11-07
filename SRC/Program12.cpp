#include <iostream>


using namespace std;

float x,y;
int wybor;

int main()
{
	
for(;;)	
 {	
   cout<<"Podaj 1sza liczbe: ";
   cin>>x;
   cout<<"Podaj 2ga liczbe: ";
   cin>>y;
   
   cout<<endl;
   cout<<"MENU GLOWNE" <<endl;
   cout<<"---------------" <<endl;
   cout<<"1. Dodawanie" <<endl;
   cout<<"2. Odejmowanie" <<endl;
   cout<<"3. Mnozenie" <<endl;
   cout<<"4. Dzielenie" <<endl;
   cout<<"5. Zamknij Program"<<endl;
   cout<<"Wybierz: ";
   cin>>wybor;
   
   switch(wybor)
   {
	   case 1:
		   cout<<"Suma = "<< x+y<<"\n";;
	   break;

       case 2:
		   cout<<"Roznica = "<< x-y<<"\n";   
	   break;

	   case 3:
		   cout<<"Iloczyn = "<< x*y<<"\n";;
	   break;

	   case 4:
	       if(y==0) 
	       cout<<"Cholero nie dziel przez 0!"<<endl;
	       else
		   cout<<"Iloraz = "<< x/y<<"\n";
	   break;
	   
	   case 5:
	       exit(0);
	   break;
	   
	   default: cout<<"Niepoprawne dane"<<endl;
	}
	getchar();getchar();
	system("clear");
 }	


return 0;	
}
