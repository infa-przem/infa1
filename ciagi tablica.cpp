#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE

void Dane(int &ile, int &a1, int &rr)
{
    cout <<"Podaj ile liczb: ";
    cin >> ile;
    cout <<"Podaj roznice ";
    cin >> rr;
    cout <<"Podaj liczbe pierwsza: ";
    cin >> a1;
}

void oblicz(int &ile, int a1, int rr, int tab[], int &s)
{
    tab[0]=a1;
    s = tab[0];
    for(int i=1; i<ile; i++)
    {
        tab[i]=tab[i-1]+rr;
        s+=tab[i];
    }
}

void wypisz(int ile, int tab[])
{
 for(int i=0; i<ile; i++)
    {
        cout << " " << tab[i] << endl;
    }
}
//PROGRAM



int mainn()
{
    int n=0;
    int r=0;
    int w1=0;
    int liczba[100];
    int suma=0;
    Dane(n,w1,r);
    oblicz(n,w1,r,liczba,suma);
    cout << " Wurazy ciagu: " << endl;
    wypisz(n,liczba);
    cout << endl;


    cout << "Suma: " << suma << endl;
    cout << "Srednia arytmetyczna: " << suma/n;
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
