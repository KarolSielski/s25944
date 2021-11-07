#include <iostream>
#include <string>

using namespace std;

int wiek;

int main()
{
	cout<<"Podaj wiek"<<endl;
	cin>>wiek;
	
	if(wiek>=18)
	{
		cout<<"jesteś pełnoletni"<<endl;
		if(wiek>=35)
		{
			cout<<"możesz być prezydentem"<<endl;
		}
		else
		{
			cout<<"nie możesz być prezydentem, minimalny wymagany wiek to 35 lat"<<endl;
	    }
	}    
	else
	{
		cout<<"nie jestes pelnoletni wroc jak bedziesz miec 18 lat"<<endl;
	}	 
	return 0;
}			
