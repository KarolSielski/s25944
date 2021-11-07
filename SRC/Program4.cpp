//Logowanie

#include <iostream>
#include <string>

using namespace std;

string login, haslo;

int main()
{
	cout<<"Podaj login"<<endl;
	cin>>login;
	
	if(login=="admin")
	{
	 cout<<"Podaj hasło"<<endl;
	 cin>>haslo;
	 if(haslo=="admin")
	
	 {
		cout<<"zalogowano poprawnie"<<endl;
	 }
	 else
	
	 {
		cout<<"bledne haslo"<<endl;
	 }
    }
    else
    {
		cout<<"bledny login"<<endl;
	}	
	return 0;
}
