#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

const int wysokosc = 25;
const int szerokosc = 25;

bool debug = false;

int zm_i, zm_j;

int glowaX, glowaY; //pozycja glowy(startowa)

int owocY, owocX; //pozycja owoca

int points = 0; //punkty

int ogonX[100], ogonY[100];
int dOgona;

int predkosc_gry;
int wybor, wybor_opcje;

bool przegrana;

int debugmodeon;

enum kierunek {stop = 0, gora, dol, prawo, lewo};
kierunek dir; //dir=direction

void ustawienia()
{
    przegrana = false;
    dir = stop;
    glowaX = wysokosc / 2;
    glowaY = szerokosc / 2;

    owocY = rand() % (szerokosc + 1);
    owocX = rand() % (wysokosc + 1);

    while (owocY >= 24 || owocY <= 0 || owocX >= 24 || owocX <= 0)
    {
        owocY = rand() % (szerokosc + 1);
        owocX = rand() % (wysokosc + 1);
    }
}

void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = lewo;
            break;
        case 'd':
            dir = prawo;
            break;
        case 'w':
            dir = gora;
            break;
        case 's':
            dir = dol;
            break;
        case 'x':
            przegrana = true;
            break;
        }
    }
}

void mechanika_gry()
{
    int ostSegX = ogonX[0];
    int ostSegY = ogonY[0];

    int ostSeg2X, ostSeg2Y;

    ogonX[0] = glowaX;
    ogonY[0] = glowaY;

    for (int i = 1; i < dOgona; i++)
    {
       ostSeg2X = ogonX[i];
       ostSeg2Y = ogonY[i];
       ogonX[i] = ostSegX;
       ogonY[i] = ostSegY;
       ostSegX = ostSeg2X;
       ostSegY = ostSeg2Y;
    }
    
    
    switch (dir)
    {
    case lewo:
        glowaX = glowaX - 1;
        break;

    case prawo:
        glowaX = glowaX + 1;
        break;

    case gora:
        glowaY = glowaY - 1;
        break;

    case dol:
        glowaY = glowaY + 1;
        break;
    default:
    break;    
    }

    if(glowaX>szerokosc || glowaX<0 || glowaY>wysokosc || glowaY<0)
    przegrana=true;
    for (int i = 0; i < dOgona; i++)
    {
        if (ogonX[i] == glowaX && ogonY[i] == glowaY)
        {
            przegrana = true;
        }   
    }
    
    if (glowaX == owocX && glowaY == owocY)
     {
        points = points + 1;
        owocY = rand() % (szerokosc + 1);
        owocX = rand() % (wysokosc + 1);
        dOgona = dOgona+1;

        while (owocY >= 24 || owocY <= 0 || owocX >= 24 || owocX <= 0)
        {
            owocY = rand() % (szerokosc + 1);
            owocX = rand() % (wysokosc + 1);
        }
     }
}    


void plansza() //plansza + owocek
{

    system("cls");

    for (zm_i = 0; zm_i < wysokosc; zm_i++)
    {
        std::cout << "*";

        for (zm_j = 0; zm_j < szerokosc; zm_j++)
        {
            if (zm_i == 0 || zm_i == wysokosc-1)
                std::cout << "*";
            else if (zm_i == glowaY && zm_j == glowaX)
                std::cout << "@";   
            else if (zm_i == owocY && zm_j == owocX)
            {
                if (glowaX == owocY && glowaY == owocX)
                {
                    std::cout << "@";
                }
                else
                {
                    std::cout << "+";
                }    
            }
            else
            {

             bool print = false;

             for (int k = 0; k < dOgona; k++)
                {
                    if (ogonX[k] == zm_j && ogonY[k] == zm_i)
                    {
                        std::cout << "#";
                        print = true;
                    }
                }
                    if (!print)
                    std::cout << " ";
            }
        }    
        std::cout << "*" << std::endl;
    }    
    

    std::cout << "Liczba punktow: " << points << std::endl;
    std::cout << std::endl;

    if (debug == true)
    {
    std::cout << "DEBUG WINDOW"<< std::endl;
    std::cout << "=============================================="<< std::endl;
    std::cout << "DEBUG OWOC: " << "x-" << owocX << " , " << "y-" << owocY << std::endl;
    std::cout << "DEBUG GLOWA: " << "x-" << glowaX << " , " << "y-" << glowaY << std::endl;
    std::cout << "DEBUG SZEROKOSC I WYSOKOSC: " << "WYS:" << wysokosc << " , " << "SZER: " << szerokosc;
    }
    
}

