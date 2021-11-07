#include <iostream>

using namespace std;

int uczniowie, cukierki, a, b;


int main()
{ 
	cout << "Ile uczniów liczy twoja klasa:  ";
	cin >> uczniowie;
	
	cout << "Ile cukierków w tym roku kupiła mama: ";
	cin >> cukierki;
	
	 a = cukierki/(uczniowie-1);
	 
	 cout<< "Cukierków dla każdego ucznia: "<<a<<endl;
	 
	 b>0 ;
	 b = cukierki-(a*(uczniowie-1));
	 
	 cout<< "Tyle cukierków zostanie dla ciebie: "<<b<<endl;
	 
	 return 0;
	 
}
	 
	
