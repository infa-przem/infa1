
#include <iostream>
#include <math.h>

using namespace std;

void kwadrat(int x, int y)
{
    for (int i=1; i<=y; i++)
    {
        for (int j=1; i<=x; j++)
        {
            cout << "*";
        }
    }
}

int main()
{
 int decyzja=1;
 while (decyzja>=1) {
        if (decyzja>1) {
            cout << "Blad" << endl;
            return 0;
        }

    // POCZATEK
    int pion, poziom;
    cout << "Wiersze: " << endl;
    cin>> poziom;
    cout << "Kolumny: " << endl;
    cin >> pion;
    kwadrat(poziom, pion);




























    // KONIEC


    cout << endl << endl << endl << "Powtorzyc? " << endl;
    cin >> decyzja;
    cout << "" << endl << endl;
 };
 return 0;



}