void main_menu()
{

    std::cout<< "==============================" << std::endl;
    std::cout<< "============ SNAKE ===========" << std::endl;
    std::cout<< "==============================" << std::endl;
    std::cout<< "|          1. opcje          |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "|          2. gra            |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "|          3. wyjscie        |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "|    made by Karol Sielski   |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "==============================" << std::endl;
}


auto main() -> int //dzialanie gry
{
    main_menu();

    std::cin>>wybor;

    switch (wybor)
    {
    case 1:

      system("cls");
 
      std::cout<< "==============================" << std::endl;
      std::cout<< "============ OPCJE ===========" << std::endl;
      std::cout<< "==============================" << std::endl;
      std::cout<< "|                            |" << std::endl;
      std::cout<< "|                            |" << std::endl;
      std::cout<< "|        1. debug mode       |" << std::endl;
      std::cout<< "|                            |" << std::endl;
      std::cout<< "|         2.  EXIT           |" << std::endl;
      std::cout<< "|                            |" << std::endl;
      std::cout<< "|       work in progress     |" << std::endl;
      std::cout<< "==============================" << std::endl;
      std::cin>>wybor_opcje;
      switch (wybor_opcje)
      {

      case 1:
          
          system("cls");
          std::cout << "aby wlaczyc debug mode wcisnij 1 " << std::endl;
          std::cin >> debugmodeon;
          std::cout << std::endl;
          system("cls");
          if (debugmodeon = 1)
          {
              debug = true;

              ustawienia();
    while (przegrana == false)
    {
        plansza();
        usleep(100*1000);
        input();
        mechanika_gry();
    }
    if (przegrana == true)
    {
        system("cls");
        std::cout << "G A M E  O V E R" << std::endl;
        std::cout << std::endl;
        std::cout << "ilosc zdobytych punknktow: " << points << std::endl;
        std::cout << std::endl;
    }
    return 0;
          }
    break;
          
    
    case 2:
    return 0;
    break;    
          
      }

    break;

    case 2:  

    system("cls");

    std::cout<< "==============================" << std::endl;
    std::cout<< "====== POZIOM TRUDNOSCI ======" << std::endl;
    std::cout<< "==============================" << std::endl;
    std::cout<< "|          1. TRUDNY         |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "|          2. SREDNI         |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "|          3. LATWY          |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "|    made by Karol Sielski   |" << std::endl;
    std::cout<< "|                            |" << std::endl;
    std::cout<< "==============================" << std::endl;
    
    std::cin >> predkosc_gry;

    switch (predkosc_gry)
    {
    case 1:

    system("cls");

    ustawienia();
    while (przegrana == false)
    {
        plansza();
        usleep(100*1000);
        input();
        mechanika_gry();
    }
    if (przegrana == true)
    {
        system("cls");
        std::cout << "G A M E  O V E R" << std::endl;
        std::cout << std::endl;
        std::cout << "ilosc zdobytych punknktow: " << points << std::endl;
        std::cout << std::endl;

        return 0;
    }

        break;

    case 2:

    system("cls");

    ustawienia();
    while (przegrana == false)
    {
        plansza();
        usleep(200*1000);
        input();
        mechanika_gry();
    }
    if (przegrana == true)
    {
        system("cls");
        std::cout << "G A M E  O V E R" << std::endl;
        std::cout << std::endl;
        std::cout << "ilosc zdobytych punknktow: " << points << std::endl;
        std::cout << std::endl;

        return 0;
    }

        break;

    case 3:    

    system("cls");

    ustawienia();
    while (przegrana == false)
    {
        plansza();
        usleep(300*1000);
        input();
        mechanika_gry();
    }
    if (przegrana == true)
    {
        system("cls");
        std::cout << "G A M E  O V E R" << std::endl;
        std::cout << std::endl;
        std::cout << "ilosc zdobytych punknktow: " << points << std::endl;
        std::cout << std::endl;

        return 0;
    }
        break;

    
    }

    break; 

    case 3:
    return 0;
    break;
    
    }

    return 0;
}


