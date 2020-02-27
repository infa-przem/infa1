#include <iostream>
#include <math.h>

using namespace std;

// FUNKCJE
float Dane()
{
    float liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    return liczba;
}


float pot_dod(float p, int w) {
    float wk=1;
    for (int i=1; i<=w; i++)
    {
        wk=wk*p;
    }
    return wk;
}

float pot_uj(float p, int w) {
    float wk=1;
    w=w*(-1);
    for (int i=1; i<=w; i++)
    {
        wk=wk*(1/p);
    }
    return wk;
}

//PROGRAM

int main()
{
 int decyzja=1;
 while (decyzja>=1) {
        if (decyzja>1) {
            cout << "Blad" << endl;
            return 0;
        }

    // POCZATEK

    float podstawa=Dane();
    int wykladnik=Dane();
    float wyn;
    if(wykladnik < 0)
    {
        wyn=pot_uj(podstawa, wykladnik);
    } else
    {
        wyn=pot_dod(podstawa, wykladnik);
    }

    cout << "Wynik to: " << wyn;

    // KONIEC




















    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}

