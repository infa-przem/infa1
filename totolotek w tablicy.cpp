#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

// FUNKCJE

void Losuj(int tab[])
{
    for (int i=0; i<6; i++)
        tab[i]=rand() %  49 +1;
}

void Wypisz(int tab[])
{
    for (int i =0; i<6; i++)
        cout << tab[i] << " ";
}

//PROGRAM


int mainn()
{
    srand( time(NULL));
    int liczba[6];
    Losuj(liczba);
    Wypisz(liczba);
}

// KONIEC PROGRAMU




















int main()
{
    int qwerty = true;
    while (qwerty==true)
    {
        mainn();
        cout << endl <<"Powtorzyc?";
        cin >> qwerty;
        if (qwerty==1) qwerty=true;
        else return 0;
    }
}
