#include <iostream>

float wzor (float V, float a, float b, float H){

//float x = 1/3;
float x = 0.33;

V=(x*3.14*H*(a*a+a*b+b*b));

return V;
}

auto main() -> int {
	
	float a, b, H, x;
	float V;
	int wybor;
	
   for(;;){
   std::cout<<"MENU GLOWNE" <<std::endl;
   std::cout<<"---------------" <<std::endl;
   std::cout<<"1. Działanie" <<std::endl;
   std::cout<<"2. zamknij Program" <<std::endl;
   std::cin>> wybor;
   std::cout<<std::endl;
   
   switch(wybor)
   {
	
	case 1:
	
	std::cout << "Podaj promień koła nr1: ";
	std::cin >> a;
    std::cout << "\n";
    
    std::cout << "Podaj promień koła nr2: ";
	std::cin >> b;
    std::cout << "\n";
    
    std::cout << "Podaj wysokosc stozka: ";
	std::cin >> H;
    std::cout << "\n";
    
    std::cout<<"Objętość = ";
    std::cout<<wzor(V,a, b, H);
    std::cout << "\n";
    
    break;
    
    case 2:
    
    exit(0);
    
    break;
    
    default: std::cout<<"Niepoprawne dane"<<std::endl;
    
    }
      getchar();getchar();
	  system("clear");
	} 
    return 0;
    
}    

 
