#include <iostream>


int max2( int a, int b);
int max3(int a, int b, int c);

int main()
{
    int pierwsza,druga,trzecia;
    std::cout<<"Podaj liczbe: \n";
    std::cin>>pierwsza;
    std::cout<<"Podaj liczbe: \n";
    std::cin>>druga;
    std::cout<<"Podaj liczbe: \n";
    std::cin>>trzecia;
    std::cout<<"Najwieksza z podanych to: "<<max3(pierwsza, druga, trzecia)<<"\n";

    return 0;
}
int max2( int a, int b)
{
    if(a>b)

    {
        return a;
    }

    else

    {
        return b;
    }
}
int max3(int a, int b, int c)
{
    if(max2(a,b)>c)

    {
        return max2(a,b);
    }

    else

    {
        return c;
    }
}